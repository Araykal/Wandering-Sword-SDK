#pragma once



// Package: NGP_Cont_Skill

#include "Basic.hpp"

#include "NGP_Cont_Skill_classes.hpp"
#include "NGP_Cont_Skill_parameters.hpp"


SDK_NAMESPACE_START

// Function NGP_Cont_Skill.NGP_Cont_Skill_C.EVT_ProvideQualityTextArr
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UNeoUITextBlockBase*>*     TextArr                                                (Parm, OutParm, ContainsInstancedReference)

void UNGP_Cont_Skill_C::EVT_ProvideQualityTextArr(TArray<class UNeoUITextBlockBase*>* TextArr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Skill_C", "EVT_ProvideQualityTextArr");

	Params::NGP_Cont_Skill_C_EVT_ProvideQualityTextArr Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextArr != nullptr)
		*TextArr = std::move(Parms.TextArr);
}


// Function NGP_Cont_Skill.NGP_Cont_Skill_C.Navi_GotoDepartureBtn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNGP_Cont_Skill_C::Navi_GotoDepartureBtn(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Skill_C", "Navi_GotoDepartureBtn");

	Params::NGP_Cont_Skill_C_Navi_GotoDepartureBtn Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
