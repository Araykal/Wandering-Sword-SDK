#pragma once



// Package: Quest_11292

#include "Basic.hpp"

#include "Quest_11292_classes.hpp"
#include "Quest_11292_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11292.Quest_11292_C.ExecuteUbergraph_Quest_11292
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11292_C::ExecuteUbergraph_Quest_11292(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11292_C", "ExecuteUbergraph_Quest_11292");

	Params::Quest_11292_C_ExecuteUbergraph_Quest_11292 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11292.Quest_11292_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11292_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11292_C", "HandleFinishing");

	Params::Quest_11292_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11292.Quest_11292_C.OnFinished_5F1711F446F35FB8B3157C93DEECEBA6
// (BlueprintCallable, BlueprintEvent)

void UQuest_11292_C::OnFinished_5F1711F446F35FB8B3157C93DEECEBA6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11292_C", "OnFinished_5F1711F446F35FB8B3157C93DEECEBA6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11292.Quest_11292_C.OnStop_5F1711F446F35FB8B3157C93DEECEBA6
// (BlueprintCallable, BlueprintEvent)

void UQuest_11292_C::OnStop_5F1711F446F35FB8B3157C93DEECEBA6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11292_C", "OnStop_5F1711F446F35FB8B3157C93DEECEBA6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11292.Quest_11292_C.OnDlgClosed_3FC18E9C4B27B640EA383ABF5DD79133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11292_C::OnDlgClosed_3FC18E9C4B27B640EA383ABF5DD79133(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11292_C", "OnDlgClosed_3FC18E9C4B27B640EA383ABF5DD79133");

	Params::Quest_11292_C_OnDlgClosed_3FC18E9C4B27B640EA383ABF5DD79133 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11292.Quest_11292_C.OnDlgSelectedOption_3FC18E9C4B27B640EA383ABF5DD79133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11292_C::OnDlgSelectedOption_3FC18E9C4B27B640EA383ABF5DD79133(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11292_C", "OnDlgSelectedOption_3FC18E9C4B27B640EA383ABF5DD79133");

	Params::Quest_11292_C_OnDlgSelectedOption_3FC18E9C4B27B640EA383ABF5DD79133 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11292.Quest_11292_C.OnSuccess_15A095C749270199537205BA9E016265
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11292_C::OnSuccess_15A095C749270199537205BA9E016265(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11292_C", "OnSuccess_15A095C749270199537205BA9E016265");

	Params::Quest_11292_C_OnSuccess_15A095C749270199537205BA9E016265 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
