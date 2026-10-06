#pragma once



// Package: BPVE_TutorialContent

#include "Basic.hpp"

#include "BPVE_TutorialContent_classes.hpp"
#include "BPVE_TutorialContent_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_TutorialContent.BPVE_TutorialContent_C.ExecuteUbergraph_BPVE_TutorialContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_TutorialContent_C::ExecuteUbergraph_BPVE_TutorialContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "ExecuteUbergraph_BPVE_TutorialContent");

	Params::BPVE_TutorialContent_C_ExecuteUbergraph_BPVE_TutorialContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBPVE_TutorialContent_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.EVT_PlayPreviousAnim
// (Event, Public, BlueprintEvent)

void UBPVE_TutorialContent_C::EVT_PlayPreviousAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "EVT_PlayPreviousAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.EVT_PlayNextAnim
// (Event, Public, BlueprintEvent)

void UBPVE_TutorialContent_C::EVT_PlayNextAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "EVT_PlayNextAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.EVT_UpdateContentCursor
// (Event, Public, BlueprintEvent)

void UBPVE_TutorialContent_C::EVT_UpdateContentCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "EVT_UpdateContentCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.SequenceEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBPVE_TutorialContent_C::SequenceEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "SequenceEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.On_Navi_Next_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_TutorialContent_C::On_Navi_Next_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "On_Navi_Next_MouseButtonDown_0");

	Params::BPVE_TutorialContent_C_On_Navi_Next_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.On_Navi_Pre_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_TutorialContent_C::On_Navi_Pre_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "On_Navi_Pre_MouseButtonDown_0");

	Params::BPVE_TutorialContent_C_On_Navi_Pre_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.SequenceEvent__ENTRYPOINTBPVE_TutorialContent_0
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_TutorialContent_C::SequenceEvent__ENTRYPOINTBPVE_TutorialContent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "SequenceEvent__ENTRYPOINTBPVE_TutorialContent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_TutorialContent.BPVE_TutorialContent_C.SequenceEvent__ENTRYPOINTBPVE_TutorialContent_1
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_TutorialContent_C::SequenceEvent__ENTRYPOINTBPVE_TutorialContent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_TutorialContent_C", "SequenceEvent__ENTRYPOINTBPVE_TutorialContent_1");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
