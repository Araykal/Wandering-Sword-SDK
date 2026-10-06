#pragma once



// Package: BPMV_Trading

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Trading.BPMV_Trading_C
// 0x0090 (0x0468 - 0x03D8)
class UBPMV_Trading_C final : public UJHNeoUITradingView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPCMP_BulkListPanel_C*                 BPCMP_BulkListPanel_C_2;                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_PopupModuleContainer_C*           BPVE_PopupModuleContainer;                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Backpack;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Backpack_Btn;                                  // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_BulkArea;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Shop;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAA_Shop_Btn;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip;                                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHCommon_BlockContainer_C*             JHCommon_BlockContainer;                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHCommon_BlockContainer_C*             JHCommon_BlockContainer_131;                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPMV_Trading_NaviBtn2_C*               NaviBtn_SwitchMode;                                // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_1;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_319;                                // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        SLOT_Backpack;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   ShopSlotName;                                      // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BackpackSlotName;                                  // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BuybackSlotName;                                   // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_Trading(int32 EntryPoint);
	void EVT_UpdateGamepadActiveBGStatus();
	void EVT_VisualShow();
	void BndEvt__BPMV_Trading_BPMV_Trading_NaviBtn2_C_1_K2Node_ComponentBoundEvent_0_BtnMainClick__DelegateSignature();
	void EVT_AppendActiveAreaArr();
	void BndEvt__BPMV_Trading_NaviBtn_BuyBack_K2Node_ComponentBoundEvent_4_BtnMainClick__DelegateSignature();
	void BndEvt__BPMV_Trading_NaviBtn_Shop_K2Node_ComponentBoundEvent_3_BtnMainClick__DelegateSignature();
	void EVT_VisualConstructOnce();
	void EVT_VisualHide();
	void BndEvt__BPMV_Trading_BPCMP_BulkSelectionButton_Trading_C_0_K2Node_ComponentBoundEvent_1_BtnMainClick__DelegateSignature();
	void EVT_SetupSubModuleSlots();
	void Construct();
	class UWidget* GotoShopOrBuyback(EUINavigation Navigation_0);
	class UWidget* Goto_BulkBtn(EUINavigation Navigation_0);
	class UWidget* Goto_Backpack(EUINavigation Navigation_0);
	class UWidget* Goto_SwitchingBtn(EUINavigation Navigation_0);
	class UWidget* FindFocusWidgetByTag(const class FString& StrParam);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Trading_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Trading_C")
	}
	static class UBPMV_Trading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Trading_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Trading_C;

SDK_NAMESPACE_END
