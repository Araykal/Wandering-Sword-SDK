#pragma once



// Package: BPVE_ProertyAbilityLine

#include "Basic.hpp"

#include "BPVE_ProertyAbilityLine_classes.hpp"
#include "BPVE_ProertyAbilityLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_ProertyAbilityLine.BPVE_ProertyAbilityLine_C.ExecuteUbergraph_BPVE_ProertyAbilityLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_ProertyAbilityLine_C::ExecuteUbergraph_BPVE_ProertyAbilityLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ProertyAbilityLine_C", "ExecuteUbergraph_BPVE_ProertyAbilityLine");

	Params::BPVE_ProertyAbilityLine_C_ExecuteUbergraph_BPVE_ProertyAbilityLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_ProertyAbilityLine.BPVE_ProertyAbilityLine_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_ProertyAbilityLine_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ProertyAbilityLine_C", "EVT_GamepadShowTips");

	Params::BPVE_ProertyAbilityLine_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_ProertyAbilityLine.BPVE_ProertyAbilityLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_ProertyAbilityLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ProertyAbilityLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_ProertyAbilityLine.BPVE_ProertyAbilityLine_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_ProertyAbilityLine_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ProertyAbilityLine_C", "GetToolTipWidget_0");

	Params::BPVE_ProertyAbilityLine_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
