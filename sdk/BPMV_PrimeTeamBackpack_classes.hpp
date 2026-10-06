#pragma once



// Package: BPMV_PrimeTeamBackpack

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_PrimeTeamBackpack.BPMV_PrimeTeamBackpack_C
// 0x0068 (0x03C8 - 0x0360)
class UBPMV_PrimeTeamBackpack_C final : public UJHNeoUITeam_BackpackView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GAADisplay_C*                       BP_GAADisplay;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       BP_GAADisplay_1;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_CommonBlockContainer_C*          BPCMP_CommonBlockContainer;                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_JHBtn_T1_C*                      BTN_Main;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_JHBtn_T1_C*                      BTN_Private;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Gamepad_LB;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Gamepad_RB;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        SLOT_Main;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        SLOT_Private;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUISwitcher*                         SWITCHER_Cont;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   MainSlotName;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PrivateSlotName;                                   // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_PrimeTeamBackpack(int32 EntryPoint);
	void EVT_UpdateGamepadActiveBGStatus();
	void EVT_VisualShow();
	void EVT_VisualInit();
	void EVT_AppendActiveAreaArr();
	void EVT_RenderView();
	void BndEvt__BPMV_PrimeTeamBackpack_BTN_Private_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void BndEvt__BPMV_PrimeTeamBackpack_BTN_Main_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void EVT_SetupSubModuleSlots();
	class UWidget* NaviDown(EUINavigation Navigation_0);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* NaviLeft(EUINavigation Navigation_0);
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_PrimeTeamBackpack_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_PrimeTeamBackpack_C")
	}
	static class UBPMV_PrimeTeamBackpack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_PrimeTeamBackpack_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_PrimeTeamBackpack_C;

SDK_NAMESPACE_END
