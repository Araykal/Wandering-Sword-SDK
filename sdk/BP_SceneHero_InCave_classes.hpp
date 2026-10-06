#pragma once



// Package: BP_SceneHero_InCave

#include "Basic.hpp"

#include "BP_SceneHero_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_SceneHero_InCave.BP_SceneHero_InCave_C
// 0x0000 (0x0610 - 0x0610)
class ABP_SceneHero_InCave_C final : public ABP_SceneHero_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_SceneHero_InCave_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_SceneHero_InCave_C")
	}
	static class ABP_SceneHero_InCave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneHero_InCave_C>();
	}
};
DUMPER7_ASSERTS_ABP_SceneHero_InCave_C;

SDK_NAMESPACE_END
