#pragma once



// Package: BPVE_JHConfig_WithLock

#include "Basic.hpp"

#include "BPVE_JHConfig_WithLock_classes.hpp"
#include "BPVE_JHConfig_WithLock_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.ExecuteUbergraph_BPVE_JHConfig_WithLock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfig_WithLock_C::ExecuteUbergraph_BPVE_JHConfig_WithLock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfig_WithLock_C", "ExecuteUbergraph_BPVE_JHConfig_WithLock");

	Params::BPVE_JHConfig_WithLock_C_ExecuteUbergraph_BPVE_JHConfig_WithLock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const class FString&                    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHConfig_WithLock_C::BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfig_WithLock_C", "BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::BPVE_JHConfig_WithLock_C_BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.EVT_UpdateLockStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPVE_JHConfig_WithLock_C::EVT_UpdateLockStatus(bool IsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfig_WithLock_C", "EVT_UpdateLockStatus");

	Params::BPVE_JHConfig_WithLock_C_EVT_UpdateLockStatus Parms{};

	Parms.IsLocked = IsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_JHConfig_WithLock_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfig_WithLock_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_JHConfig_WithLock_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHConfig_WithLock_C", "OnMouseButtonDown_0");

	Params::BPVE_JHConfig_WithLock_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
