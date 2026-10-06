#pragma once



// Package: BPMV_JHNeoUIWorldMap3

#include "Basic.hpp"

#include "BPMV_JHNeoUIWorldMap3_classes.hpp"
#include "BPMV_JHNeoUIWorldMap3_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHNeoUIWorldMap3.BPMV_JHNeoUIWorldMap3_C.ExecuteUbergraph_BPMV_JHNeoUIWorldMap3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHNeoUIWorldMap3_C::ExecuteUbergraph_BPMV_JHNeoUIWorldMap3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIWorldMap3_C", "ExecuteUbergraph_BPMV_JHNeoUIWorldMap3");

	Params::BPMV_JHNeoUIWorldMap3_C_ExecuteUbergraph_BPMV_JHNeoUIWorldMap3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHNeoUIWorldMap3.BPMV_JHNeoUIWorldMap3_C.EVT_HideCityLayer
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUIWorldMap3_C::EVT_HideCityLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIWorldMap3_C", "EVT_HideCityLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUIWorldMap3.BPMV_JHNeoUIWorldMap3_C.EVT_ShowCityLayer
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUIWorldMap3_C::EVT_ShowCityLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIWorldMap3_C", "EVT_ShowCityLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUIWorldMap3.BPMV_JHNeoUIWorldMap3_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUIWorldMap3_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIWorldMap3_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHNeoUIWorldMap3.BPMV_JHNeoUIWorldMap3_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUIWorldMap3_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIWorldMap3_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
