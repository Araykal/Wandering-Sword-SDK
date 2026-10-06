#pragma once



// Package: GC_SkillEffect_Base

#include "Basic.hpp"

#include "GC_SkillEffect_Base_classes.hpp"
#include "GC_SkillEffect_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.ExecuteUbergraph_GC_SkillEffect_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_Base_C::ExecuteUbergraph_GC_SkillEffect_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "ExecuteUbergraph_GC_SkillEffect_Base");

	Params::GC_SkillEffect_Base_C_ExecuteUbergraph_GC_SkillEffect_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGC_SkillEffect_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "ReceiveTick");

	Params::GC_SkillEffect_Base_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "ReceiveEndPlay");

	Params::GC_SkillEffect_Base_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_SkillEffect_Base_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "OnRemove");

	Params::GC_SkillEffect_Base_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_SkillEffect_Base_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "OnExecute");

	Params::GC_SkillEffect_Base_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_SkillEffect_Base_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "OnActive");

	Params::GC_SkillEffect_Base_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.创建粒子材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       FlipbookSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_Base_C::创建粒子材质(class AActor* Target, struct FVector2D* FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "创建粒子材质");

	Params::GC_SkillEffect_Base_C_创建粒子材质 Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookSize != nullptr)
		*FlipbookSize = std::move(Parms.FlipbookSize);
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.DestroyComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AGC_SkillEffect_Base_C::DestroyComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "DestroyComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.开启残影效果
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_Base_C::开启残影效果(class AActor* MyTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "开启残影效果");

	Params::GC_SkillEffect_Base_C_开启残影效果 Parms{};

	Parms.MyTarget = MyTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SkillEffect_Base.GC_SkillEffect_Base_C.更新粒子材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       FlipbookSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_Base_C::更新粒子材质(class AActor* MyTarget, struct FVector2D* FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_Base_C", "更新粒子材质");

	Params::GC_SkillEffect_Base_C_更新粒子材质 Parms{};

	Parms.MyTarget = MyTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookSize != nullptr)
		*FlipbookSize = std::move(Parms.FlipbookSize);
}


SDK_NAMESPACE_END
