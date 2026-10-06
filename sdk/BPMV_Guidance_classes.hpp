#pragma once



// Package: BPMV_Guidance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Guidance.BPMV_Guidance_C
// 0x0020 (0x03E0 - 0x03C0)
class UBPMV_Guidance_C final : public UJHNeoUIGuidanceView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       NeoUIButtonBase_5;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       NeoUIButtonBase_217;                               // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DyMat;                                             // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_Guidance(int32 EntryPoint);
	void EVT_SnatchFocusAgain();
	void BndEvt__BPMV_Guidance_NeoUIButtonBase_5_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_Guidance_NeoUIButtonBase_217_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Guidance_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Guidance_C")
	}
	static class UBPMV_Guidance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Guidance_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Guidance_C;

SDK_NAMESPACE_END
