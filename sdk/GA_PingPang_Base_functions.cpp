#pragma once



// Package: GA_PingPang_Base

#include "Basic.hpp"

#include "GA_PingPang_Base_classes.hpp"
#include "GA_PingPang_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_PingPang_Base.GA_PingPang_Base_C.ExecuteUbergraph_GA_PingPang_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PingPang_Base_C::ExecuteUbergraph_GA_PingPang_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "ExecuteUbergraph_GA_PingPang_Base");

	Params::GA_PingPang_Base_C_ExecuteUbergraph_GA_PingPang_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_PingPang_Base.GA_PingPang_Base_C.OnBulletDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PingPang_Base_C::OnBulletDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "OnBulletDestroyed");

	Params::GA_PingPang_Base_C_OnBulletDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_PingPang_Base.GA_PingPang_Base_C.OnBulletBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PingPang_Base_C::OnBulletBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "OnBulletBeginOverlap");

	Params::GA_PingPang_Base_C_OnBulletBeginOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_PingPang_Base.GA_PingPang_Base_C.大招定屏后
// (BlueprintCallable, BlueprintEvent)

void UGA_PingPang_Base_C::大招定屏后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "大招定屏后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_PingPang_Base.GA_PingPang_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_PingPang_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_PingPang_Base.GA_PingPang_Base_C.受击及伤害
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFollowAbilityProjectile*         Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFightNPC*                        FightNPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PingPang_Base_C::受击及伤害(class AFollowAbilityProjectile* Projectile, class AFightNPC* FightNPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "受击及伤害");

	Params::GA_PingPang_Base_C_受击及伤害 Parms{};

	Parms.Projectile = Projectile;
	Parms.FightNPC = FightNPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_PingPang_Base.GA_PingPang_Base_C.GetDamageCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InAttackTarget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  AttackCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PingPang_Base_C::GetDamageCount(class AActor* InAttackTarget, int32* AttackCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "GetDamageCount");

	Params::GA_PingPang_Base_C_GetDamageCount Parms{};

	Parms.InAttackTarget = InAttackTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (AttackCount != nullptr)
		*AttackCount = Parms.AttackCount;
}


// Function GA_PingPang_Base.GA_PingPang_Base_C.GetDamageMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   已攻击次数                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  Multiplier                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PingPang_Base_C::GetDamageMultiplier(int32 已攻击次数, float* Multiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PingPang_Base_C", "GetDamageMultiplier");

	Params::GA_PingPang_Base_C_GetDamageMultiplier Parms{};

	Parms.已攻击次数 = 已攻击次数;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;
}


SDK_NAMESPACE_END
