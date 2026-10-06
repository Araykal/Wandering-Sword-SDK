#pragma once



// Package: BP_JHGameConfig

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHGameConfig.BP_JHGameConfig_C
// 0x0000 (0x03E0 - 0x03E0)
class UBP_JHGameConfig_C final : public UJHGameConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHGameConfig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHGameConfig_C")
	}
	static class UBP_JHGameConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHGameConfig_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHGameConfig_C;

SDK_NAMESPACE_END
