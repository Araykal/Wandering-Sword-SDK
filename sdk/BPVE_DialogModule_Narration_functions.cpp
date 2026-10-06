#pragma once



// Package: BPVE_DialogModule_Narration

#include "Basic.hpp"

#include "BPVE_DialogModule_Narration_classes.hpp"
#include "BPVE_DialogModule_Narration_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.ExecuteUbergraph_BPVE_DialogModule_Narration
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_DialogModule_Narration_C::ExecuteUbergraph_BPVE_DialogModule_Narration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModule_Narration_C", "ExecuteUbergraph_BPVE_DialogModule_Narration");

	Params::BPVE_DialogModule_Narration_C_ExecuteUbergraph_BPVE_DialogModule_Narration Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModule_Narration_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModule_Narration_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.EVT_ShowMainData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FDialogCommonData&         DialogData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPVE_DialogModule_Narration_C::EVT_ShowMainData(const struct FDialogCommonData& DialogData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModule_Narration_C", "EVT_ShowMainData");

	Params::BPVE_DialogModule_Narration_C_EVT_ShowMainData Parms{};

	Parms.DialogData = std::move(DialogData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_DialogModule_Narration_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModule_Narration_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_DialogModule_Narration_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModule_Narration_C", "ReceiveModuleMessage");

	Params::BPVE_DialogModule_Narration_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_DialogModule_Narration_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModule_Narration_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_DialogModule_Narration.BPVE_DialogModule_Narration_C.On_IMG_Bg_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_DialogModule_Narration_C::On_IMG_Bg_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_DialogModule_Narration_C", "On_IMG_Bg_MouseButtonDown_0");

	Params::BPVE_DialogModule_Narration_C_On_IMG_Bg_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
