#pragma once



// Package: BPMV_JHGHC_NPC

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHGHC_NPC.BPMV_JHGHC_NPC_C
// 0x0030 (0x03E8 - 0x03B8)
class UBPMV_JHGHC_NPC_C final : public UJHNeoUIGHCView_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       BTN_Stack_Next;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_Stack_Pre;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_1;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_2;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHGHC_NPC(int32 EntryPoint);
	void BndEvt__BPMV_JHGHC_NPC_BTN_Stack_Pre_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_JHGHC_NPC_BTN_Stack_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_UpdateStackBtn_Pre(bool IsVisible_0);
	void EVT_UpdateStackBtn_Next(bool IsVisible_0);
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_SetupHierarchy();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHGHC_NPC_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHGHC_NPC_C")
	}
	static class UBPMV_JHGHC_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHGHC_NPC_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHGHC_NPC_C;

SDK_NAMESPACE_END
