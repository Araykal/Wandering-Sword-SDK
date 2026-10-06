#pragma once



// Package: BPVE_PMsgC_Img

#include "Basic.hpp"

#include "BPVE_PMsgC_Img_classes.hpp"
#include "BPVE_PMsgC_Img_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_PMsgC_Img.BPVE_PMsgC_Img_C.ExecuteUbergraph_BPVE_PMsgC_Img
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_PMsgC_Img_C::ExecuteUbergraph_BPVE_PMsgC_Img(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PMsgC_Img_C", "ExecuteUbergraph_BPVE_PMsgC_Img");

	Params::BPVE_PMsgC_Img_C_ExecuteUbergraph_BPVE_PMsgC_Img Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_PMsgC_Img.BPVE_PMsgC_Img_C.EVT_SkipEndCG_EndLongPress
// (Event, Public, BlueprintEvent)

void UBPVE_PMsgC_Img_C::EVT_SkipEndCG_EndLongPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PMsgC_Img_C", "EVT_SkipEndCG_EndLongPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_PMsgC_Img.BPVE_PMsgC_Img_C.EVT_SkipEndCG_StartLongPress
// (Event, Public, BlueprintEvent)

void UBPVE_PMsgC_Img_C::EVT_SkipEndCG_StartLongPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PMsgC_Img_C", "EVT_SkipEndCG_StartLongPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_PMsgC_Img.BPVE_PMsgC_Img_C.EVT_MsgModuleShow
// (Event, Public, BlueprintEvent)

void UBPVE_PMsgC_Img_C::EVT_MsgModuleShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PMsgC_Img_C", "EVT_MsgModuleShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_PMsgC_Img.BPVE_PMsgC_Img_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPVE_PMsgC_Img_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_PMsgC_Img_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
