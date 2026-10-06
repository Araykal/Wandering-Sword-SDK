#pragma once



// Package: NGP_Cont_Inheritance

#include "Basic.hpp"

#include "NGP_Cont_Inheritance_classes.hpp"
#include "NGP_Cont_Inheritance_parameters.hpp"


SDK_NAMESPACE_START

// Function NGP_Cont_Inheritance.NGP_Cont_Inheritance_C.ExecuteUbergraph_NGP_Cont_Inheritance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNGP_Cont_Inheritance_C::ExecuteUbergraph_NGP_Cont_Inheritance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Inheritance_C", "ExecuteUbergraph_NGP_Cont_Inheritance");

	Params::NGP_Cont_Inheritance_C_ExecuteUbergraph_NGP_Cont_Inheritance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NGP_Cont_Inheritance.NGP_Cont_Inheritance_C.EVT_StartFocusContent
// (Event, Public, BlueprintEvent)

void UNGP_Cont_Inheritance_C::EVT_StartFocusContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Inheritance_C", "EVT_StartFocusContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NGP_Cont_Inheritance.NGP_Cont_Inheritance_C.EVT_ProvideChildArea
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UNeoUIVisualElementBase*>* ChildArea                                              (Parm, OutParm, ContainsInstancedReference)

void UNGP_Cont_Inheritance_C::EVT_ProvideChildArea(TArray<class UNeoUIVisualElementBase*>* ChildArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NGP_Cont_Inheritance_C", "EVT_ProvideChildArea");

	Params::NGP_Cont_Inheritance_C_EVT_ProvideChildArea Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ChildArea != nullptr)
		*ChildArea = std::move(Parms.ChildArea);
}


SDK_NAMESPACE_END
