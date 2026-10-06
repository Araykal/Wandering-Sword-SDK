#pragma once



// Package: BPVE_JHConfigVolumeItem2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHConfigVolumeItem2.BPVE_JHConfigVolumeItem2_C
// 0x0018 (0x0338 - 0x0320)
class UBPVE_JHConfigVolumeItem2_C final : public UJHConfigVolumeItem2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       BTN_Minus;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_Plus;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHConfigVolumeItem2(int32 EntryPoint);
	void BndEvt__BPVE_JHConfigVolumeItem_BTN_Plus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPVE_JHConfigVolumeItem_BTN_Minus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_JHConfigVolumeItem_Slider_126_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Construct();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHConfigVolumeItem2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHConfigVolumeItem2_C")
	}
	static class UBPVE_JHConfigVolumeItem2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHConfigVolumeItem2_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHConfigVolumeItem2_C;

SDK_NAMESPACE_END
