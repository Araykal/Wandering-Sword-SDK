#pragma once



// Package: BP_ImgConfig_Item

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_ImgConfig_Item.BP_ImgConfig_Item_C
// 0x0000 (0x0078 - 0x0078)
class UBP_ImgConfig_Item_C final : public UJHNeoUIImgConfig_Item
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_ImgConfig_Item_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_ImgConfig_Item_C")
	}
	static class UBP_ImgConfig_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ImgConfig_Item_C>();
	}
};
DUMPER7_ASSERTS_UBP_ImgConfig_Item_C;

SDK_NAMESPACE_END
