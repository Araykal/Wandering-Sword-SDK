#pragma once



// Package: BPMV_Team_Property_Ability

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Team_Property_Ability.BPMV_Team_Property_Ability_C
// 0x00D8 (0x0438 - 0x0360)
class UBPMV_Team_Property_Ability_C final : public UJHNeoUITeam_Property_AbilityView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BPVE_Prime_ModuleTitle1;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BPVE_Prime_ModuleTitle2;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Prime_ModuleTitleBar_C*           BPVE_Prime_ModuleTitleBar;                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Prime_ModuleTitleBar_C*           BPVE_Prime_ModuleTitleBar_1;                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Bottom;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Top;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_PropertyAbilityLineWithProg_C*    Icon_Alchemy;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_AnQiJingTong;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_PropertyAbilityLineWithProg_C*    Icon_Apparel;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_PropertyAbilityLineWithProg_C*    Icon_Cooking;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_DaoFaJingTong;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_PropertyAbilityLineWithProg_C*    Icon_Fishing;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_PropertyAbilityLineWithProg_C*    Icon_Fusion;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_PropertyAbilityLineWithProg_C*    Icon_Gathering;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_JianFaJingTong;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_JiuLiang;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_JueDou;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_KouCai;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_Menpai;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_Miaoshou;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_QiangGunJingTOng;                             // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_QiMenJingTong;                                // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_Qitao;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_QuanZhangJingTong;                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_TongYong;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ProertyAbilityLine_C*             Icon_YiShu;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_Team_Property_Ability(int32 EntryPoint);
	void BndEvt__BPMV_Team_Property_Ability_Icon_Fishing_K2Node_ComponentBoundEvent_4_ItemClicked__DelegateSignature();
	void BndEvt__BPMV_Team_Property_Ability_Icon_Alchemy_K2Node_ComponentBoundEvent_3_ItemClicked__DelegateSignature();
	void BndEvt__BPMV_Team_Property_Ability_Icon_Cooking_K2Node_ComponentBoundEvent_2_ItemClicked__DelegateSignature();
	void BndEvt__BPMV_Team_Property_Ability_Icon_Apparel_K2Node_ComponentBoundEvent_1_ItemClicked__DelegateSignature();
	void BndEvt__BPMV_Team_Property_Ability_Icon_Fusion_K2Node_ComponentBoundEvent_0_ItemClicked__DelegateSignature();
	void EVT_AppendActiveAreaArr();
	void EVT_SetupHierarchy();
	void EVT_RenderView();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* NaviGotoTop(EUINavigation Navigation_0);
	class UWidget* NaviGotoSideBar(EUINavigation Navigation_0);
	class UWidget* NaviGotoEquip(EUINavigation Navigation_0);
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Team_Property_Ability_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Team_Property_Ability_C")
	}
	static class UBPMV_Team_Property_Ability_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Team_Property_Ability_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Team_Property_Ability_C;

SDK_NAMESPACE_END
