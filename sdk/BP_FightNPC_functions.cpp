#pragma once



// Package: BP_FightNPC

#include "Basic.hpp"

#include "BP_FightNPC_classes.hpp"
#include "BP_FightNPC_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_FightNPC.BP_FightNPC_C.ExecuteUbergraph_BP_FightNPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightNPC_C::ExecuteUbergraph_BP_FightNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "ExecuteUbergraph_BP_FightNPC");

	Params::BP_FightNPC_C_ExecuteUbergraph_BP_FightNPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightNPC.BP_FightNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FightNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FightNPC.BP_FightNPC_C.HandleSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FightNPC_C::HandleSelected(bool bSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "HandleSelected");

	Params::BP_FightNPC_C_HandleSelected Parms{};

	Parms.bSelected_0 = bSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightNPC.BP_FightNPC_C.HandleShowHealthChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamangeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightNPC_C::HandleShowHealthChange(float InValue, EDamageType DamangeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "HandleShowHealthChange");

	Params::BP_FightNPC_C_HandleShowHealthChange Parms{};

	Parms.InValue = InValue;
	Parms.DamangeType = DamangeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightNPC.BP_FightNPC_C.HandleShowManaChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightNPC_C::HandleShowManaChange(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "HandleShowManaChange");

	Params::BP_FightNPC_C_HandleShowManaChange Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightNPC.BP_FightNPC_C.HandleDie
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FightNPC_C::HandleDie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "HandleDie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FightNPC.BP_FightNPC_C.HandleShowDamage
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamangeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightNPC_C::HandleShowDamage(float InValue, EDamageType DamangeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "HandleShowDamage");

	Params::BP_FightNPC_C_HandleShowDamage Parms{};

	Parms.InValue = InValue;
	Parms.DamangeType = DamangeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightNPC.BP_FightNPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightNPC_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "ReceiveTick");

	Params::BP_FightNPC_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightNPC.BP_FightNPC_C.ResetBlendColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FightNPC_C::ResetBlendColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "ResetBlendColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FightNPC.BP_FightNPC_C.AddColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightNPC_C::AddColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "AddColor");

	Params::BP_FightNPC_C_AddColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightNPC.BP_FightNPC_C.RemoveColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightNPC_C::RemoveColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightNPC_C", "RemoveColor");

	Params::BP_FightNPC_C_RemoveColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
