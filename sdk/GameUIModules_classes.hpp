#pragma once



// Package: GameUIModules

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GameUIModules.GameUIModules_C
// 0x0000 (0x0078 - 0x0078)
class UGameUIModules_C final : public UJHGameUIConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GameUIModules_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameUIModules_C")
	}
	static class UGameUIModules_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameUIModules_C>();
	}
};
DUMPER7_ASSERTS_UGameUIModules_C;

SDK_NAMESPACE_END
