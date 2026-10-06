#pragma once



// Package: NGP_Cont_Difficulty

#include "Basic.hpp"

#include "NGP_Cont_Difficulty_classes.hpp"
#include "NGP_Cont_Difficulty_parameters.hpp"


SDK_NAMESPACE_START

// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.ExecuteUbergraph_NGP_Cont_Difficulty
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNGP_Cont_Difficulty_C::ExecuteUbergraph_NGP_Cont_Difficulty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "ExecuteUbergraph_NGP_Cont_Difficulty");

	Params::NGP_Cont_Difficulty_C_ExecuteUbergraph_NGP_Cont_Difficulty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.EVT_ResetEDBPanel
// (Event, Public, BlueprintEvent)

void UNGP_Cont_Difficulty_C::EVT_ResetEDBPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "EVT_ResetEDBPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.BndEvt__NGP_Cont_Difficulty_BTN_Pre_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNGP_Cont_Difficulty_C::BndEvt__NGP_Cont_Difficulty_BTN_Pre_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "BndEvt__NGP_Cont_Difficulty_BTN_Pre_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.BndEvt__NGP_Cont_Difficulty_BTN_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNGP_Cont_Difficulty_C::BndEvt__NGP_Cont_Difficulty_BTN_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "BndEvt__NGP_Cont_Difficulty_BTN_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.EVT_HideEDBPanel
// (Event, Public, BlueprintEvent)

void UNGP_Cont_Difficulty_C::EVT_HideEDBPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "EVT_HideEDBPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.EVT_ShowEDBPanel
// (Event, Public, BlueprintEvent)

void UNGP_Cont_Difficulty_C::EVT_ShowEDBPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "EVT_ShowEDBPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.EVT_ChangeMaxLevelLockWidgetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNGP_Cont_Difficulty_C::EVT_ChangeMaxLevelLockWidgetVisibility(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "EVT_ChangeMaxLevelLockWidgetVisibility");

	Params::NGP_Cont_Difficulty_C_EVT_ChangeMaxLevelLockWidgetVisibility Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.EVT_StartFocusContent
// (Event, Public, BlueprintEvent)

void UNGP_Cont_Difficulty_C::EVT_StartFocusContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "EVT_StartFocusContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.EVT_ChangeFocusWidgetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNGP_Cont_Difficulty_C::EVT_ChangeFocusWidgetVisibility(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "EVT_ChangeFocusWidgetVisibility");

	Params::NGP_Cont_Difficulty_C_EVT_ChangeFocusWidgetVisibility Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNGP_Cont_Difficulty_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "DoCustomNavigation_0");

	Params::NGP_Cont_Difficulty_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.Navi_Group2toGroup1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNGP_Cont_Difficulty_C::Navi_Group2toGroup1(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "Navi_Group2toGroup1");

	Params::NGP_Cont_Difficulty_C_Navi_Group2toGroup1 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NGP_Cont_Difficulty.NGP_Cont_Difficulty_C.Navi_Group1toGroup2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNGP_Cont_Difficulty_C::Navi_Group1toGroup2(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Difficulty_C", "Navi_Group1toGroup2");

	Params::NGP_Cont_Difficulty_C_Navi_Group1toGroup2 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
