#pragma once



// Package: BP_ImageLocalization

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_ImageLocalization.BP_ImageLocalization_C
// 0x0000 (0x0050 - 0x0050)
class UBP_ImageLocalization_C final : public UJHNeoUILocalizedImageManager
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_ImageLocalization_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_ImageLocalization_C")
	}
	static class UBP_ImageLocalization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ImageLocalization_C>();
	}
};
DUMPER7_ASSERTS_UBP_ImageLocalization_C;

SDK_NAMESPACE_END
