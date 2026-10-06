#pragma once



// Package: BPVE_Backpack_SortType_BtnItem

#include "Basic.hpp"

#include "BPVE_Backpack_SortType_BtnItem_classes.hpp"
#include "BPVE_Backpack_SortType_BtnItem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Backpack_SortType_BtnItem.BPVE_Backpack_SortType_BtnItem_C.ExecuteUbergraph_BPVE_Backpack_SortType_BtnItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Backpack_SortType_BtnItem_C::ExecuteUbergraph_BPVE_Backpack_SortType_BtnItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_BtnItem_C", "ExecuteUbergraph_BPVE_Backpack_SortType_BtnItem");

	Params::BPVE_Backpack_SortType_BtnItem_C_ExecuteUbergraph_BPVE_Backpack_SortType_BtnItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Backpack_SortType_BtnItem.BPVE_Backpack_SortType_BtnItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_Backpack_SortType_BtnItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_BtnItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Backpack_SortType_BtnItem.BPVE_Backpack_SortType_BtnItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_Backpack_SortType_BtnItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Backpack_SortType_BtnItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
