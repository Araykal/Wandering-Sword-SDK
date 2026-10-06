#pragma once



// Package: VE_Fusion_PropertyLine

#include "Basic.hpp"

#include "VE_Fusion_PropertyLine_classes.hpp"
#include "VE_Fusion_PropertyLine_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_Fusion_PropertyLine.VE_Fusion_PropertyLine_C.ExecuteUbergraph_VE_Fusion_PropertyLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_Fusion_PropertyLine_C::ExecuteUbergraph_VE_Fusion_PropertyLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_PropertyLine_C", "ExecuteUbergraph_VE_Fusion_PropertyLine");

	Params::VE_Fusion_PropertyLine_C_ExecuteUbergraph_VE_Fusion_PropertyLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_Fusion_PropertyLine.VE_Fusion_PropertyLine_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UVE_Fusion_PropertyLine_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Fusion_PropertyLine_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
