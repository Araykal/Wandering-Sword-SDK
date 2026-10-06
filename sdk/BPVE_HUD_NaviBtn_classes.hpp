#pragma once



// Package: BPVE_HUD_NaviBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_HUD_NaviBtn.BPVE_HUD_NaviBtn_C
// 0x0028 (0x05B0 - 0x0588)
class UBPVE_HUD_NaviBtn_C final : public UJHNeoUIHUDNaviBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPCMP_NeoUISimpleBtn_C*                BPCMP_NeoUISimpleBtn;                              // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_RedDot;                                        // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPVE_HUD_NaviBtn(int32 EntryPoint);
	void BndEvt__BPVE_HUD_NaviBtn_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_1_NeoUICommonButtonSingleClick__DelegateSignature(class UNeoUICommonButton* SrcWidget);
	void EVT_RenderView();
	void BndEvt__BPVE_HUD_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetHotKeyVisible(bool IsVisible_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_HUD_NaviBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_HUD_NaviBtn_C")
	}
	static class UBPVE_HUD_NaviBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_HUD_NaviBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_HUD_NaviBtn_C;

SDK_NAMESPACE_END
