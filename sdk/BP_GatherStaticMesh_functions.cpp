#pragma once



// Package: BP_GatherStaticMesh

#include "Basic.hpp"

#include "BP_GatherStaticMesh_classes.hpp"
#include "BP_GatherStaticMesh_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GatherStaticMesh.BP_GatherStaticMesh_C.ExecuteUbergraph_BP_GatherStaticMesh
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherStaticMesh_C::ExecuteUbergraph_BP_GatherStaticMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_C", "ExecuteUbergraph_BP_GatherStaticMesh");

	Params::BP_GatherStaticMesh_C_ExecuteUbergraph_BP_GatherStaticMesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherStaticMesh.BP_GatherStaticMesh_C.Reset
// (Event, Public, BlueprintEvent)

void ABP_GatherStaticMesh_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherStaticMesh.BP_GatherStaticMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GatherStaticMesh_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherStaticMesh.BP_GatherStaticMesh_C.HandleVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EGatherType                             GatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherStaticMesh_C::HandleVisible(bool bVisible, EGatherType GatherType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_C", "HandleVisible");

	Params::BP_GatherStaticMesh_C_HandleVisible Parms{};

	Parms.bVisible = bVisible;
	Parms.GatherType = GatherType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherStaticMesh.BP_GatherStaticMesh_C.BP_PreGather
// (Event, Public, BlueprintEvent)
// Parameters:
// EGatherType                             GatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherStaticMesh_C::BP_PreGather(EGatherType GatherType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_C", "BP_PreGather");

	Params::BP_GatherStaticMesh_C_BP_PreGather Parms{};

	Parms.GatherType = GatherType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherStaticMesh.BP_GatherStaticMesh_C.树木倾倒__UpdateFunc
// (BlueprintEvent)

void ABP_GatherStaticMesh_C::树木倾倒__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_C", "树木倾倒__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherStaticMesh.BP_GatherStaticMesh_C.树木倾倒__FinishedFunc
// (BlueprintEvent)

void ABP_GatherStaticMesh_C::树木倾倒__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherStaticMesh_C", "树木倾倒__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
