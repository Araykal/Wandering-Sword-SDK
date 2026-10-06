#pragma once



// Package: Quest_30728

#include "Basic.hpp"

#include "Quest_30728_classes.hpp"
#include "Quest_30728_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30728.Quest_30728_C.ExecuteUbergraph_Quest_30728
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30728_C::ExecuteUbergraph_Quest_30728(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30728_C", "ExecuteUbergraph_Quest_30728");

	Params::Quest_30728_C_ExecuteUbergraph_Quest_30728 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30728.Quest_30728_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30728_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30728_C", "HandleFinishing");

	Params::Quest_30728_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30728.Quest_30728_C.OnSuccess_1B7755944378854192CE74B9648644DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_30728_C::OnSuccess_1B7755944378854192CE74B9648644DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30728_C", "OnSuccess_1B7755944378854192CE74B9648644DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30728.Quest_30728_C.OnFinished_561009164F80E899A5DAC185FAC341CC
// (BlueprintCallable, BlueprintEvent)

void UQuest_30728_C::OnFinished_561009164F80E899A5DAC185FAC341CC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30728_C", "OnFinished_561009164F80E899A5DAC185FAC341CC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30728.Quest_30728_C.OnStop_561009164F80E899A5DAC185FAC341CC
// (BlueprintCallable, BlueprintEvent)

void UQuest_30728_C::OnStop_561009164F80E899A5DAC185FAC341CC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30728_C", "OnStop_561009164F80E899A5DAC185FAC341CC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30728.Quest_30728_C.OnDlgClosed_35D09ED2421BFF6B3825E9AFAB838997
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30728_C::OnDlgClosed_35D09ED2421BFF6B3825E9AFAB838997(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30728_C", "OnDlgClosed_35D09ED2421BFF6B3825E9AFAB838997");

	Params::Quest_30728_C_OnDlgClosed_35D09ED2421BFF6B3825E9AFAB838997 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30728.Quest_30728_C.OnDlgSelectedOption_35D09ED2421BFF6B3825E9AFAB838997
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30728_C::OnDlgSelectedOption_35D09ED2421BFF6B3825E9AFAB838997(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30728_C", "OnDlgSelectedOption_35D09ED2421BFF6B3825E9AFAB838997");

	Params::Quest_30728_C_OnDlgSelectedOption_35D09ED2421BFF6B3825E9AFAB838997 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
