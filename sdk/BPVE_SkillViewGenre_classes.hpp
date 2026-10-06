#pragma once



// Package: BPVE_SkillViewGenre

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SkillViewGenre.BPVE_SkillViewGenre_C
// 0x0040 (0x0318 - 0x02D8)
class UBPVE_SkillViewGenre_C final : public UJHNeoUISkillView_GenreVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_112;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillViewGenreCell_C*             VE_Item;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillViewGenreCell_C*             VE_Item_1;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillViewGenreCell_C*             VE_Item_2;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillViewGenreCell_C*             VE_Item_3;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillViewGenreCell_C*             VE_Item_4;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillViewGenreCell_C*             VE_Item_5;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_SkillViewGenre(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SkillViewGenre_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SkillViewGenre_C")
	}
	static class UBPVE_SkillViewGenre_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SkillViewGenre_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SkillViewGenre_C;

SDK_NAMESPACE_END
