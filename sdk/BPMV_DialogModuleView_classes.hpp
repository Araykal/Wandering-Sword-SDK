#pragma once



// Package: BPMV_DialogModuleView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_DialogModuleView.BPMV_DialogModuleView_C
// 0x0028 (0x0400 - 0x03D8)
class UBPMV_DialogModuleView_C final : public UDialogModuleView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUINamedSlot*                        ArenaLayoutSlot;                                   // 0x03E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_DialogNext;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadTipArrow;                               // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   ArenaLayoutSlotName;                               // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_DialogModuleView(int32 EntryPoint);
	void EVT_DelayFocusSelf();
	void EVT_UpdateOptionStatus();
	void EVT_SyncWithGlobalInputMode();
	void EVT_VisualShow();
	void BndEvt__BPMV_DialogModuleView_BTN_DialogNext_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_DialogModuleView_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_DialogModuleView_C")
	}
	static class UBPMV_DialogModuleView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_DialogModuleView_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_DialogModuleView_C;

SDK_NAMESPACE_END
