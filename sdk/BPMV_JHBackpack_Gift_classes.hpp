#pragma once



// Package: BPMV_JHBackpack_Gift

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHBackpack_Gift.BPMV_JHBackpack_Gift_C
// 0x0018 (0x03A8 - 0x0390)
class UBPMV_JHBackpack_Gift_C final : public UJHBackpackView_Gift
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_134;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       NeoUIButtonBase_26;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHBackpack_Gift(int32 EntryPoint);
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void BndEvt__BPMV_JHBackpack_Gift_BTN_Gift_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_RenderView();
	void EVT_SetupHierarchy();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHBackpack_Gift_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHBackpack_Gift_C")
	}
	static class UBPMV_JHBackpack_Gift_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHBackpack_Gift_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHBackpack_Gift_C;

SDK_NAMESPACE_END
