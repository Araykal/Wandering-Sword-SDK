#pragma once



// Package: BPVE_JHTips_SpellRange3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_SpellRange3.BPVE_JHTips_SpellRange3_C
// 0x0018 (0x02F0 - 0x02D8)
class UBPVE_JHTips_SpellRange3_C final : public UJHNeoUISpellTip_Range
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG;                                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Main;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHTips_SpellRange3(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_SpellRange3_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_SpellRange3_C")
	}
	static class UBPVE_JHTips_SpellRange3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_SpellRange3_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_SpellRange3_C;

SDK_NAMESPACE_END
