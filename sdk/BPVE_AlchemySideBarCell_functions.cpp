#pragma once



// Package: BPVE_AlchemySideBarCell

#include "Basic.hpp"

#include "BPVE_AlchemySideBarCell_classes.hpp"
#include "BPVE_AlchemySideBarCell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.ExecuteUbergraph_BPVE_AlchemySideBarCell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_AlchemySideBarCell_C::ExecuteUbergraph_BPVE_AlchemySideBarCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "ExecuteUbergraph_BPVE_AlchemySideBarCell");

	Params::BPVE_AlchemySideBarCell_C_ExecuteUbergraph_BPVE_AlchemySideBarCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_AlchemySideBarCell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_AlchemySideBarCell_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.BndEvt__BPVE_SideBarCell2_BTN_SidebarCell_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_AlchemySideBarCell_C::BndEvt__BPVE_SideBarCell2_BTN_SidebarCell_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "BndEvt__BPVE_SideBarCell2_BTN_SidebarCell_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_AlchemySideBarCell_C_BndEvt__BPVE_SideBarCell2_BTN_SidebarCell_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_AlchemySideBarCell_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "ReceiveModuleMessage");

	Params::BPVE_AlchemySideBarCell_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.On_BTN_TOP_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_AlchemySideBarCell_C::On_BTN_TOP_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "On_BTN_TOP_MouseButtonDown_0");

	Params::BPVE_AlchemySideBarCell_C_On_BTN_TOP_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.On_BTN_TOP_MouseDoubleClick_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_AlchemySideBarCell_C::On_BTN_TOP_MouseDoubleClick_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "On_BTN_TOP_MouseDoubleClick_0");

	Params::BPVE_AlchemySideBarCell_C_On_BTN_TOP_MouseDoubleClick_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.FindPreCell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_AlchemySideBarCell_C::FindPreCell(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "FindPreCell");

	Params::BPVE_AlchemySideBarCell_C_FindPreCell Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.FindNextCell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_AlchemySideBarCell_C::FindNextCell(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "FindNextCell");

	Params::BPVE_AlchemySideBarCell_C_FindNextCell Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_AlchemySideBarCell.BPVE_AlchemySideBarCell_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_AlchemySideBarCell_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_AlchemySideBarCell_C", "OnMouseButtonDown_0");

	Params::BPVE_AlchemySideBarCell_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
