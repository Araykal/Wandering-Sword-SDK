#pragma once



// Package: BP_DungeonPlayerStart

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_DungeonPlayerStart.BP_DungeonPlayerStart_C
// 0x0000 (0x0250 - 0x0250)
class ABP_DungeonPlayerStart_C final : public ADungeonPlayerStart
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_DungeonPlayerStart_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_DungeonPlayerStart_C")
	}
	static class ABP_DungeonPlayerStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonPlayerStart_C>();
	}
};
DUMPER7_ASSERTS_ABP_DungeonPlayerStart_C;

SDK_NAMESPACE_END
