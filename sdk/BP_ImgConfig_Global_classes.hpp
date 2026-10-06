#pragma once



// Package: BP_ImgConfig_Global

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_ImgConfig_Global.BP_ImgConfig_Global_C
// 0x0000 (0x0088 - 0x0088)
class UBP_ImgConfig_Global_C final : public UJHNeoUIImgConfig_Global
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_ImgConfig_Global_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_ImgConfig_Global_C")
	}
	static class UBP_ImgConfig_Global_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ImgConfig_Global_C>();
	}
};
DUMPER7_ASSERTS_UBP_ImgConfig_Global_C;

SDK_NAMESPACE_END
