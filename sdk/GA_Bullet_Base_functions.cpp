#pragma once



// Package: GA_Bullet_Base

#include "Basic.hpp"

#include "GA_Bullet_Base_classes.hpp"
#include "GA_Bullet_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_Bullet_Base.GA_Bullet_Base_C.ExecuteUbergraph_GA_Bullet_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Bullet_Base_C::ExecuteUbergraph_GA_Bullet_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "ExecuteUbergraph_GA_Bullet_Base");

	Params::GA_Bullet_Base_C_ExecuteUbergraph_GA_Bullet_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Bullet_Base.GA_Bullet_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Bullet_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "K2_OnEndAbility");

	Params::GA_Bullet_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Bullet_Base.GA_Bullet_Base_C.受击伤害
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFightNPC*                        OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           子弹                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Bullet_Base_C::受击伤害(class AFightNPC* OtherActor, class AActor* 子弹)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "受击伤害");

	Params::GA_Bullet_Base_C_受击伤害 Parms{};

	Parms.OtherActor = OtherActor;
	Parms.子弹 = 子弹;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Bullet_Base.GA_Bullet_Base_C.大招定屏后
// (BlueprintCallable, BlueprintEvent)

void UGA_Bullet_Base_C::大招定屏后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "大招定屏后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Bullet_Base.GA_Bullet_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Bullet_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Bullet_Base.GA_Bullet_Base_C.OnBulletDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Bullet_Base_C::OnBulletDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "OnBulletDestroyed");

	Params::GA_Bullet_Base_C_OnBulletDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Bullet_Base.GA_Bullet_Base_C.OnActorBeginOverlap_事件_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Bullet_Base_C::OnActorBeginOverlap_事件_0(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "OnActorBeginOverlap_事件_0");

	Params::GA_Bullet_Base_C_OnActorBeginOverlap_事件_0 Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Bullet_Base.GA_Bullet_Base_C.OnFinish_0433FD5D4E95A8FF237CBCB6AD9198B8
// (BlueprintCallable, BlueprintEvent)

void UGA_Bullet_Base_C::OnFinish_0433FD5D4E95A8FF237CBCB6AD9198B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Bullet_Base_C", "OnFinish_0433FD5D4E95A8FF237CBCB6AD9198B8");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
