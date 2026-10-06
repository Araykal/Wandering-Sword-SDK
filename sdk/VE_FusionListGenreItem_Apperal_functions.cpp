#pragma once



// Package: VE_FusionListGenreItem_Apperal

#include "Basic.hpp"

#include "VE_FusionListGenreItem_Apperal_classes.hpp"
#include "VE_FusionListGenreItem_Apperal_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_FusionListGenreItem_Apperal.VE_FusionListGenreItem_Apperal_C.ExecuteUbergraph_VE_FusionListGenreItem_Apperal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_FusionListGenreItem_Apperal_C::ExecuteUbergraph_VE_FusionListGenreItem_Apperal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListGenreItem_Apperal_C", "ExecuteUbergraph_VE_FusionListGenreItem_Apperal");

	Params::VE_FusionListGenreItem_Apperal_C_ExecuteUbergraph_VE_FusionListGenreItem_Apperal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_FusionListGenreItem_Apperal.VE_FusionListGenreItem_Apperal_C.BndEvt__VE_FusionListGenreItem_Apperal_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVE_FusionListGenreItem_Apperal_C::BndEvt__VE_FusionListGenreItem_Apperal_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListGenreItem_Apperal_C", "BndEvt__VE_FusionListGenreItem_Apperal_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_FusionListGenreItem_Apperal.VE_FusionListGenreItem_Apperal_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UVE_FusionListGenreItem_Apperal_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListGenreItem_Apperal_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_FusionListGenreItem_Apperal.VE_FusionListGenreItem_Apperal_C.SetIconImg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_FusionListGenreItem_Apperal_C::SetIconImg(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListGenreItem_Apperal_C", "SetIconImg");

	Params::VE_FusionListGenreItem_Apperal_C_SetIconImg Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
