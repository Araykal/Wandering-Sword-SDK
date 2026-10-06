#pragma once



// Package: BPVE_SaveFilesCell_Latest

#include "Basic.hpp"

#include "BPVE_SaveFilesCell_Latest_classes.hpp"
#include "BPVE_SaveFilesCell_Latest_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.ExecuteUbergraph_BPVE_SaveFilesCell_Latest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SaveFilesCell_Latest_C::ExecuteUbergraph_BPVE_SaveFilesCell_Latest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "ExecuteUbergraph_BPVE_SaveFilesCell_Latest");

	Params::BPVE_SaveFilesCell_Latest_C_ExecuteUbergraph_BPVE_SaveFilesCell_Latest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.BndEvt__BPVE_SaveFilesCell_Latest_BTN_ModifyName_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::BndEvt__BPVE_SaveFilesCell_Latest_BTN_ModifyName_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "BndEvt__BPVE_SaveFilesCell_Latest_BTN_ModifyName_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.BndEvt__BPVE_SaveFilesCell_Latest_BtnMain_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SaveFilesCell_Latest_C::BndEvt__BPVE_SaveFilesCell_Latest_BtnMain_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "BndEvt__BPVE_SaveFilesCell_Latest_BtnMain_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_SaveFilesCell_Latest_C_BndEvt__BPVE_SaveFilesCell_Latest_BtnMain_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.EVT_DeactivateCell
// (Event, Public, BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::EVT_DeactivateCell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "EVT_DeactivateCell");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.BndEvt__BPVE_SaveFilesCell_Latest_BtnMain_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::BndEvt__BPVE_SaveFilesCell_Latest_BtnMain_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "BndEvt__BPVE_SaveFilesCell_Latest_BtnMain_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPVE_SaveFilesCell_Latest_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "OnMouseLeave");

	Params::BPVE_SaveFilesCell_Latest_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPVE_SaveFilesCell_Latest_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "OnMouseEnter");

	Params::BPVE_SaveFilesCell_Latest_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.BndEvt__BPVE_SaveFilesCell_NeoUIButtonBase_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::BndEvt__BPVE_SaveFilesCell_NeoUIButtonBase_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "BndEvt__BPVE_SaveFilesCell_NeoUIButtonBase_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.Deactive
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_SaveFilesCell_Latest_C::Deactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "Deactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SaveFilesCell_Latest.BPVE_SaveFilesCell_Latest_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_SaveFilesCell_Latest_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SaveFilesCell_Latest_C", "OnFocusReceived");

	Params::BPVE_SaveFilesCell_Latest_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
