#pragma once



// Package: BPVE_JHNeoUIStationItem

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHNeoUIStationItem.BPVE_JHNeoUIStationItem_C
// 0x0000 (0x02F0 - 0x02F0)
class UBPVE_JHNeoUIStationItem_C final : public UJHNeoUIStationItemVE
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHNeoUIStationItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHNeoUIStationItem_C")
	}
	static class UBPVE_JHNeoUIStationItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHNeoUIStationItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHNeoUIStationItem_C;

SDK_NAMESPACE_END
