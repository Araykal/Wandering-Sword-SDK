#pragma once



// Package: BPMV_Alchemy

#include "Basic.hpp"

#include "BPMV_Alchemy_classes.hpp"
#include "BPMV_Alchemy_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_Alchemy.BPMV_Alchemy_C.ExecuteUbergraph_BPMV_Alchemy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_Alchemy_C::ExecuteUbergraph_BPMV_Alchemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_C", "ExecuteUbergraph_BPMV_Alchemy");

	Params::BPMV_Alchemy_C_ExecuteUbergraph_BPMV_Alchemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_Alchemy.BPMV_Alchemy_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_Alchemy_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy.BPMV_Alchemy_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_Alchemy_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy.BPMV_Alchemy_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_Alchemy_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_Alchemy.BPMV_Alchemy_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_Alchemy_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_Alchemy_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
