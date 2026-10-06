#pragma once



// Package: BPVE_FishingListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_FishingListItem.BPVE_FishingListItem_C
// 0x0018 (0x0340 - 0x0328)
class BPVE_FishingListItem::UBPVE_FishingListItem_C final : public UJHNeoUIFishingList_Entry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_57;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_FishingListItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL_FULLNAME("WidgetBlueprintGeneratedClass BPVE_FishingListItem.BPVE_FishingListItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_FishingListItem_C")
	}
	static class BPVE_FishingListItem::UBPVE_FishingListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<BPVE_FishingListItem::UBPVE_FishingListItem_C>();
	}
};
DUMPER7_ASSERTS_BPVE_FishingListItem__UBPVE_FishingListItem_C;

SDK_NAMESPACE_END
