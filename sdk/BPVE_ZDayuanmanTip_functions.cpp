#pragma once



// Package: BPVE_ZDayuanmanTip

#include "Basic.hpp"

#include "BPVE_ZDayuanmanTip_classes.hpp"
#include "BPVE_ZDayuanmanTip_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_ZDayuanmanTip.BPVE_ZDayuanmanTip_C.ExecuteUbergraph_BPVE_ZDayuanmanTip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_ZDayuanmanTip_C::ExecuteUbergraph_BPVE_ZDayuanmanTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ZDayuanmanTip_C", "ExecuteUbergraph_BPVE_ZDayuanmanTip");

	Params::BPVE_ZDayuanmanTip_C_ExecuteUbergraph_BPVE_ZDayuanmanTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_ZDayuanmanTip.BPVE_ZDayuanmanTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_ZDayuanmanTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ZDayuanmanTip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_ZDayuanmanTip.BPVE_ZDayuanmanTip_C.ChangeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSlateBrush&               NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPVE_ZDayuanmanTip_C::ChangeImage(const struct FSlateBrush& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_ZDayuanmanTip_C", "ChangeImage");

	Params::BPVE_ZDayuanmanTip_C_ChangeImage Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
