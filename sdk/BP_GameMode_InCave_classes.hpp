#pragma once



// Package: BP_GameMode_InCave

#include "Basic.hpp"

#include "BP_GameMode_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GameMode_InCave.BP_GameMode_InCave_C
// 0x0018 (0x0448 - 0x0430)
class ABP_GameMode_InCave_C final : public ABP_GameMode_C
{
public:
	class FText                                   未知地图_0;                                        // 0x0430(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GameMode_InCave_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GameMode_InCave_C")
	}
	static class ABP_GameMode_InCave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_InCave_C>();
	}
};
DUMPER7_ASSERTS_ABP_GameMode_InCave_C;

SDK_NAMESPACE_END
