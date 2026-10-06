#pragma once



// Package: BP_InteractStaticMesh_ShiTai

#include "Basic.hpp"

#include "BP_InteractStaticMesh_ShiTai_classes.hpp"
#include "BP_InteractStaticMesh_ShiTai_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_InteractStaticMesh_ShiTai.BP_InteractStaticMesh_ShiTai_C.ExecuteUbergraph_BP_InteractStaticMesh_ShiTai
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractStaticMesh_ShiTai_C::ExecuteUbergraph_BP_InteractStaticMesh_ShiTai(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_ShiTai_C", "ExecuteUbergraph_BP_InteractStaticMesh_ShiTai");

	Params::BP_InteractStaticMesh_ShiTai_C_ExecuteUbergraph_BP_InteractStaticMesh_ShiTai Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractStaticMesh_ShiTai.BP_InteractStaticMesh_ShiTai_C.HandleInteract
// (Event, Public, BlueprintEvent)

void ABP_InteractStaticMesh_ShiTai_C::HandleInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_ShiTai_C", "HandleInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractStaticMesh_ShiTai.BP_InteractStaticMesh_ShiTai_C.BP_ShowWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractStaticMesh_ShiTai_C::BP_ShowWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_ShiTai_C", "BP_ShowWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractStaticMesh_ShiTai.BP_InteractStaticMesh_ShiTai_C.ControllShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractStaticMesh_ShiTai_C::ControllShow(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_ShiTai_C", "ControllShow");

	Params::BP_InteractStaticMesh_ShiTai_C_ControllShow Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractStaticMesh_ShiTai.BP_InteractStaticMesh_ShiTai_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InteractStaticMesh_ShiTai_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractStaticMesh_ShiTai_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
