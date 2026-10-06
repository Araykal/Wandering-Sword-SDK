#pragma once



// Package: VE_Cooking_ListGenreItem

#include "Basic.hpp"

#include "VE_Cooking_ListGenreItem_classes.hpp"
#include "VE_Cooking_ListGenreItem_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_Cooking_ListGenreItem.VE_Cooking_ListGenreItem_C.ExecuteUbergraph_VE_Cooking_ListGenreItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_Cooking_ListGenreItem_C::ExecuteUbergraph_VE_Cooking_ListGenreItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Cooking_ListGenreItem_C", "ExecuteUbergraph_VE_Cooking_ListGenreItem");

	Params::VE_Cooking_ListGenreItem_C_ExecuteUbergraph_VE_Cooking_ListGenreItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_Cooking_ListGenreItem.VE_Cooking_ListGenreItem_C.BndEvt__VE_FusionListGenreItem_Weapon_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVE_Cooking_ListGenreItem_C::BndEvt__VE_FusionListGenreItem_Weapon_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Cooking_ListGenreItem_C", "BndEvt__VE_FusionListGenreItem_Weapon_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_Cooking_ListGenreItem.VE_Cooking_ListGenreItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UVE_Cooking_ListGenreItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_Cooking_ListGenreItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
