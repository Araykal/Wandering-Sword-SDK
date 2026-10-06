#pragma once



// Package: Quest_28283

#include "Basic.hpp"

#include "Quest_28283_classes.hpp"
#include "Quest_28283_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28283.Quest_28283_C.ExecuteUbergraph_Quest_28283
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28283_C::ExecuteUbergraph_Quest_28283(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28283_C", "ExecuteUbergraph_Quest_28283");

	Params::Quest_28283_C_ExecuteUbergraph_Quest_28283 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28283.Quest_28283_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28283_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28283_C", "HandleFinishing");

	Params::Quest_28283_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28283.Quest_28283_C.OnFinished_66B9D41748D716CED72F64A05F0485E6
// (BlueprintCallable, BlueprintEvent)

void UQuest_28283_C::OnFinished_66B9D41748D716CED72F64A05F0485E6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28283_C", "OnFinished_66B9D41748D716CED72F64A05F0485E6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28283.Quest_28283_C.OnStop_66B9D41748D716CED72F64A05F0485E6
// (BlueprintCallable, BlueprintEvent)

void UQuest_28283_C::OnStop_66B9D41748D716CED72F64A05F0485E6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28283_C", "OnStop_66B9D41748D716CED72F64A05F0485E6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28283.Quest_28283_C.OnDlgClosed_BE12A5BE402CFF4188BBA3B3726D2760
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28283_C::OnDlgClosed_BE12A5BE402CFF4188BBA3B3726D2760(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28283_C", "OnDlgClosed_BE12A5BE402CFF4188BBA3B3726D2760");

	Params::Quest_28283_C_OnDlgClosed_BE12A5BE402CFF4188BBA3B3726D2760 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28283.Quest_28283_C.OnDlgSelectedOption_BE12A5BE402CFF4188BBA3B3726D2760
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28283_C::OnDlgSelectedOption_BE12A5BE402CFF4188BBA3B3726D2760(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28283_C", "OnDlgSelectedOption_BE12A5BE402CFF4188BBA3B3726D2760");

	Params::Quest_28283_C_OnDlgSelectedOption_BE12A5BE402CFF4188BBA3B3726D2760 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
