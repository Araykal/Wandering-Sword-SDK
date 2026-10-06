#pragma once



// Package: BPMV_AgeAlert

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_AgeAlert.BPMV_AgeAlert_C
// 0x0018 (0x03C8 - 0x03B0)
class UBPMV_AgeAlert_C final : public UJHNeoUIAgeAlertView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       BTN_Exit;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_BG;                                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_AgeAlert(int32 EntryPoint);
	void BndEvt__BPMV_AgeAlert_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_AgeAlert_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_AgeAlert_C")
	}
	static class UBPMV_AgeAlert_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_AgeAlert_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_AgeAlert_C;

SDK_NAMESPACE_END
