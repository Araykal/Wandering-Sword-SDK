#pragma once



// Package: BPVE_MeridianMainNodeDetail

#include "Basic.hpp"

#include "BPVE_MeridianMainNodeDetail_classes.hpp"
#include "BPVE_MeridianMainNodeDetail_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MeridianMainNodeDetail.BPVE_MeridianMainNodeDetail_C.ExecuteUbergraph_BPVE_MeridianMainNodeDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianMainNodeDetail_C::ExecuteUbergraph_BPVE_MeridianMainNodeDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianMainNodeDetail_C", "ExecuteUbergraph_BPVE_MeridianMainNodeDetail");

	Params::BPVE_MeridianMainNodeDetail_C_ExecuteUbergraph_BPVE_MeridianMainNodeDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianMainNodeDetail.BPVE_MeridianMainNodeDetail_C.BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMain_All_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPVE_MeridianMainNodeDetail_C::BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMain_All_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianMainNodeDetail_C", "BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMain_All_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MeridianMainNodeDetail.BPVE_MeridianMainNodeDetail_C.BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMainDetail_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPVE_MeridianMainNodeDetail_C::BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMainDetail_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianMainNodeDetail_C", "BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMainDetail_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MeridianMainNodeDetail.BPVE_MeridianMainNodeDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_MeridianMainNodeDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianMainNodeDetail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MeridianMainNodeDetail.BPVE_MeridianMainNodeDetail_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_MeridianMainNodeDetail_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianMainNodeDetail_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
