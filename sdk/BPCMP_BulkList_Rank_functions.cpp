#pragma once



// Package: BPCMP_BulkList_Rank

#include "Basic.hpp"

#include "BPCMP_BulkList_Rank_classes.hpp"
#include "BPCMP_BulkList_Rank_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_BulkList_Rank.BPCMP_BulkList_Rank_C.ExecuteUbergraph_BPCMP_BulkList_Rank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_BulkList_Rank_C::ExecuteUbergraph_BPCMP_BulkList_Rank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkList_Rank_C", "ExecuteUbergraph_BPCMP_BulkList_Rank");

	Params::BPCMP_BulkList_Rank_C_ExecuteUbergraph_BPCMP_BulkList_Rank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_BulkList_Rank.BPCMP_BulkList_Rank_C.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UBPCMP_BulkList_Rank_C::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkList_Rank_C", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_BulkList_Rank.BPCMP_BulkList_Rank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPCMP_BulkList_Rank_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_BulkList_Rank_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
