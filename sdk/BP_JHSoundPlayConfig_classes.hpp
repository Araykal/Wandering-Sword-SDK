#pragma once



// Package: BP_JHSoundPlayConfig

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHSoundPlayConfig.BP_JHSoundPlayConfig_C
// 0x0000 (0x0078 - 0x0078)
class UBP_JHSoundPlayConfig_C final : public UJHSoundPlayConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHSoundPlayConfig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHSoundPlayConfig_C")
	}
	static class UBP_JHSoundPlayConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHSoundPlayConfig_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHSoundPlayConfig_C;

SDK_NAMESPACE_END
