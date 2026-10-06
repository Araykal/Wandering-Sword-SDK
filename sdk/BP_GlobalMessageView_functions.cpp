#pragma once



// Package: BP_GlobalMessageView

#include "Basic.hpp"

#include "BP_GlobalMessageView_classes.hpp"
#include "BP_GlobalMessageView_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GlobalMessageView.BP_GlobalMessageView_C.ExecuteUbergraph_BP_GlobalMessageView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GlobalMessageView_C::ExecuteUbergraph_BP_GlobalMessageView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalMessageView_C", "ExecuteUbergraph_BP_GlobalMessageView");

	Params::BP_GlobalMessageView_C_ExecuteUbergraph_BP_GlobalMessageView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalMessageView.BP_GlobalMessageView_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GlobalMessageView_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalMessageView_C", "Tick");

	Params::BP_GlobalMessageView_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
