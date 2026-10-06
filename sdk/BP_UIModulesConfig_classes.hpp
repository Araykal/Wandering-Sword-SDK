#pragma once



// Package: BP_UIModulesConfig

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_UIModulesConfig.BP_UIModulesConfig_C
// 0x0000 (0x0910 - 0x0910)
class UBP_UIModulesConfig_C final : public UJHNeoUIModulesConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_UIModulesConfig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_UIModulesConfig_C")
	}
	static class UBP_UIModulesConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIModulesConfig_C>();
	}
};
DUMPER7_ASSERTS_UBP_UIModulesConfig_C;

SDK_NAMESPACE_END
