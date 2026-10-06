#pragma once



// Package: VE_Fusion_PropertyList

#include "Basic.hpp"

#include "VE_Fusion_PropertyList_classes.hpp"
#include "VE_Fusion_PropertyList_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_Fusion_PropertyList.VE_Fusion_PropertyList_C.ExecuteUbergraph_VE_Fusion_PropertyList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_Fusion_PropertyList_C::ExecuteUbergraph_VE_Fusion_PropertyList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_PropertyList_C", "ExecuteUbergraph_VE_Fusion_PropertyList");

	Params::VE_Fusion_PropertyList_C_ExecuteUbergraph_VE_Fusion_PropertyList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_Fusion_PropertyList.VE_Fusion_PropertyList_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UVE_Fusion_PropertyList_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_PropertyList_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_Fusion_PropertyList.VE_Fusion_PropertyList_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UVE_Fusion_PropertyList_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_PropertyList_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
