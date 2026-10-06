#pragma once



// Package: BPMV_JHBattleModule

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHBattleModule.BPMV_JHBattleModule_C
// 0x0158 (0x0728 - 0x05D0)
class UBPMV_JHBattleModule_C final : public UJHNeoUIBattleModuleView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowUltraSkill;                                    // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_AutoBattle_Auto;                               // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_AutoBattle_Manual;                             // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_SkipArena;                                     // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_SpeedUp1;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_SpeedUp2;                                      // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_103;                                        // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_ArenaControlPanel;                              // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIHorizontalBox*                    CT_DEBUG;                                          // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_Submodules;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_UltraSkillAnim;                                 // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       DisableMask;                                       // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip;                                 // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip_FB;                              // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip_LS;                              // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip_X;                               // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadKeyTip_Y;                               // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_KeyboardTip;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_101;                                // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        Slot_Left;                                         // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        Slot_Right;                                        // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        Slot_Spell;                                        // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        TowerSlot;                                         // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_BattleFieldInfo_C*                VE_Info;                                           // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   LeftSlotName;                                      // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightSlotName;                                     // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SpellSlotName;                                     // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_TaopaoValid;                                 // 0x06B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug_HideAllExceptUS;                             // 0x06B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA[0x6];                                      // 0x06BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Debug_UpTXT;                                       // 0x06C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Debug_DownTXT;                                     // 0x06D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   TowerSlotName;                                     // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NormalClr;                                         // 0x06F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DisableClr;                                        // 0x0708(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TowerNormalPos;                                    // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TowerHighPos;                                      // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHBattleModule(int32 EntryPoint);
	void BndEvt__BPMV_JHBattleModule_BTN_SkipArena_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void EVT_UpdateSkipButtonVisibility(bool bVisible);
	void Construct();
	void EVT_SetupSubModuleSlots();
	void EVT_UpdateTowerVisibility(bool IsVisible_0);
	void EVT_SetArenaControlPanelVisibility(bool IsVisible_0);
	void EVT_UpdateAutoBattleBtnStatus();
	void BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void EVT_UpdateSpeedUpBtnStatus();
	void BndEvt__BPMV_JHBattleModule_BTN_SpeedUp1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_JHBattleModule_NeoUIButtonBase_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void EVT_PrintKeyMsg(const ENeoUIGamepadButtonType BType, int32 EvtType);
	void EVT_HideAllExcept_UltimateSkill(bool HideFlag);
	void EVT_UpdateGamepadActiveBGStatus();
	void EVT_VisualShow();
	void BndEvt__BPMV_JHBattleModule_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_JHBattleModule_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody);
	void EVT_SetupHierarchy();
	struct FEventReply On_DisableMask_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHBattleModule_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHBattleModule_C")
	}
	static class UBPMV_JHBattleModule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHBattleModule_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHBattleModule_C;

SDK_NAMESPACE_END
