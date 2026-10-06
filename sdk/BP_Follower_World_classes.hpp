#pragma once



// Package: BP_Follower_World

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Follower_World.BP_Follower_World_C
// 0x0000 (0x0590 - 0x0590)
class ABP_Follower_World_C final : public AFollowCharacter
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Follower_World_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Follower_World_C")
	}
	static class ABP_Follower_World_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Follower_World_C>();
	}
};
DUMPER7_ASSERTS_ABP_Follower_World_C;

SDK_NAMESPACE_END
