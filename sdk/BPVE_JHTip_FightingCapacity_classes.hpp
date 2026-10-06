#pragma once



// Package: BPVE_JHTip_FightingCapacity

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTip_FightingCapacity.BPVE_JHTip_FightingCapacity_C
// 0x0018 (0x0338 - 0x0320)
class UBPVE_JHTip_FightingCapacity_C final : public UJHNeoUITips_FightingCapacity
{
public:
	class UFightingCapacity_Active_tip_C*         ActiveTip;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_53;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_58;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTip_FightingCapacity_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTip_FightingCapacity_C")
	}
	static class UBPVE_JHTip_FightingCapacity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTip_FightingCapacity_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTip_FightingCapacity_C;

SDK_NAMESPACE_END
