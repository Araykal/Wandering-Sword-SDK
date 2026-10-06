#pragma once



// Package: BP_GatherStaticMesh_BaoXiang2

#include "Basic.hpp"

#include "BP_GatherStaticMesh_BaoXiang2_classes.hpp"
#include "BP_GatherStaticMesh_BaoXiang2_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GatherStaticMesh_BaoXiang2.BP_GatherStaticMesh_BaoXiang2_C.ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherStaticMesh_BaoXiang2_C::ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_BaoXiang2_C", "ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2");

	Params::BP_GatherStaticMesh_BaoXiang2_C_ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherStaticMesh_BaoXiang2.BP_GatherStaticMesh_BaoXiang2_C.HandlePostGather
// (Event, Public, BlueprintEvent)
// Parameters:
// EGatherType                             GatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherStaticMesh_BaoXiang2_C::HandlePostGather(EGatherType GatherType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_BaoXiang2_C", "HandlePostGather");

	Params::BP_GatherStaticMesh_BaoXiang2_C_HandlePostGather Parms{};

	Parms.GatherType = GatherType;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
