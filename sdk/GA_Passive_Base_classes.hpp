#pragma once



// Package: GA_Passive_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Passive_Base.GA_Passive_Base_C
// 0x0028 (0x0480 - 0x0458)
class UGA_Passive_Base_C : public UJHGameplayPassiveAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          开启受击镜头慢放;                                  // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_461[0x3];                                      // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         受击慢放速率;                                      // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         受击慢放延时;                                      // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          是否只产生一次伤害;                                // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         IgnoreDamageActors;                                // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void CanApplyDamage(class AActor* Actor, bool* return_0);
	void GetBulletFlyDistance(int32 GridNum, bool bHypotenuse, float* Distance);
	void 检查是否可放大招(bool* 可以施放);
	void OwnerIsHero(bool* bIsHero);
	void GetAbilityTargetPosition(struct FVector* Position);
	void 受击慢放();
	void 受击慢放后();
	void ExecuteUbergraph_GA_Passive_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Passive_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Passive_Base_C")
	}
	static class UGA_Passive_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Passive_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_Passive_Base_C;

SDK_NAMESPACE_END
