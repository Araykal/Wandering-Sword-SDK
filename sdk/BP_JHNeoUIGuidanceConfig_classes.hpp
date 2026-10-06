#pragma once



// Package: BP_JHNeoUIGuidanceConfig

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHNeoUIGuidanceConfig.BP_JHNeoUIGuidanceConfig_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_JHNeoUIGuidanceConfig_C final : public UJHNeoUI_GuidanceConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHNeoUIGuidanceConfig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHNeoUIGuidanceConfig_C")
	}
	static class UBP_JHNeoUIGuidanceConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHNeoUIGuidanceConfig_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHNeoUIGuidanceConfig_C;

SDK_NAMESPACE_END
