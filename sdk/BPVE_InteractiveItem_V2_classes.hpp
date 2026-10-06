#pragma once



// Package: BPVE_InteractiveItem_V2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_InteractiveItem_V2.BPVE_InteractiveItem_V2_C
// 0x0020 (0x0340 - 0x0320)
class UBPVE_InteractiveItem_V2_C final : public UInteractiveJHItemDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_InteractiveJHItem;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_37;                           // 0x0338(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_InteractiveItem_V2(int32 EntryPoint);
	void BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_Gamepad_YPressed();
	void Construct();
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void BndEvt__BPVE_InteractiveItem_V2_BTN_InteractiveJHItem_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	class UWidget* Get_Tool_Tip_Widget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_InteractiveItem_V2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_InteractiveItem_V2_C")
	}
	static class UBPVE_InteractiveItem_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_InteractiveItem_V2_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_InteractiveItem_V2_C;

SDK_NAMESPACE_END
