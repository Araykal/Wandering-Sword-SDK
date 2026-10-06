#pragma once



// Package: BPMV_JHCertView_mobile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHCertView_mobile.BPMV_JHCertView_mobile_C
// 0x0028 (0x03A0 - 0x0378)
class UBPMV_JHCertView_mobile_C final : public UJHNeoUICertificationView_mobile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       BTN_Confirm;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIEditableText*                     INPUT_CODE;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIEditableText*                     INPUT_NAME;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_111;                                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHCertView_mobile(int32 EntryPoint);
	void BndEvt__BPMV_JHCertView_BTN_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHCertView_mobile_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHCertView_mobile_C")
	}
	static class UBPMV_JHCertView_mobile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHCertView_mobile_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHCertView_mobile_C;

SDK_NAMESPACE_END
