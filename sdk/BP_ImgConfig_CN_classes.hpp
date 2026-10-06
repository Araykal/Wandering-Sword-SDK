#pragma once



// Package: BP_ImgConfig_CN

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_ImgConfig_CN.BP_ImgConfig_CN_C
// 0x0000 (0x0208 - 0x0208)
class UBP_ImgConfig_CN_C final : public UJHNeoUILocalizedImageConfigBase
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_ImgConfig_CN_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_ImgConfig_CN_C")
	}
	static class UBP_ImgConfig_CN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ImgConfig_CN_C>();
	}
};
DUMPER7_ASSERTS_UBP_ImgConfig_CN_C;

SDK_NAMESPACE_END
