#pragma once



// Package: NavMeshToolRuntime

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


SDK_NAMESPACE_START

// Class NavMeshToolRuntime.NavFilter_TileFlag
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_TileFlag final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavFilter_TileFlag")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavFilter_TileFlag")
	}
	static class UNavFilter_TileFlag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavFilter_TileFlag>();
	}
};
DUMPER7_ASSERTS_UNavFilter_TileFlag;

SDK_NAMESPACE_END
