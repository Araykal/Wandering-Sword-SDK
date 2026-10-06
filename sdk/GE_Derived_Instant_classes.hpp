#pragma once



// Package: GE_Derived_Instant

#include "Basic.hpp"

#include "GE_Derived_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Derived_Instant.GE_Derived_Instant_C
// 0x0000 (0x07E8 - 0x07E8)
class UGE_Derived_Instant_C final : public UGE_Derived_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Derived_Instant_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Derived_Instant_C")
	}
	static class UGE_Derived_Instant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Derived_Instant_C>();
	}
};
DUMPER7_ASSERTS_UGE_Derived_Instant_C;

SDK_NAMESPACE_END
