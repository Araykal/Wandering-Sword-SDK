#pragma once



// Package: BPVE_EAD_Item

#include "Basic.hpp"

#include "BPVE_EAD_Item_classes.hpp"
#include "BPVE_EAD_Item_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_EAD_Item.BPVE_EAD_Item_C.ExecuteUbergraph_BPVE_EAD_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_EAD_Item_C::ExecuteUbergraph_BPVE_EAD_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_Item_C", "ExecuteUbergraph_BPVE_EAD_Item");

	Params::BPVE_EAD_Item_C_ExecuteUbergraph_BPVE_EAD_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAD_Item.BPVE_EAD_Item_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_EAD_Item_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_Item_C", "EVT_GamepadShowTips");

	Params::BPVE_EAD_Item_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_EAD_Item.BPVE_EAD_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_EAD_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_EAD_Item.BPVE_EAD_Item_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_EAD_Item_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_EAD_Item_C", "GetToolTipWidget_0");

	Params::BPVE_EAD_Item_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
