#pragma once



// Package: BPVE_JHNeoUIPopupMenu_Backpack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHNeoUIPopupMenu_Backpack.BPVE_JHNeoUIPopupMenu_Backpack_C
// 0x0030 (0x0318 - 0x02E8)
class UBPVE_JHNeoUIPopupMenu_Backpack_C final : public UJHNeoUIPopupMenuContentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_JHNeoUIPopupMenuItem_C*           Item;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_JHNeoUIPopupMenuItem_C*           Item_1;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_JHNeoUIPopupMenuItem_C*           Item_2;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_JHNeoUIPopupMenuItem_C*           Item_3;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_JHNeoUIPopupMenuItem_C*           Item_4;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Backpack(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHNeoUIPopupMenu_Backpack_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHNeoUIPopupMenu_Backpack_C")
	}
	static class UBPVE_JHNeoUIPopupMenu_Backpack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHNeoUIPopupMenu_Backpack_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHNeoUIPopupMenu_Backpack_C;

SDK_NAMESPACE_END
