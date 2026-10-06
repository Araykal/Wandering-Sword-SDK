#pragma once



// Package: BP_Follower_InCave

#include "Basic.hpp"

#include "BP_Follower_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Follower_InCave.BP_Follower_InCave_C
// 0x0000 (0x0590 - 0x0590)
class ABP_Follower_InCave_C final : public ABP_Follower_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Follower_InCave_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Follower_InCave_C")
	}
	static class ABP_Follower_InCave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Follower_InCave_C>();
	}
};
DUMPER7_ASSERTS_ABP_Follower_InCave_C;

SDK_NAMESPACE_END
