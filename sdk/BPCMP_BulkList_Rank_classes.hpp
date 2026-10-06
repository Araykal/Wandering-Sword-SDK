#pragma once



// Package: BPCMP_BulkList_Rank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_BulkList_Rank.BPCMP_BulkList_Rank_C
// 0x0058 (0x0308 - 0x02B0)
class UBPCMP_BulkList_Rank_C final : public UBulkSelectionItemList_Rank
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_1;                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_2;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_3;                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_4;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_5;                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_6;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_7;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_8;                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_9;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPCMP_BulkList_Rank(int32 EntryPoint);
	void EVT_VisualConstructOnce();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_BulkList_Rank_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_BulkList_Rank_C")
	}
	static class UBPCMP_BulkList_Rank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_BulkList_Rank_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_BulkList_Rank_C;

SDK_NAMESPACE_END
