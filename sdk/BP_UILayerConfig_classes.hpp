#pragma once



// Package: BP_UILayerConfig

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_UILayerConfig.BP_UILayerConfig_C
// 0x0000 (0x02B8 - 0x02B8)
class UBP_UILayerConfig_C final : public UJHNeoUILayerConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_UILayerConfig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_UILayerConfig_C")
	}
	static class UBP_UILayerConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UILayerConfig_C>();
	}
};
DUMPER7_ASSERTS_UBP_UILayerConfig_C;

SDK_NAMESPACE_END
