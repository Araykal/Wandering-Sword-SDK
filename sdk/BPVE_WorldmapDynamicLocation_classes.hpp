#pragma once



// Package: BPVE_WorldmapDynamicLocation

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_WorldmapDynamicLocation.BPVE_WorldmapDynamicLocation_C
// 0x0000 (0x03A0 - 0x03A0)
class UBPVE_WorldmapDynamicLocation_C final : public UJHNeoUIWorldMap_DynamicLocation
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_WorldmapDynamicLocation_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_WorldmapDynamicLocation_C")
	}
	static class UBPVE_WorldmapDynamicLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_WorldmapDynamicLocation_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_WorldmapDynamicLocation_C;

SDK_NAMESPACE_END
