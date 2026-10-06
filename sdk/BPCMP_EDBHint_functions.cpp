#pragma once



// Package: BPCMP_EDBHint

#include "Basic.hpp"

#include "BPCMP_EDBHint_classes.hpp"
#include "BPCMP_EDBHint_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_EDBHint.BPCMP_EDBHint_C.ExecuteUbergraph_BPCMP_EDBHint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_EDBHint_C::ExecuteUbergraph_BPCMP_EDBHint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EDBHint_C", "ExecuteUbergraph_BPCMP_EDBHint");

	Params::BPCMP_EDBHint_C_ExecuteUbergraph_BPCMP_EDBHint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_EDBHint.BPCMP_EDBHint_C.EVT_OnMouseLeftDown
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 InGeometry                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPCMP_EDBHint_C::EVT_OnMouseLeftDown(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EDBHint_C", "EVT_OnMouseLeftDown");

	Params::BPCMP_EDBHint_C_EVT_OnMouseLeftDown Parms{};

	Parms.InGeometry = std::move(InGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_EDBHint.BPCMP_EDBHint_C.EVT_OnMouseLeave
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPCMP_EDBHint_C::EVT_OnMouseLeave(const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EDBHint_C", "EVT_OnMouseLeave");

	Params::BPCMP_EDBHint_C_EVT_OnMouseLeave Parms{};

	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_EDBHint.BPCMP_EDBHint_C.EVT_OnMouseEnter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 InGeometry                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPCMP_EDBHint_C::EVT_OnMouseEnter(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_EDBHint_C", "EVT_OnMouseEnter");

	Params::BPCMP_EDBHint_C_EVT_OnMouseEnter Parms{};

	Parms.InGeometry = std::move(InGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
