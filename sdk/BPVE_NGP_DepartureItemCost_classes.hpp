#pragma once



// Package: BPVE_NGP_DepartureItemCost

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_NGP_DepartureItemCost.BPVE_NGP_DepartureItemCost_C
// 0x0008 (0x02F8 - 0x02F0)
class UBPVE_NGP_DepartureItemCost_C final : public UJHNeoUINGP_DepartureItemCost
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_173;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_NGP_DepartureItemCost_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_NGP_DepartureItemCost_C")
	}
	static class UBPVE_NGP_DepartureItemCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_NGP_DepartureItemCost_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_NGP_DepartureItemCost_C;

SDK_NAMESPACE_END
