#pragma once



// Package: BPMV_NGP_Settlement

#include "Basic.hpp"

#include "BPMV_NGP_Settlement_classes.hpp"
#include "BPMV_NGP_Settlement_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_NGP_Settlement.BPMV_NGP_Settlement_C.ExecuteUbergraph_BPMV_NGP_Settlement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_NGP_Settlement_C::ExecuteUbergraph_BPMV_NGP_Settlement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Settlement_C", "ExecuteUbergraph_BPMV_NGP_Settlement");

	Params::BPMV_NGP_Settlement_C_ExecuteUbergraph_BPMV_NGP_Settlement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_NGP_Settlement.BPMV_NGP_Settlement_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_NGP_Settlement_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Settlement_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Settlement.BPMV_NGP_Settlement_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_NGP_Settlement_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Settlement_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Settlement.BPMV_NGP_Settlement_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_NGP_Settlement_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Settlement_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Settlement.BPMV_NGP_Settlement_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_NGP_Settlement_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Settlement_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_NGP_Settlement.BPMV_NGP_Settlement_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_NGP_Settlement_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_NGP_Settlement_C", "OnMouseButtonDown_0");

	Params::BPMV_NGP_Settlement_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
