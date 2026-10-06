#pragma once



// Package: BPCMP_CourierStationItem

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_CourierStationItem.BPCMP_CourierStationItem_C
// 0x0000 (0x0298 - 0x0298)
class UBPCMP_CourierStationItem_C final : public UJHNeoUIWorldMapLayer_CourierStationItem
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_CourierStationItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_CourierStationItem_C")
	}
	static class UBPCMP_CourierStationItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_CourierStationItem_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_CourierStationItem_C;

SDK_NAMESPACE_END
