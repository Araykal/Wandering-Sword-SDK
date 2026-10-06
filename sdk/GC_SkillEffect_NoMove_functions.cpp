#pragma once



// Package: GC_SkillEffect_NoMove

#include "Basic.hpp"

#include "GC_SkillEffect_NoMove_classes.hpp"
#include "GC_SkillEffect_NoMove_parameters.hpp"


SDK_NAMESPACE_START

// Function GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C.ExecuteUbergraph_GC_SkillEffect_NoMove
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_NoMove_C::ExecuteUbergraph_GC_SkillEffect_NoMove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_NoMove_C", "ExecuteUbergraph_GC_SkillEffect_NoMove");

	Params::GC_SkillEffect_NoMove_C_ExecuteUbergraph_GC_SkillEffect_NoMove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_NoMove_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_NoMove_C", "ReceiveTick");

	Params::GC_SkillEffect_NoMove_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C.开启残影效果 No Move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_NoMove_C::开启残影效果_No_Move(class AActor* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_NoMove_C", "开启残影效果 No Move");

	Params::GC_SkillEffect_NoMove_C_开启残影效果_No_Move Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C.创建粒子材质 No Move
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       FlipbookSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SkillEffect_NoMove_C::创建粒子材质_No_Move(class AActor* NewParam, struct FVector2D* FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_NoMove_C", "创建粒子材质 No Move");

	Params::GC_SkillEffect_NoMove_C_创建粒子材质_No_Move Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookSize != nullptr)
		*FlipbookSize = std::move(Parms.FlipbookSize);
}


// Function GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_SkillEffect_NoMove_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_NoMove_C", "OnActive");

	Params::GC_SkillEffect_NoMove_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C.DestroyComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AGC_SkillEffect_NoMove_C::DestroyComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_NoMove_C", "DestroyComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_SkillEffect_NoMove_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SkillEffect_NoMove_C", "OnExecute");

	Params::GC_SkillEffect_NoMove_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
