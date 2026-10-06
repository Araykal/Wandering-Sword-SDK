#pragma once



// Package: BPVE_Consule_WorkmanshipLine

#include "Basic.hpp"

#include "BPVE_Consule_WorkmanshipLine_classes.hpp"
#include "BPVE_Consule_WorkmanshipLine_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Consule_WorkmanshipLine.BPVE_Consule_WorkmanshipLine_C.ExecuteUbergraph_BPVE_Consule_WorkmanshipLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Consule_WorkmanshipLine_C::ExecuteUbergraph_BPVE_Consule_WorkmanshipLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Consule_WorkmanshipLine_C", "ExecuteUbergraph_BPVE_Consule_WorkmanshipLine");

	Params::BPVE_Consule_WorkmanshipLine_C_ExecuteUbergraph_BPVE_Consule_WorkmanshipLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Consule_WorkmanshipLine.BPVE_Consule_WorkmanshipLine_C.BndEvt__BPVE_Consule_WorkmanshipLine_BTN_Consult_workmanship_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Consule_WorkmanshipLine_C::BndEvt__BPVE_Consule_WorkmanshipLine_BTN_Consult_workmanship_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Consule_WorkmanshipLine_C", "BndEvt__BPVE_Consule_WorkmanshipLine_BTN_Consult_workmanship_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_Consule_WorkmanshipLine_C_BndEvt__BPVE_Consule_WorkmanshipLine_BTN_Consult_workmanship_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Consule_WorkmanshipLine.BPVE_Consule_WorkmanshipLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_Consule_WorkmanshipLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Consule_WorkmanshipLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Consule_WorkmanshipLine.BPVE_Consule_WorkmanshipLine_C.Get_IMG_SKILL_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_Consule_WorkmanshipLine_C::Get_IMG_SKILL_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Consule_WorkmanshipLine_C", "Get_IMG_SKILL_ToolTipWidget_0");

	Params::BPVE_Consule_WorkmanshipLine_C_Get_IMG_SKILL_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_Consule_WorkmanshipLine.BPVE_Consule_WorkmanshipLine_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_Consule_WorkmanshipLine_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Consule_WorkmanshipLine_C", "GetToolTipWidget_0");

	Params::BPVE_Consule_WorkmanshipLine_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
