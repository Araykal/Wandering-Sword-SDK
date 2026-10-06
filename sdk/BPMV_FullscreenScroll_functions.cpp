#pragma once



// Package: BPMV_FullscreenScroll

#include "Basic.hpp"

#include "BPMV_FullscreenScroll_classes.hpp"
#include "BPMV_FullscreenScroll_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.ExecuteUbergraph_BPMV_FullscreenScroll
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_FullscreenScroll_C::ExecuteUbergraph_BPMV_FullscreenScroll(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "ExecuteUbergraph_BPMV_FullscreenScroll");

	Params::BPMV_FullscreenScroll_C_ExecuteUbergraph_BPMV_FullscreenScroll Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.EVT_StartFadeOut
// (Event, Public, BlueprintEvent)

void UBPMV_FullscreenScroll_C::EVT_StartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "EVT_StartFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.EVT_StartToShow
// (Event, Public, BlueprintEvent)

void UBPMV_FullscreenScroll_C::EVT_StartToShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "EVT_StartToShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.SequenceEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll_C::SequenceEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "SequenceEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.SequenceEvent_2
// (BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll_C::SequenceEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "SequenceEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.On_ClickArea_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_FullscreenScroll_C::On_ClickArea_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "On_ClickArea_MouseButtonDown_0");

	Params::BPMV_FullscreenScroll_C_On_ClickArea_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.PlayStartAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll_C::PlayStartAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "PlayStartAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_0
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll_C::SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_1
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll_C::SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FullscreenScroll.BPMV_FullscreenScroll_C.SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_2
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_FullscreenScroll_C::SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FullscreenScroll_C", "SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_2");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
