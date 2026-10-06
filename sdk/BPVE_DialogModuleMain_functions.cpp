#pragma once



// Package: BPVE_DialogModuleMain

#include "Basic.hpp"

#include "BPVE_DialogModuleMain_classes.hpp"
#include "BPVE_DialogModuleMain_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.ExecuteUbergraph_BPVE_DialogModuleMain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_DialogModuleMain_C::ExecuteUbergraph_BPVE_DialogModuleMain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "ExecuteUbergraph_BPVE_DialogModuleMain");

	Params::BPVE_DialogModuleMain_C_ExecuteUbergraph_BPVE_DialogModuleMain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.BndEvt__BPVE_DialogModuleMain_BTN_Auto_Stop_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_DialogModuleMain_C::BndEvt__BPVE_DialogModuleMain_BTN_Auto_Stop_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "BndEvt__BPVE_DialogModuleMain_BTN_Auto_Stop_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.BndEvt__BPVE_DialogModuleMain_BTN_Auto_Start_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_DialogModuleMain_C::BndEvt__BPVE_DialogModuleMain_BTN_Auto_Start_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "BndEvt__BPVE_DialogModuleMain_BTN_Auto_Start_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.BndEvt__BPVE_DialogModuleMain_NeoUIButtonBase_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_DialogModuleMain_C::BndEvt__BPVE_DialogModuleMain_NeoUIButtonBase_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "BndEvt__BPVE_DialogModuleMain_NeoUIButtonBase_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.EVT_SyncInputModeWhileShow
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleMain_C::EVT_SyncInputModeWhileShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "EVT_SyncInputModeWhileShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleMain_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.EVT_ShowMainData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FDialogCommonData&         DialogData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPVE_DialogModuleMain_C::EVT_ShowMainData(const struct FDialogCommonData& DialogData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "EVT_ShowMainData");

	Params::BPVE_DialogModuleMain_C_EVT_ShowMainData Parms{};

	Parms.DialogData = std::move(DialogData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_DialogModuleMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModuleMain_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_DialogModuleMain_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "ReceiveModuleMessage");

	Params::BPVE_DialogModuleMain_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModuleMain.BPVE_DialogModuleMain_C.On_IMG_Bg_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_DialogModuleMain_C::On_IMG_Bg_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModuleMain_C", "On_IMG_Bg_MouseButtonDown_0");

	Params::BPVE_DialogModuleMain_C_On_IMG_Bg_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
