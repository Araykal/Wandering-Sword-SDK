#pragma once



// Package: BPMV_HUDLow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_HUDLow.BPMV_HUDLow_C
// 0x0038 (0x03F8 - 0x03C0)
class UBPMV_HUDLow_C final : public UJHNeoUIHUDLowView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowMapName;                                       // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowItemChange;                                    // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        Slot_Msg;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_ItemChangeMessage_C*              VE_ItemChange;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_HUD_Quest_Wrapper_C*              VE_QuestPanel;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   PopupMsgSlotName;                                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_HUDLow(int32 EntryPoint);
	void BndEvt__BPMV_HUDLow_IMG_EDBHint_K2Node_ComponentBoundEvent_1_OnHintMouseLeftDown__DelegateSignature();
	void EVT_ShowQuestFailedBadge(const class FText& QuestName);
	void EVT_SetupSubModuleSlots();
	void ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody);
	void EVT_ShowItemChangeMessage();
	void EVT_SetupHierarchy();
	void EVT_ShowQuestStatusBadge(const class FText& QuestName);
	void EVT_ShowQuestFinishBadge(const class FText& QuestName);
	void Construct();
	void SequenceEvent_0();
	void SequenceEvent__ENTRYPOINTBPMV_HUDLow_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_HUDLow_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_HUDLow_C")
	}
	static class UBPMV_HUDLow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_HUDLow_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_HUDLow_C;

SDK_NAMESPACE_END
