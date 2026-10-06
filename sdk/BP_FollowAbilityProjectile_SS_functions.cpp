#pragma once



// Package: BP_FollowAbilityProjectile_SS

#include "Basic.hpp"

#include "BP_FollowAbilityProjectile_SS_classes.hpp"
#include "BP_FollowAbilityProjectile_SS_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C.ExecuteUbergraph_BP_FollowAbilityProjectile_SS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FollowAbilityProjectile_SS_C::ExecuteUbergraph_BP_FollowAbilityProjectile_SS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FollowAbilityProjectile_SS_C", "ExecuteUbergraph_BP_FollowAbilityProjectile_SS");

	Params::BP_FollowAbilityProjectile_SS_C_ExecuteUbergraph_BP_FollowAbilityProjectile_SS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FollowAbilityProjectile_SS_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FollowAbilityProjectile_SS_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FollowAbilityProjectile_SS_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FollowAbilityProjectile_SS_C", "ReceiveTick");

	Params::BP_FollowAbilityProjectile_SS_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FollowAbilityProjectile_SS_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FollowAbilityProjectile_SS_C", "ReceiveActorBeginOverlap");

	Params::BP_FollowAbilityProjectile_SS_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C.更新粒子材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       FlipbookSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FollowAbilityProjectile_SS_C::更新粒子材质(class AActor* MyTarget, struct FVector2D* FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FollowAbilityProjectile_SS_C", "更新粒子材质");

	Params::BP_FollowAbilityProjectile_SS_C_更新粒子材质 Parms{};

	Parms.MyTarget = MyTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookSize != nullptr)
		*FlipbookSize = std::move(Parms.FlipbookSize);
}


// Function BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C.创建粒子材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       FlipbookSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FollowAbilityProjectile_SS_C::创建粒子材质(class AActor* Target, struct FVector2D* FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FollowAbilityProjectile_SS_C", "创建粒子材质");

	Params::BP_FollowAbilityProjectile_SS_C_创建粒子材质 Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookSize != nullptr)
		*FlipbookSize = std::move(Parms.FlipbookSize);
}


// Function BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C.开启残影效果
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FollowAbilityProjectile_SS_C::开启残影效果(class AActor* MyTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FollowAbilityProjectile_SS_C", "开启残影效果");

	Params::BP_FollowAbilityProjectile_SS_C_开启残影效果 Parms{};

	Parms.MyTarget = MyTarget;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
