#pragma once



// Package: VE_JHMessage

#include "Basic.hpp"

#include "VE_JHMessage_classes.hpp"
#include "VE_JHMessage_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_JHMessage.VE_JHMessage_C.ExecuteUbergraph_VE_JHMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_JHMessage_C::ExecuteUbergraph_VE_JHMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_JHMessage_C", "ExecuteUbergraph_VE_JHMessage");

	Params::VE_JHMessage_C_ExecuteUbergraph_VE_JHMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_JHMessage.VE_JHMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVE_JHMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_JHMessage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_JHMessage.VE_JHMessage_C.EVT_StartShow
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Msg                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVE_JHMessage_C::EVT_StartShow(const class FText& Msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_JHMessage_C", "EVT_StartShow");

	Params::VE_JHMessage_C_EVT_StartShow Parms{};

	Parms.Msg = std::move(Msg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_JHMessage.VE_JHMessage_C.SequenceEvent_1
// (BlueprintCallable, BlueprintEvent)

void UVE_JHMessage_C::SequenceEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_JHMessage_C", "SequenceEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_JHMessage.VE_JHMessage_C.SequenceEvent__ENTRYPOINTVE_JHMessage_0
// (Public, BlueprintCallable, BlueprintEvent)

void UVE_JHMessage_C::SequenceEvent__ENTRYPOINTVE_JHMessage_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_JHMessage_C", "SequenceEvent__ENTRYPOINTVE_JHMessage_0");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
