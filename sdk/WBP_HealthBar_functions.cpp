#pragma once



// Package: WBP_HealthBar

#include "Basic.hpp"

#include "WBP_HealthBar_classes.hpp"
#include "WBP_HealthBar_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_HealthBar.WBP_HealthBar_C.ExecuteUbergraph_WBP_HealthBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::ExecuteUbergraph_WBP_HealthBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "ExecuteUbergraph_WBP_HealthBar");

	Params::WBP_HealthBar_C_ExecuteUbergraph_WBP_HealthBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthBar.WBP_HealthBar_C.ShowArrow
// (Event, Public, BlueprintEvent)

void UWBP_HealthBar_C::ShowArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "ShowArrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HealthBar.WBP_HealthBar_C.HideArrow
// (Event, Public, BlueprintEvent)

void UWBP_HealthBar_C::HideArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "HideArrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HealthBar.WBP_HealthBar_C.HandleHealthChange
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::HandleHealthChange(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "HandleHealthChange");

	Params::WBP_HealthBar_C_HandleHealthChange Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthBar.WBP_HealthBar_C.HandleTurnChange
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::HandleTurnChange(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "HandleTurnChange");

	Params::WBP_HealthBar_C_HandleTurnChange Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthBar.WBP_HealthBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HealthBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HealthBar.WBP_HealthBar_C.SwithToGreenHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HealthBar_C::SwithToGreenHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "SwithToGreenHealth");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
