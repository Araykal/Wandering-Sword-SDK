#pragma once



// Package: JHBPFunctionLibrary

#include "Basic.hpp"

#include "JHBPFunctionLibrary_classes.hpp"
#include "JHBPFunctionLibrary_parameters.hpp"


SDK_NAMESPACE_START

// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.SetFightNPCTickWhenPause
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFightNPC*                        FightNPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TickWhenPause                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::SetFightNPCTickWhenPause(class AFightNPC* FightNPC, bool TickWhenPause, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "SetFightNPCTickWhenPause");

	Params::JHBPFunctionLibrary_C_SetFightNPCTickWhenPause Parms{};

	Parms.FightNPC = FightNPC;
	Parms.TickWhenPause = TickWhenPause;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.GetFightSpectator
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFightSpectator**                 Spectator                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::GetFightSpectator(class UObject* __WorldContext, class AFightSpectator** Spectator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "GetFightSpectator");

	Params::JHBPFunctionLibrary_C_GetFightSpectator Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Spectator != nullptr)
		*Spectator = Parms.Spectator;
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.SetFightSpectatorLocation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   NewLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    强制移动                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::SetFightSpectatorLocation(const struct FVector& NewLocation, bool 强制移动, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "SetFightSpectatorLocation");

	Params::JHBPFunctionLibrary_C_SetFightSpectatorLocation Parms{};

	Parms.NewLocation = std::move(NewLocation);
	Parms.强制移动 = 强制移动;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.ResetDirectionalLightIntensity
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::ResetDirectionalLightIntensity(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "ResetDirectionalLightIntensity");

	Params::JHBPFunctionLibrary_C_ResetDirectionalLightIntensity Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.ResetFightSpectatorArmArgs
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseLag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::ResetFightSpectatorArmArgs(bool UseLag, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "ResetFightSpectatorArmArgs");

	Params::JHBPFunctionLibrary_C_ResetFightSpectatorArmArgs Parms{};

	Parms.UseLag = UseLag;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.SetFightSpectatorArmArgs
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FRotator&                  Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ArmLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   TargetOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseLag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::SetFightSpectatorArmArgs(const struct FRotator& Rotator, float ArmLength, const struct FVector& TargetOffset, float Speed, bool UseLag, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "SetFightSpectatorArmArgs");

	Params::JHBPFunctionLibrary_C_SetFightSpectatorArmArgs Parms{};

	Parms.Rotator = std::move(Rotator);
	Parms.ArmLength = ArmLength;
	Parms.TargetOffset = std::move(TargetOffset);
	Parms.Speed = Speed;
	Parms.UseLag = UseLag;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.GetPostProcess
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_JHPostProcess_C**             JHPostProcess                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::GetPostProcess(class UObject* __WorldContext, class ABP_JHPostProcess_C** JHPostProcess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "GetPostProcess");

	Params::JHBPFunctionLibrary_C_GetPostProcess Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (JHPostProcess != nullptr)
		*JHPostProcess = Parms.JHPostProcess;
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.ResetBokenFocalDistance
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::ResetBokenFocalDistance(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "ResetBokenFocalDistance");

	Params::JHBPFunctionLibrary_C_ResetBokenFocalDistance Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.SetBokenFocalDistance
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   FocalDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::SetBokenFocalDistance(float FocalDistance, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "SetBokenFocalDistance");

	Params::JHBPFunctionLibrary_C_SetBokenFocalDistance Parms{};

	Parms.FocalDistance = FocalDistance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.SetCAIntensity
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFloatPropertyChild&       Property                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   TransitionTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Restore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::SetCAIntensity(const struct FFloatPropertyChild& Property, float TransitionTime, float DelayTime, bool Restore, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "SetCAIntensity");

	Params::JHBPFunctionLibrary_C_SetCAIntensity Parms{};

	Parms.Property = std::move(Property);
	Parms.TransitionTime = TransitionTime;
	Parms.DelayTime = DelayTime;
	Parms.Restore = Restore;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.SetDirectionalLightFloat
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFloatPropertyChild&       FloatProperty                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   TransitionTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Restore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::SetDirectionalLightFloat(const struct FFloatPropertyChild& FloatProperty, float TransitionTime, float DelayTime, bool Restore, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "SetDirectionalLightFloat");

	Params::JHBPFunctionLibrary_C_SetDirectionalLightFloat Parms{};

	Parms.FloatProperty = std::move(FloatProperty);
	Parms.TransitionTime = TransitionTime;
	Parms.DelayTime = DelayTime;
	Parms.Restore = Restore;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function JHBPFunctionLibrary.JHBPFunctionLibrary_C.ResetDirectionalLightFloat
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFloatPropertyChild&       FloatProperty                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   TransitionTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHBPFunctionLibrary_C::ResetDirectionalLightFloat(const struct FFloatPropertyChild& FloatProperty, float TransitionTime, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JHBPFunctionLibrary_C", "ResetDirectionalLightFloat");

	Params::JHBPFunctionLibrary_C_ResetDirectionalLightFloat Parms{};

	Parms.FloatProperty = std::move(FloatProperty);
	Parms.TransitionTime = TransitionTime;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
