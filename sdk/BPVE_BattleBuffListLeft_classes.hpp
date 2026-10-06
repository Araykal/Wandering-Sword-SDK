#pragma once



// Package: BPVE_BattleBuffListLeft

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleBuffListLeft.BPVE_BattleBuffListLeft_C
// 0x0038 (0x0310 - 0x02D8)
class UBPVE_BattleBuffListLeft_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_BattleBuffCell_C*                 BPVE_BuffCell_0;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_BattleBuffCell_C*                 BPVE_BuffCell_1;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_BattleBuffCell_C*                 BPVE_BuffCell_2;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_BattleBuffCell_C*                 BPVE_BuffCell_3;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_BattleBuffCell_C*                 BPVE_BuffCell_4;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_BattleBuffCell_C*                 BPVE_BuffCell_5;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_BattleBuffListLeft(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleBuffListLeft_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleBuffListLeft_C")
	}
	static class UBPVE_BattleBuffListLeft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleBuffListLeft_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleBuffListLeft_C;

SDK_NAMESPACE_END
