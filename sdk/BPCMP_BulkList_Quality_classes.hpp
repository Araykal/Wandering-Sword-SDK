#pragma once



// Package: BPCMP_BulkList_Quality

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_BulkList_Quality.BPCMP_BulkList_Quality_C
// 0x0038 (0x02D8 - 0x02A0)
class UBPCMP_BulkList_Quality_C final : public UBulkSelectionItemList_Quality
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_101;                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_169;                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_293;                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_422;                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_BulkSelectionItem_C*             BPCMP_BulkSelectionItem_537;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPCMP_BulkList_Quality(int32 EntryPoint);
	void EVT_VisualConstructOnce();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_BulkList_Quality_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_BulkList_Quality_C")
	}
	static class UBPCMP_BulkList_Quality_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_BulkList_Quality_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_BulkList_Quality_C;

SDK_NAMESPACE_END
