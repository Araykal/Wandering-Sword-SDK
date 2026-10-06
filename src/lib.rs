slint::include_modules!();
use slint::ComponentHandle;
use std::{
    sync::{
        Arc,
        atomic::{AtomicBool, AtomicU32, Ordering},
    },
    thread,
    time::Duration,
};

mod offset;
static FEATURES: AtomicU32 = AtomicU32::new(0);

pub fn run_menu() -> Result<(), slint::PlatformError> {
    let ui = AkariMenu::new()?;
    let shown = Arc::new(AtomicBool::new(true));
    let toggle = shown.clone();
    let handle = ui.as_weak();
    ui.on_toggle_feature(|i| {
        if (0..4).contains(&i) {
            let on = (FEATURES.fetch_xor(1 << i, Ordering::Relaxed) & (1 << i)) == 0;
            offset::set_feature(i as u32, on);
        }
    });
    let search_ui = ui.as_weak();
    ui.on_search_item(move |query| {
        if let Some(ui) = search_ui.upgrade() {
            let items = offset::search_items(&query);
            ui.set_suggestions(
                std::rc::Rc::new(slint::VecModel::from(
                    items
                        .into_iter()
                        .map(Into::into)
                        .collect::<Vec<slint::SharedString>>(),
                ))
                .into(),
            );
            let progress = offset::catalog_progress();
            ui.set_item_status(format!(" {} ", progress).into());
        }
    });
    let give_ui = ui.as_weak();
    ui.on_give_item(move |name, count| {
        let n = count.trim().parse::<i32>().unwrap_or(1).clamp(1, 9999);
        let rc = offset::give_item(&name, n);
        if let Some(ui) = give_ui.upgrade() {
            ui.set_item_status(
                if rc == 1 {
                    format!("que：{} × {}", name, n)
                } else {
                    format!("：{}", rc)
                }
                .into(),
            );
        }
    });
    let refresh = ui.as_weak();
    slint::Timer::default().start(
        slint::TimerMode::Repeated,
        Duration::from_millis(400),
        move || {
            if let Some(ui) = refresh.upgrade() {
                let query = ui.get_item_name();
                if !query.is_empty() {
                    let items = offset::search_items(&query);
                    ui.set_suggestions(
                        std::rc::Rc::new(slint::VecModel::from(
                            items
                                .into_iter()
                                .map(Into::into)
                                .collect::<Vec<slint::SharedString>>(),
                        ))
                        .into(),
                    );
                }
            }
        },
    );
    thread::spawn(move || {
        let mut old = false;
        loop {
            let now = (unsafe {
                windows_sys::Win32::UI::Input::KeyboardAndMouse::GetAsyncKeyState(0x2E)
            } & 1)
                != 0;
            if now && !old {
                let v = !toggle.load(Ordering::Relaxed);
                toggle.store(v, Ordering::Relaxed);
                let h = handle.clone();
                let _ = slint::invoke_from_event_loop(move || {
                    if let Some(u) = h.upgrade() {
                        u.set_visibility(if v { 1.0 } else { 0.0 });
                    }
                });
            }
            old = now;
            thread::sleep(Duration::from_millis(24));
        }
    });
    ui.run()
}
#[unsafe(no_mangle)]
pub extern "system" fn wh_set_feature(i: u32, e: u32) -> i32 {
    if i >= 4 {
        return -1;
    }
    let m = 1 << i;
    if e != 0 {
        FEATURES.fetch_or(m, Ordering::Relaxed)
    } else {
        FEATURES.fetch_and(!m, Ordering::Relaxed)
    };
    offset::set_feature(i, e != 0);
    0
}
#[unsafe(no_mangle)]
pub extern "system" fn wh_get_feature_mask() -> u32 {
    FEATURES.load(Ordering::Relaxed)
}
#[unsafe(no_mangle)]
pub extern "system" fn wh_give_item_by_name(name: *const u16, count: u32) -> i32 {
    if name.is_null() {
        return -1;
    };
    let mut n = 0;
    unsafe {
        while *name.add(n) != 0 {
            n += 1;
        }
    };
    let s = String::from_utf16_lossy(unsafe { std::slice::from_raw_parts(name, n) });
    offset::give_item(&s, count as i32)
}
#[unsafe(no_mangle)]
pub extern "system" fn wh_initialize() -> i32 {
    thread::spawn(|| {
        let _ = run_menu();
    });
    0
}
#[cfg(windows)]
#[unsafe(no_mangle)]
pub extern "system" fn DllMain(
    m: *mut core::ffi::c_void,
    r: u32,
    _: *mut core::ffi::c_void,
) -> i32 {
    if r == 1 {
        unsafe { windows_sys::Win32::System::LibraryLoader::DisableThreadLibraryCalls(m) };
        thread::spawn(|| {
            let _ = wh_initialize();
        });
    }
    1
}
