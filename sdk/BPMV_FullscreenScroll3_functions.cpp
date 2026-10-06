#pragma once



// Package: BPMV_FullscreenScroll3

#include "Basic.hpp"

#include "BPMV_FullscreenScroll3_classes.hpp"
#include "BPMV_FullscreenScroll3_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.ExecuteUbergraph_BPMV_FullscreenScroll3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_FullscreenScroll3_C::ExecuteUbergraph_BPMV_FullscreenScroll3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "ExecuteUbergraph_BPMV_FullscreenScroll3");

	Params::BPMV_FullscreenScroll3_C_ExecuteUbergraph_BPMV_FullscreenScroll3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.EVT_StartToShow
// (Event, Public, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::EVT_StartToShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "EVT_StartToShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.SequenceEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::SequenceEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "SequenceEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.SequenceEvent_2
// (BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::SequenceEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "SequenceEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.On_ClickArea_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_FullscreenScroll3_C::On_ClickArea_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "On_ClickArea_MouseButtonDown_0");

	Params::BPMV_FullscreenScroll3_C_On_ClickArea_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.PlayStartAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::PlayStartAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "PlayStartAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_0
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_1
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll3.BPMV_FullscreenScroll3_C.SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_2
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll3_C::SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll3_C", "SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll3_2");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
