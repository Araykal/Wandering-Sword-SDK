#pragma once



// Package: BPEntry_Item_WDT_Buyback

#include "Basic.hpp"

#include "BPEntry_Item_WDT_Buyback_classes.hpp"
#include "BPEntry_Item_WDT_Buyback_parameters.hpp"


SDK_NAMESPACE_START

// Function BPEntry_Item_WDT_Buyback.BPEntry_Item_WDT_Buyback_C.ExecuteUbergraph_BPEntry_Item_WDT_Buyback
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEntry_Item_WDT_Buyback_C::ExecuteUbergraph_BPEntry_Item_WDT_Buyback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Buyback_C", "ExecuteUbergraph_BPEntry_Item_WDT_Buyback");

	Params::BPEntry_Item_WDT_Buyback_C_ExecuteUbergraph_BPEntry_Item_WDT_Buyback Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPEntry_Item_WDT_Buyback.BPEntry_Item_WDT_Buyback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPEntry_Item_WDT_Buyback_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPEntry_Item_WDT_Buyback_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
