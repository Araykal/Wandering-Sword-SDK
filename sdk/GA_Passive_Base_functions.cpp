#pragma once



// Package: GA_Passive_Base

#include "Basic.hpp"

#include "GA_Passive_Base_classes.hpp"
#include "GA_Passive_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_Passive_Base.GA_Passive_Base_C.CanApplyDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   return_0                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Passive_Base_C::CanApplyDamage(class AActor* Actor, bool* return_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "CanApplyDamage");

	Params::GA_Passive_Base_C_CanApplyDamage Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (return_0 != nullptr)
		*return_0 = Parms.return_0;
}


// Function GA_Passive_Base.GA_Passive_Base_C.GetBulletFlyDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GridNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHypotenuse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                                  Distance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_Base_C::GetBulletFlyDistance(int32 GridNum, bool bHypotenuse, float* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "GetBulletFlyDistance");

	Params::GA_Passive_Base_C_GetBulletFlyDistance Parms{};

	Parms.GridNum = GridNum;
	Parms.bHypotenuse = bHypotenuse;

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}


// Function GA_Passive_Base.GA_Passive_Base_C.检查是否可放大招
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   可以施放                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Passive_Base_C::检查是否可放大招(bool* 可以施放)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "检查是否可放大招");

	Params::GA_Passive_Base_C_检查是否可放大招 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (可以施放 != nullptr)
		*可以施放 = Parms.可以施放;
}


// Function GA_Passive_Base.GA_Passive_Base_C.OwnerIsHero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bIsHero                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Passive_Base_C::OwnerIsHero(bool* bIsHero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "OwnerIsHero");

	Params::GA_Passive_Base_C_OwnerIsHero Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsHero != nullptr)
		*bIsHero = Parms.bIsHero;
}


// Function GA_Passive_Base.GA_Passive_Base_C.GetAbilityTargetPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                         Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_Base_C::GetAbilityTargetPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "GetAbilityTargetPosition");

	Params::GA_Passive_Base_C_GetAbilityTargetPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}


// Function GA_Passive_Base.GA_Passive_Base_C.受击慢放
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Base_C::受击慢放()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "受击慢放");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Base.GA_Passive_Base_C.受击慢放后
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Base_C::受击慢放后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "受击慢放后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Base.GA_Passive_Base_C.ExecuteUbergraph_GA_Passive_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_Base_C::ExecuteUbergraph_GA_Passive_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Base_C", "ExecuteUbergraph_GA_Passive_Base");

	Params::GA_Passive_Base_C_ExecuteUbergraph_GA_Passive_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
