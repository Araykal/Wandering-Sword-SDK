#pragma once



// Package: BP_LoadingConfig

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_LoadingConfig.BP_LoadingConfig_C
// 0x0000 (0x0070 - 0x0070)
class UBP_LoadingConfig_C final : public UJHLoadingConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_LoadingConfig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_LoadingConfig_C")
	}
	static class UBP_LoadingConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LoadingConfig_C>();
	}
};
DUMPER7_ASSERTS_UBP_LoadingConfig_C;

SDK_NAMESPACE_END
