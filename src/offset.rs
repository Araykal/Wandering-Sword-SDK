use std::{
    ffi::c_void,
    sync::atomic::{AtomicU32, Ordering},
};
pub const MODULE_BASE: u64 = 0x7FF70F590000;
pub const JH_ATTRIBUTE_SET_HEALTH: u32 = 0x30;
pub const JH_ATTRIBUTE_SET_MANA: u32 = 0x50;
pub const JH_ATTRIBUTE_SET_JINGLI: u32 = 0x70;
static FLAGS: AtomicU32 = AtomicU32::new(0);
#[cfg(windows)]
unsafe fn bridge() -> Option<*mut c_void> {
    use windows_sys::Win32::System::LibraryLoader::{GetModuleHandleA, LoadLibraryW};
    let loaded = unsafe { GetModuleHandleA(b"wandering_native_bridge.dll\0".as_ptr()) };
    if !loaded.is_null() { return Some(loaded); }
    let own = unsafe { GetModuleHandleA(b"wandering_hack.dll\0".as_ptr()) };
    if own.is_null() { return None; }
    let mut path = vec![0u16; 32768];
    let len = unsafe { windows_sys::Win32::System::LibraryLoader::GetModuleFileNameW(own, path.as_mut_ptr(), path.len() as u32) } as usize;
    if len == 0 || len >= path.len() { return None; }
    let mut dir = String::from_utf16_lossy(&path[..len]);
    dir.truncate(dir.rfind('\\')? + 1);
    dir.push_str("wandering_native_bridge.dll");
    let mut wide: Vec<u16> = dir.encode_utf16().collect(); wide.push(0);
    let module = unsafe { LoadLibraryW(wide.as_ptr()) };
    if module.is_null() { None } else { Some(module) }
}

pub fn set_feature(i: u32, on: bool) -> i32 {
    if i < 3 {
        if on {
            FLAGS.fetch_or(1 << i, Ordering::Relaxed);
        } else {
            FLAGS.fetch_and(!(1 << i), Ordering::Relaxed);
        }
    }
    #[cfg(windows)]
    unsafe {
        if let Some(h) = bridge() {
            let p = windows_sys::Win32::System::LibraryLoader::GetProcAddress(
                h,
                b"wh_native_set_damage999\0".as_ptr(),
            );
            if let Some(f) = p {
                let f: extern "system" fn(i32) -> i32 = std::mem::transmute(f);
                if i == 3 {
                    return f(if on { 1 } else { 0 });
                }
            }
        }
    }
    0
}
pub fn give_item(name: &str, count: i32) -> i32 {
    #[cfg(windows)]
    unsafe {
        if let Some(h) = bridge() {
            let n = b"wh_native_add_item\0";
            let p = windows_sys::Win32::System::LibraryLoader::GetProcAddress(h, n.as_ptr());
            if let Some(f) = p {
                let f: extern "system" fn(*const u16, i32) -> i32 = std::mem::transmute(f);
                let mut w: Vec<u16> = name.encode_utf16().collect();
                w.push(0);
                return f(w.as_ptr(), count);
            }
        }
    }
    -3
}
pub fn pump_game_thread() -> i32 {
    #[cfg(windows)]
    unsafe {
        if let Some(h) = bridge() {
            let n = b"wh_native_pump_game_thread\0";
            let p = windows_sys::Win32::System::LibraryLoader::GetProcAddress(h, n.as_ptr());
            if let Some(f) = p {
                let f: extern "system" fn() -> i32 = std::mem::transmute(f);
                return f();
            }
        }
    }
    0
}

pub fn search_items(query: &str) -> Vec<String> {
    #[cfg(windows)]
    unsafe {
        if let Some(h) = bridge() {
            let p = windows_sys::Win32::System::LibraryLoader::GetProcAddress(
                h,
                b"wh_native_search_items\0".as_ptr(),
            );
            if let Some(f) = p {
                let f: extern "system" fn(*const u16, *mut u16, i32) -> i32 =
                    std::mem::transmute(f);
                let mut q: Vec<u16> = query.encode_utf16().collect();
                q.push(0);
                let mut buf = vec![0u16; 8192];
                if f(q.as_ptr(), buf.as_mut_ptr(), buf.len() as i32) >= 0 {
                    let len = buf.iter().position(|&c| c == 0).unwrap_or(buf.len());
                    let output = String::from_utf16_lossy(&buf[..len]);
                    return output
                        .lines()
                        .filter_map(|line| line.split_once('\t').map(|(_, name)| name.to_owned()))
                        .collect();
                }
            }
        }
    }
    Vec::new()
}
pub fn catalog_progress() -> i32 {
    #[cfg(windows)]
    unsafe {
        if let Some(h) = bridge() {
            let p = windows_sys::Win32::System::LibraryLoader::GetProcAddress(
                h,
                b"wh_native_catalog_progress\0".as_ptr(),
            );
            if let Some(f) = p {
                let f: extern "system" fn() -> i32 = std::mem::transmute(f);
                return f();
            }
        }
    }
    0
}
