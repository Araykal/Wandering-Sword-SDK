#pragma once



// Package: GE_Derived

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Derived.GE_Derived_C
// 0x0000 (0x07E8 - 0x07E8)
class UGE_Derived_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Derived_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Derived_C")
	}
	static class UGE_Derived_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Derived_C>();
	}
};
DUMPER7_ASSERTS_UGE_Derived_C;

SDK_NAMESPACE_END
