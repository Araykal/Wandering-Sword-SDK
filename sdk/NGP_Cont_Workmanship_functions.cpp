#pragma once



// Package: NGP_Cont_Workmanship

#include "Basic.hpp"

#include "NGP_Cont_Workmanship_classes.hpp"
#include "NGP_Cont_Workmanship_parameters.hpp"


SDK_NAMESPACE_START

// Function NGP_Cont_Workmanship.NGP_Cont_Workmanship_C.ExecuteUbergraph_NGP_Cont_Workmanship
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNGP_Cont_Workmanship_C::ExecuteUbergraph_NGP_Cont_Workmanship(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Workmanship_C", "ExecuteUbergraph_NGP_Cont_Workmanship");

	Params::NGP_Cont_Workmanship_C_ExecuteUbergraph_NGP_Cont_Workmanship Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGP_Cont_Workmanship.NGP_Cont_Workmanship_C.EVT_StartFocusContent
// (Event, Public, BlueprintEvent)

void UNGP_Cont_Workmanship_C::EVT_StartFocusContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Workmanship_C", "EVT_StartFocusContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Workmanship.NGP_Cont_Workmanship_C.EVT_ProvideChildArea
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UNeoUIVisualElementBase*>* ChildArea                                              (Parm, OutParm, ContainsInstancedReference)

void UNGP_Cont_Workmanship_C::EVT_ProvideChildArea(TArray<class UNeoUIVisualElementBase*>* ChildArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Workmanship_C", "EVT_ProvideChildArea");

	Params::NGP_Cont_Workmanship_C_EVT_ProvideChildArea Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ChildArea != nullptr)
		*ChildArea = std::move(Parms.ChildArea);
}


// Function NGP_Cont_Workmanship.NGP_Cont_Workmanship_C.Navi_GotoDepartureBtn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNGP_Cont_Workmanship_C::Navi_GotoDepartureBtn(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Workmanship_C", "Navi_GotoDepartureBtn");

	Params::NGP_Cont_Workmanship_C_Navi_GotoDepartureBtn Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
