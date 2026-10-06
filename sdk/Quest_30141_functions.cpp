#pragma once



// Package: Quest_30141

#include "Basic.hpp"

#include "Quest_30141_classes.hpp"
#include "Quest_30141_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30141.Quest_30141_C.ExecuteUbergraph_Quest_30141
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30141_C::ExecuteUbergraph_Quest_30141(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30141_C", "ExecuteUbergraph_Quest_30141");

	Params::Quest_30141_C_ExecuteUbergraph_Quest_30141 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30141.Quest_30141_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30141_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30141_C", "HandleFinishing");

	Params::Quest_30141_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30141.Quest_30141_C.OnFinished_89621608486A230E77BBC789436D8CFD
// (BlueprintCallable, BlueprintEvent)

void UQuest_30141_C::OnFinished_89621608486A230E77BBC789436D8CFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30141_C", "OnFinished_89621608486A230E77BBC789436D8CFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30141.Quest_30141_C.OnStop_89621608486A230E77BBC789436D8CFD
// (BlueprintCallable, BlueprintEvent)

void UQuest_30141_C::OnStop_89621608486A230E77BBC789436D8CFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30141_C", "OnStop_89621608486A230E77BBC789436D8CFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30141.Quest_30141_C.OnDlgClosed_5DAEA39144790631463D6C9F9368B4C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30141_C::OnDlgClosed_5DAEA39144790631463D6C9F9368B4C2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30141_C", "OnDlgClosed_5DAEA39144790631463D6C9F9368B4C2");

	Params::Quest_30141_C_OnDlgClosed_5DAEA39144790631463D6C9F9368B4C2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30141.Quest_30141_C.OnDlgSelectedOption_5DAEA39144790631463D6C9F9368B4C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30141_C::OnDlgSelectedOption_5DAEA39144790631463D6C9F9368B4C2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30141_C", "OnDlgSelectedOption_5DAEA39144790631463D6C9F9368B4C2");

	Params::Quest_30141_C_OnDlgSelectedOption_5DAEA39144790631463D6C9F9368B4C2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
