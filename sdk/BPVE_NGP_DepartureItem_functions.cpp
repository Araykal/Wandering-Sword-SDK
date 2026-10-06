#pragma once



// Package: BPVE_NGP_DepartureItem

#include "Basic.hpp"

#include "BPVE_NGP_DepartureItem_classes.hpp"
#include "BPVE_NGP_DepartureItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.ExecuteUbergraph_BPVE_NGP_DepartureItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_NGP_DepartureItem_C::ExecuteUbergraph_BPVE_NGP_DepartureItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "ExecuteUbergraph_BPVE_NGP_DepartureItem");

	Params::BPVE_NGP_DepartureItem_C_ExecuteUbergraph_BPVE_NGP_DepartureItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPVE_NGP_DepartureItem_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.BndEvt__BPVE_NGP_DepartureItem_BTN_Minus_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPVE_NGP_DepartureItem_C::BndEvt__BPVE_NGP_DepartureItem_BTN_Minus_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "BndEvt__BPVE_NGP_DepartureItem_BTN_Minus_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.BndEvt__BPVE_NGP_DepartureItem_BTN_Plus_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPVE_NGP_DepartureItem_C::BndEvt__BPVE_NGP_DepartureItem_BTN_Plus_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "BndEvt__BPVE_NGP_DepartureItem_BTN_Plus_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_NGP_DepartureItem_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_NGP_DepartureItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.Navi_Left
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_NGP_DepartureItem_C::Navi_Left(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "Navi_Left");

	Params::BPVE_NGP_DepartureItem_C_Navi_Left Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C.Navi_Right
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_NGP_DepartureItem_C::Navi_Right(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_NGP_DepartureItem_C", "Navi_Right");

	Params::BPVE_NGP_DepartureItem_C_Navi_Right Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
