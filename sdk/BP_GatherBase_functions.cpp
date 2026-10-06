#pragma once



// Package: BP_GatherBase

#include "Basic.hpp"

#include "BP_GatherBase_classes.hpp"
#include "BP_GatherBase_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GatherBase.BP_GatherBase_C.ExecuteUbergraph_BP_GatherBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherBase_C::ExecuteUbergraph_BP_GatherBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherBase_C", "ExecuteUbergraph_BP_GatherBase");

	Params::BP_GatherBase_C_ExecuteUbergraph_BP_GatherBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherBase.BP_GatherBase_C.SetVisibleImp
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bNewVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GatherBase_C::SetVisibleImp(bool bNewVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherBase_C", "SetVisibleImp");

	Params::BP_GatherBase_C_SetVisibleImp Parms{};

	Parms.bNewVisible = bNewVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherBase.BP_GatherBase_C.HandlePostGather
// (Event, Public, BlueprintEvent)
// Parameters:
// EGatherType                             GatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherBase_C::HandlePostGather(EGatherType GatherType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherBase_C", "HandlePostGather");

	Params::BP_GatherBase_C_HandlePostGather Parms{};

	Parms.GatherType = GatherType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherBase.BP_GatherBase_C.HandleVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EGatherType                             GatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherBase_C::HandleVisible(bool bVisible, EGatherType GatherType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherBase_C", "HandleVisible");

	Params::BP_GatherBase_C_HandleVisible Parms{};

	Parms.bVisible = bVisible;
	Parms.GatherType = GatherType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherBase.BP_GatherBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GatherBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
