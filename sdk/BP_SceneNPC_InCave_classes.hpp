#pragma once



// Package: BP_SceneNPC_InCave

#include "Basic.hpp"

#include "BP_SceneNPC_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_SceneNPC_InCave.BP_SceneNPC_InCave_C
// 0x0000 (0x0540 - 0x0540)
class ABP_SceneNPC_InCave_C final : public ABP_SceneNPC_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_SceneNPC_InCave_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_SceneNPC_InCave_C")
	}
	static class ABP_SceneNPC_InCave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneNPC_InCave_C>();
	}
};
DUMPER7_ASSERTS_ABP_SceneNPC_InCave_C;

SDK_NAMESPACE_END
