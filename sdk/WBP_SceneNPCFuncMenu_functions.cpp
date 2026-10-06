#pragma once



// Package: WBP_SceneNPCFuncMenu

#include "Basic.hpp"

#include "WBP_SceneNPCFuncMenu_classes.hpp"
#include "WBP_SceneNPCFuncMenu_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.ExecuteUbergraph_WBP_SceneNPCFuncMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SceneNPCFuncMenu_C::ExecuteUbergraph_WBP_SceneNPCFuncMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "ExecuteUbergraph_WBP_SceneNPCFuncMenu");

	Params::WBP_SceneNPCFuncMenu_C_ExecuteUbergraph_WBP_SceneNPCFuncMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.HandleHarvestAll
// (Event, Public, BlueprintEvent)

void UWBP_SceneNPCFuncMenu_C::HandleHarvestAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "HandleHarvestAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.EVT_UpdateActiveStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SceneNPCFuncMenu_C::EVT_UpdateActiveStatus(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "EVT_UpdateActiveStatus");

	Params::WBP_SceneNPCFuncMenu_C_EVT_UpdateActiveStatus Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.HandleGuildPatrol
// (Event, Public, BlueprintEvent)

void UWBP_SceneNPCFuncMenu_C::HandleGuildPatrol()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "HandleGuildPatrol");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.HandleUpdateInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      ViewText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SceneNPCFuncMenu_C::HandleUpdateInfo(const class FText& ViewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "HandleUpdateInfo");

	Params::WBP_SceneNPCFuncMenu_C_HandleUpdateInfo Parms{};

	Parms.ViewText = std::move(ViewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.BndEvt__BTNMenuItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SceneNPCFuncMenu_C::BndEvt__BTNMenuItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "BndEvt__BTNMenuItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_SceneNPCFuncMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "OnMouseButtonDown");

	Params::WBP_SceneNPCFuncMenu_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_SceneNPCFuncMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenu_C", "OnFocusReceived");

	Params::WBP_SceneNPCFuncMenu_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
