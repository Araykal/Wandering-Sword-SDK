#pragma once



// Package: BPVE_QuestDetail

#include "Basic.hpp"

#include "BPVE_QuestDetail_classes.hpp"
#include "BPVE_QuestDetail_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_QuestDetail.BPVE_QuestDetail_C.ExecuteUbergraph_BPVE_QuestDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_QuestDetail_C::ExecuteUbergraph_BPVE_QuestDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestDetail_C", "ExecuteUbergraph_BPVE_QuestDetail");

	Params::BPVE_QuestDetail_C_ExecuteUbergraph_BPVE_QuestDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_QuestDetail.BPVE_QuestDetail_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_QuestDetail_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestDetail_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_QuestDetail.BPVE_QuestDetail_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_QuestDetail_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestDetail_C", "OnFocusReceived");

	Params::BPVE_QuestDetail_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
