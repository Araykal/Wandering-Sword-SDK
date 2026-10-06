#pragma once



// Package: BPVE_FishingListItem_0

#include "Basic.hpp"

#include "BPVE_FishingListItem_0_classes.hpp"
#include "BPVE_FishingListItem_0_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_FishingListItem.BPVE_FishingListItem_C.ExecuteUbergraph_BPVE_FishingListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BPVE_FishingListItem_0::UBPVE_FishingListItem_C::ExecuteUbergraph_BPVE_FishingListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_FishingListItem_C", "ExecuteUbergraph_BPVE_FishingListItem");

	Params::BPVE_FishingListItem_C_ExecuteUbergraph_BPVE_FishingListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_FishingListItem.BPVE_FishingListItem_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void BPVE_FishingListItem_0::UBPVE_FishingListItem_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_FishingListItem_C", "EVT_GamepadShowTips");

	Params::BPVE_FishingListItem_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_FishingListItem.BPVE_FishingListItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void BPVE_FishingListItem_0::UBPVE_FishingListItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_FishingListItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_FishingListItem.BPVE_FishingListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void BPVE_FishingListItem_0::UBPVE_FishingListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_FishingListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_FishingListItem.BPVE_FishingListItem_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* BPVE_FishingListItem_0::UBPVE_FishingListItem_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_FishingListItem_C", "GetToolTipWidget_0");

	Params::BPVE_FishingListItem_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
