#pragma once



// Package: BP_Base_Attack_New_WithDamageMultiplier

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Base_Attack_New_WithDamageMultiplier.BP_Base_Attack_New_WithDamageMultiplier_C
// 0x0000 (0x07E8 - 0x07E8)
class UBP_Base_Attack_New_WithDamageMultiplier_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Base_Attack_New_WithDamageMultiplier_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Base_Attack_New_WithDamageMultiplier_C")
	}
	static class UBP_Base_Attack_New_WithDamageMultiplier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Base_Attack_New_WithDamageMultiplier_C>();
	}
};
DUMPER7_ASSERTS_UBP_Base_Attack_New_WithDamageMultiplier_C;

SDK_NAMESPACE_END
