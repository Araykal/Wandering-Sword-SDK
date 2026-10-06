#pragma once



// Package: GE_Base_Cost

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Base_Cost.GE_Base_Cost_C
// 0x0000 (0x07E8 - 0x07E8)
class UGE_Base_Cost_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Base_Cost_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Base_Cost_C")
	}
	static class UGE_Base_Cost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Base_Cost_C>();
	}
};
DUMPER7_ASSERTS_UGE_Base_Cost_C;

SDK_NAMESPACE_END
