#pragma once



// Package: BPVE_FishingList

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_FishingList.BPVE_FishingList_C
// 0x0020 (0x0318 - 0x02F8)
class UBPVE_FishingList_C final : public UJHNeoUIFishing_ItemList
{
public:
	class BPVE_FishingListItem_0::UBPVE_FishingListItem_C* BPVE_FishingListItem;                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class BPVE_FishingListItem_0::UBPVE_FishingListItem_C* BPVE_FishingListItem_2;                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class BPVE_FishingListItem_0::UBPVE_FishingListItem_C* BPVE_FishingListItem_3;                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class BPVE_FishingListItem_0::UBPVE_FishingListItem_C* BPVE_FishingListItem_394;                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_FishingList_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_FishingList_C")
	}
	static class UBPVE_FishingList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_FishingList_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_FishingList_C;

SDK_NAMESPACE_END
