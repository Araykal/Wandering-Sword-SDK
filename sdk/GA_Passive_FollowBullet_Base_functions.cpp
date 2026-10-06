#pragma once



// Package: GA_Passive_FollowBullet_Base

#include "Basic.hpp"

#include "GA_Passive_FollowBullet_Base_classes.hpp"
#include "GA_Passive_FollowBullet_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_Passive_FollowBullet_Base.GA_Passive_FollowBullet_Base_C.OnBulletBeginOverlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor1                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_FollowBullet_Base_C::OnBulletBeginOverlap(class AActor* OverlappedActor1, class AActor* OtherActor1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_FollowBullet_Base_C", "OnBulletBeginOverlap");

	Params::GA_Passive_FollowBullet_Base_C_OnBulletBeginOverlap Parms{};

	Parms.OverlappedActor1 = OverlappedActor1;
	Parms.OtherActor1 = OtherActor1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_FollowBullet_Base.GA_Passive_FollowBullet_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Passive_FollowBullet_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_FollowBullet_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_FollowBullet_Base.GA_Passive_FollowBullet_Base_C.OnBulletDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_FollowBullet_Base_C::OnBulletDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_FollowBullet_Base_C", "OnBulletDestroyed");

	Params::GA_Passive_FollowBullet_Base_C_OnBulletDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_FollowBullet_Base.GA_Passive_FollowBullet_Base_C.OnOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_FollowBullet_Base_C::OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_FollowBullet_Base_C", "OnOverlap");

	Params::GA_Passive_FollowBullet_Base_C_OnOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_FollowBullet_Base.GA_Passive_FollowBullet_Base_C.ExecuteUbergraph_GA_Passive_FollowBullet_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_FollowBullet_Base_C::ExecuteUbergraph_GA_Passive_FollowBullet_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_FollowBullet_Base_C", "ExecuteUbergraph_GA_Passive_FollowBullet_Base");

	Params::GA_Passive_FollowBullet_Base_C_ExecuteUbergraph_GA_Passive_FollowBullet_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
