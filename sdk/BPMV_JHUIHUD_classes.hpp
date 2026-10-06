#pragma once



// Package: BPMV_JHUIHUD

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHUIHUD.BPMV_JHUIHUD_C
// 0x0050 (0x0410 - 0x03C0)
class UBPMV_JHUIHUD_C final : public UJHNeoUIHUDView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                BTN_HUD_Debug;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_HUD_Debug_1;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_HUD_Debug_2;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_MapName_C*                        VE_MapName;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_RoomName_C*                       VE_RoomName;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MouseCursor_Selling_C*              Cursor_Selling;                                    // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MouseCursor_Decompo_C*              Cursor_Decompo;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugIntV;                                         // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENeoUIGamepadButtonType                       sss;                                               // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_405[0x3];                                      // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MouseCursor_SkillUpgrading_C*       Cursor_SkillUpgrading;                             // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHUIHUD(int32 EntryPoint);
	void HandleFSModuleHide(int32 StyleFlag);
	void OnClusterFinished_Event_0(const class FString& GuidanceType);
	void OnProgressEnd_Event_0(int32 Param);
	void Construct();
	void OnPortraitChanged_Event_0(int32 NPCId, bool bNext, class FName NewAvatarName);
	void GuidanceEnd(const class FString& GuidanceType);
	void EVT_SetupHierarchy();
	void OnGamepadKeyPressed_Event_0(ENeoUIGamepadButtonType ButtonType);
	void BndEvt__BPMV_JHUIHUD_Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnDialogueVisibilityChanged_Event_0(int32 Status, int32 NPCId);
	void ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody);
	void FullscreenScrollHideEvent(int32 ContentFlag);
	void EVT_SetCursor_Selling();
	void EVT_SetCursor_Decompo();
	void NeoUI_DisableInteraction();
	void NeoUI_EnableInteraction();
	void EVT_VisualConstructOnce();
	void BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnNGPDeparture_Event_0(const struct FJHNeoUINGP_InheritanceResult& DepartureConfig);
	void OnNGPModuleClosing_Event_0(int32 Reason);
	void EVT_SetCursor_SkillUpgrading();
	void BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnNGPSettlementModuleClosing_Event_0(int32 Reason);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHUIHUD_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHUIHUD_C")
	}
	static class UBPMV_JHUIHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHUIHUD_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHUIHUD_C;

SDK_NAMESPACE_END
