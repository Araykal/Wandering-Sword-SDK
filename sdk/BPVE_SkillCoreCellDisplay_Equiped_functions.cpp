#pragma once



// Package: BPVE_SkillCoreCellDisplay_Equiped

#include "Basic.hpp"

#include "BPVE_SkillCoreCellDisplay_Equiped_classes.hpp"
#include "BPVE_SkillCoreCellDisplay_Equiped_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SkillCoreCellDisplay_Equiped_C::ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCellDisplay_Equiped_C", "ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped");

	Params::BPVE_SkillCoreCellDisplay_Equiped_C_ExecuteUbergraph_BPVE_SkillCoreCellDisplay_Equiped Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SkillCoreCellDisplay_Equiped_C::BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCellDisplay_Equiped_C", "BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_SkillCoreCellDisplay_Equiped_C_BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_SkillCoreCell_Equiped_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_SkillCoreCellDisplay_Equiped_C::BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCellDisplay_Equiped_C", "BndEvt__BPVE_SkillCoreCellDisplay_Equiped_BTN_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPVE_SkillCoreCellDisplay_Equiped_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCellDisplay_Equiped_C", "OnMouseLeave");

	Params::BPVE_SkillCoreCellDisplay_Equiped_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPVE_SkillCoreCellDisplay_Equiped_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCellDisplay_Equiped_C", "OnMouseEnter");

	Params::BPVE_SkillCoreCellDisplay_Equiped_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.On_BTN_MAIN_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_SkillCoreCellDisplay_Equiped_C::On_BTN_MAIN_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCellDisplay_Equiped_C", "On_BTN_MAIN_MouseButtonDown_0");

	Params::BPVE_SkillCoreCellDisplay_Equiped_C_On_BTN_MAIN_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_SkillCoreCellDisplay_Equiped.BPVE_SkillCoreCellDisplay_Equiped_C.On_BTN_MAIN_MouseDoubleClick_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_SkillCoreCellDisplay_Equiped_C::On_BTN_MAIN_MouseDoubleClick_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCellDisplay_Equiped_C", "On_BTN_MAIN_MouseDoubleClick_0");

	Params::BPVE_SkillCoreCellDisplay_Equiped_C_On_BTN_MAIN_MouseDoubleClick_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
