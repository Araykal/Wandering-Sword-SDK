#pragma once



// Package: JHGPCBtn_Slot

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGPCBtn_Slot.JHGPCBtn_Slot_C
// 0x0008 (0x0588 - 0x0580)
class UJHGPCBtn_Slot_C final : public UJHNeoUIGamepadConfirmButton
{
public:
	class UNeoUINamedSlot*                        BtnSlot;                                           // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGPCBtn_Slot_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGPCBtn_Slot_C")
	}
	static class UJHGPCBtn_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGPCBtn_Slot_C>();
	}
};
DUMPER7_ASSERTS_UJHGPCBtn_Slot_C;

SDK_NAMESPACE_END
