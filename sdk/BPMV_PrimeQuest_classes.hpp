#pragma once



// Package: BPMV_PrimeQuest

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_PrimeQuest.BPMV_PrimeQuest_C
// 0x0088 (0x0408 - 0x0380)
class UBPMV_PrimeQuest_C final : public UJHNeoUIQuestView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowFailedAnim;                                    // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowFinishedAnim;                                  // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_BiaoTiZi;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAADisplay_Detail;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAADisplay_List;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_201;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_697;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_872;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1059;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_53;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_139;                                // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_303;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_QuestDetail_C*                    VE_Detail;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         AnimSpeed;                                         // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_PrimeQuest(int32 EntryPoint);
	void EVT_FocusDetailForGamepadConfirm();
	void EVT_ExitFromDetailMode();
	void Construct();
	void EVT_PlayFailedHideAnim();
	void EVT_PlayFailedShowAnim();
	void BndEvt__BPMV_PrimeQuest_LIST_Failed_K2Node_ComponentBoundEvent_2_TitleBtnClick__DelegateSignature();
	void BndEvt__BPMV_PrimeQuest_LIST_Finished_K2Node_ComponentBoundEvent_1_TitleBtnClick__DelegateSignature();
	void BndEvt__BPMV_PrimeQuest_LIST_Unfinished_K2Node_ComponentBoundEvent_0_TitleBtnClick__DelegateSignature();
	void EVT_StartAnimSession();
	void EVT_UpdateGamepadActiveBGStatus();
	void EVT_VisualShow();
	void EVT_PlayFinishedShowAnim();
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_AppendActiveAreaArr();
	void EVT_VisualConstructOnce();
	void EVT_SetupHierarchy();
	void EVT_PlayFinishedHideAnim();
	class UWidget* Navi_From_1_To_0(EUINavigation Navigation_0);
	class UWidget* Navi_From_0_To_1(EUINavigation Navigation_0);
	class UWidget* Navi_From_Detail_To_List(EUINavigation Navigation_0);
	class UWidget* Navi_From_0_To_Detail(EUINavigation Navigation_0);
	class UWidget* Navi_From_1_To_Detail(EUINavigation Navigation_0);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* Navi_From_2_To_1(EUINavigation Navigation_0);
	class UWidget* Navi_From_1_To_2(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_PrimeQuest_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_PrimeQuest_C")
	}
	static class UBPMV_PrimeQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_PrimeQuest_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_PrimeQuest_C;

SDK_NAMESPACE_END
