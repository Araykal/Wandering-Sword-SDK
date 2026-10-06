#pragma once



// Package: BP_FollowAbilityProjectile

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_FollowAbilityProjectile.BP_FollowAbilityProjectile_C
// 0x0010 (0x02F0 - 0x02E0)
class ABP_FollowAbilityProjectile_C final : public AFollowAbilityProjectile
{
public:
	float                                         DamageMultiplier;                                  // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_FollowAbilityProjectile_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_FollowAbilityProjectile_C")
	}
	static class ABP_FollowAbilityProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FollowAbilityProjectile_C>();
	}
};
DUMPER7_ASSERTS_ABP_FollowAbilityProjectile_C;

SDK_NAMESPACE_END
