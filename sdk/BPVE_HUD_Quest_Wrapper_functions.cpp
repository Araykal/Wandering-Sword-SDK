#pragma once



// Package: BPVE_HUD_Quest_Wrapper

#include "Basic.hpp"

#include "BPVE_HUD_Quest_Wrapper_classes.hpp"
#include "BPVE_HUD_Quest_Wrapper_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ExecuteUbergraph_BPVE_HUD_Quest_Wrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_HUD_Quest_Wrapper_C::ExecuteUbergraph_BPVE_HUD_Quest_Wrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Quest_Wrapper_C", "ExecuteUbergraph_BPVE_HUD_Quest_Wrapper");

	Params::BPVE_HUD_Quest_Wrapper_C_ExecuteUbergraph_BPVE_HUD_Quest_Wrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_HUD_Quest_Wrapper_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Quest_Wrapper_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.BndEvt__BPVE_HUD_Quest_BTN_Hide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_HUD_Quest_Wrapper_C::BndEvt__BPVE_HUD_Quest_BTN_Hide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Quest_Wrapper_C", "BndEvt__BPVE_HUD_Quest_BTN_Hide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.BndEvt__BPVE_HUD_Quest_BTN_SHOW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_HUD_Quest_Wrapper_C::BndEvt__BPVE_HUD_Quest_BTN_SHOW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Quest_Wrapper_C", "BndEvt__BPVE_HUD_Quest_BTN_SHOW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ShowStatus_Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      txt                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPVE_HUD_Quest_Wrapper_C::ShowStatus_Update(const class FText& txt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Quest_Wrapper_C", "ShowStatus_Update");

	Params::BPVE_HUD_Quest_Wrapper_C_ShowStatus_Update Parms{};

	Parms.txt = std::move(txt);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ShowStatus_Finish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      txt                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPVE_HUD_Quest_Wrapper_C::ShowStatus_Finish(const class FText& txt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Quest_Wrapper_C", "ShowStatus_Finish");

	Params::BPVE_HUD_Quest_Wrapper_C_ShowStatus_Finish Parms{};

	Parms.txt = std::move(txt);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_HUD_Quest_Wrapper.BPVE_HUD_Quest_Wrapper_C.ShowStatus_Failed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      txt                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPVE_HUD_Quest_Wrapper_C::ShowStatus_Failed(const class FText& txt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_HUD_Quest_Wrapper_C", "ShowStatus_Failed");

	Params::BPVE_HUD_Quest_Wrapper_C_ShowStatus_Failed Parms{};

	Parms.txt = std::move(txt);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
