#pragma once



// Package: BP_ImgConfig_Common

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_ImgConfig_Common.BP_ImgConfig_Common_C
// 0x0000 (0x00F0 - 0x00F0)
class UBP_ImgConfig_Common_C final : public UJHNeoUICommonImageConfigBase
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_ImgConfig_Common_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_ImgConfig_Common_C")
	}
	static class UBP_ImgConfig_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ImgConfig_Common_C>();
	}
};
DUMPER7_ASSERTS_UBP_ImgConfig_Common_C;

SDK_NAMESPACE_END
