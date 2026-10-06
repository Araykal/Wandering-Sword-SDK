#pragma once



// Package: GA_WuDiZhan_Base

#include "Basic.hpp"

#include "GA_WuDiZhan_Base_classes.hpp"
#include "GA_WuDiZhan_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.ExecuteUbergraph_GA_WuDiZhan_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::ExecuteUbergraph_GA_WuDiZhan_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "ExecuteUbergraph_GA_WuDiZhan_Base");

	Params::GA_WuDiZhan_Base_C_ExecuteUbergraph_GA_WuDiZhan_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.大招定屏后
// (BlueprintCallable, BlueprintEvent)

void UGA_WuDiZhan_Base_C::大招定屏后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "大招定屏后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.OnBulletDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::OnBulletDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "OnBulletDestroyed");

	Params::GA_WuDiZhan_Base_C_OnBulletDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.OnBulletBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::OnBulletBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "OnBulletBeginOverlap");

	Params::GA_WuDiZhan_Base_C_OnBulletBeginOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_WuDiZhan_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "K2_OnEndAbility");

	Params::GA_WuDiZhan_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_WuDiZhan_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.GetAttackCountByActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  AttackCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::GetAttackCountByActor(class AActor* InActor, int32* AttackCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "GetAttackCountByActor");

	Params::GA_WuDiZhan_Base_C_GetAttackCountByActor Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);

	if (AttackCount != nullptr)
		*AttackCount = Parms.AttackCount;
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.GetDamageMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  Multiplier                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::GetDamageMultiplier(class AActor* InActor, float* Multiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "GetDamageMultiplier");

	Params::GA_WuDiZhan_Base_C_GetDamageMultiplier Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.GetRandomTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                          NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::GetRandomTarget(class AActor** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "GetRandomTarget");

	Params::GA_WuDiZhan_Base_C_GetRandomTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.GetDamageCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  AttackCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::GetDamageCount(int32* AttackCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "GetDamageCount");

	Params::GA_WuDiZhan_Base_C_GetDamageCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AttackCount != nullptr)
		*AttackCount = Parms.AttackCount;
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.AllTargetIsDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_WuDiZhan_Base_C::AllTargetIsDead(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "AllTargetIsDead");

	Params::GA_WuDiZhan_Base_C_AllTargetIsDead Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function GA_WuDiZhan_Base.GA_WuDiZhan_Base_C.GetOverlapTargetFromCache
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                          OverlapTarget                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuDiZhan_Base_C::GetOverlapTargetFromCache(class AActor** OverlapTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuDiZhan_Base_C", "GetOverlapTargetFromCache");

	Params::GA_WuDiZhan_Base_C_GetOverlapTargetFromCache Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OverlapTarget != nullptr)
		*OverlapTarget = Parms.OverlapTarget;
}


SDK_NAMESPACE_END
