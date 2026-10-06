#pragma once



// Package: BP_FightNPC_InCave

#include "Basic.hpp"

#include "BP_FightNPC_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_FightNPC_InCave.BP_FightNPC_InCave_C
// 0x0000 (0x05B0 - 0x05B0)
class ABP_FightNPC_InCave_C final : public ABP_FightNPC_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_FightNPC_InCave_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_FightNPC_InCave_C")
	}
	static class ABP_FightNPC_InCave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FightNPC_InCave_C>();
	}
};
DUMPER7_ASSERTS_ABP_FightNPC_InCave_C;

SDK_NAMESPACE_END
