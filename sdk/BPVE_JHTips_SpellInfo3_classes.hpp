#pragma once



// Package: BPVE_JHTips_SpellInfo3

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_SpellInfo3.BPVE_JHTips_SpellInfo3_C
// 0x0020 (0x02F8 - 0x02D8)
class UBPVE_JHTips_SpellInfo3_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_JHTips_SpellInfo3_Line_C*         Line0;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_JHTips_SpellInfo3_Line_C*         Line1;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_JHTips_SpellInfo3_Line_C*         Line2;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHTips_SpellInfo3(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_SpellInfo3_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_SpellInfo3_C")
	}
	static class UBPVE_JHTips_SpellInfo3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_SpellInfo3_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_SpellInfo3_C;

SDK_NAMESPACE_END
