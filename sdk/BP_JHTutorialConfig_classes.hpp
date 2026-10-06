#pragma once



// Package: BP_JHTutorialConfig

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHTutorialConfig.BP_JHTutorialConfig_C
// 0x0000 (0x0048 - 0x0048)
class UBP_JHTutorialConfig_C final : public UJHNeoUITutorialConfigData
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHTutorialConfig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHTutorialConfig_C")
	}
	static class UBP_JHTutorialConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHTutorialConfig_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHTutorialConfig_C;

SDK_NAMESPACE_END
