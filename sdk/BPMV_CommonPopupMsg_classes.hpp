#pragma once



// Package: BPMV_CommonPopupMsg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_CommonPopupMsg.BPMV_CommonPopupMsg_C
// 0x0018 (0x0390 - 0x0378)
class UBPMV_CommonPopupMsg_C final : public UJHNeoUICommonPopupMsgView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUINamedSlot*                        Slot_ItemAcquired;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   ItemAcquiredSlotName;                              // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_CommonPopupMsg(int32 EntryPoint);
	void EVT_SetupSubModuleSlots();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_CommonPopupMsg_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_CommonPopupMsg_C")
	}
	static class UBPMV_CommonPopupMsg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_CommonPopupMsg_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_CommonPopupMsg_C;

SDK_NAMESPACE_END
