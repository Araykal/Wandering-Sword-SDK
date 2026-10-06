#pragma once



// Package: BP_InteractStaticMesh

#include "Basic.hpp"

#include "BP_InteractStaticMesh_classes.hpp"
#include "BP_InteractStaticMesh_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_InteractStaticMesh.BP_InteractStaticMesh_C.ExecuteUbergraph_BP_InteractStaticMesh
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractStaticMesh_C::ExecuteUbergraph_BP_InteractStaticMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_C", "ExecuteUbergraph_BP_InteractStaticMesh");

	Params::BP_InteractStaticMesh_C_ExecuteUbergraph_BP_InteractStaticMesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractStaticMesh.BP_InteractStaticMesh_C.HandleInteract
// (Event, Public, BlueprintEvent)

void ABP_InteractStaticMesh_C::HandleInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_C", "HandleInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractStaticMesh.BP_InteractStaticMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InteractStaticMesh_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractStaticMesh.BP_InteractStaticMesh_C.播放动画
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                             InWeaponType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractStaticMesh_C::播放动画(EWeaponType InWeaponType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_C", "播放动画");

	Params::BP_InteractStaticMesh_C_播放动画 Parms{};

	Parms.InWeaponType = InWeaponType;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
