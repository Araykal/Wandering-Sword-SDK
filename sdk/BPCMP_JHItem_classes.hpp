#pragma once



// Package: BPCMP_JHItem

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_JHItem.BPCMP_JHItem_C
// 0x0008 (0x02E8 - 0x02E0)
class UBPCMP_JHItem_C final : public UJHItemDisplay
{
public:
	class UNeoUINamedSlot*                        Slot_JustBelowNewMark;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_JHItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_JHItem_C")
	}
	static class UBPCMP_JHItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_JHItem_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_JHItem_C;

SDK_NAMESPACE_END
