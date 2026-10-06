#pragma once



// Package: GE_Base_AttrPercent_AttackPower_TurnBased_De

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Base_AttrPercent_AttackPower_TurnBased_De.GE_Base_AttrPercent_AttackPower_TurnBased_De_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_Base_AttrPercent_AttackPower_TurnBased_De_C : public UJHGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Base_AttrPercent_AttackPower_TurnBased_De_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Base_AttrPercent_AttackPower_TurnBased_De_C")
	}
	static class UGE_Base_AttrPercent_AttackPower_TurnBased_De_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Base_AttrPercent_AttackPower_TurnBased_De_C>();
	}
};
DUMPER7_ASSERTS_UGE_Base_AttrPercent_AttackPower_TurnBased_De_C;

SDK_NAMESPACE_END
