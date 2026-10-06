#pragma once



// Package: Quest_30408

#include "Basic.hpp"

#include "Quest_30408_classes.hpp"
#include "Quest_30408_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30408.Quest_30408_C.ExecuteUbergraph_Quest_30408
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30408_C::ExecuteUbergraph_Quest_30408(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30408_C", "ExecuteUbergraph_Quest_30408");

	Params::Quest_30408_C_ExecuteUbergraph_Quest_30408 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30408.Quest_30408_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30408_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30408_C", "HandleFinishing");

	Params::Quest_30408_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30408.Quest_30408_C.OnFinished_31FA3DF3485A1E8CE9B00BB20FE04F79
// (BlueprintCallable, BlueprintEvent)

void UQuest_30408_C::OnFinished_31FA3DF3485A1E8CE9B00BB20FE04F79()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30408_C", "OnFinished_31FA3DF3485A1E8CE9B00BB20FE04F79");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30408.Quest_30408_C.OnStop_31FA3DF3485A1E8CE9B00BB20FE04F79
// (BlueprintCallable, BlueprintEvent)

void UQuest_30408_C::OnStop_31FA3DF3485A1E8CE9B00BB20FE04F79()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30408_C", "OnStop_31FA3DF3485A1E8CE9B00BB20FE04F79");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30408.Quest_30408_C.OnDlgClosed_2BD4751947D2A0C41C4FB088F20C0122
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30408_C::OnDlgClosed_2BD4751947D2A0C41C4FB088F20C0122(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30408_C", "OnDlgClosed_2BD4751947D2A0C41C4FB088F20C0122");

	Params::Quest_30408_C_OnDlgClosed_2BD4751947D2A0C41C4FB088F20C0122 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30408.Quest_30408_C.OnDlgSelectedOption_2BD4751947D2A0C41C4FB088F20C0122
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30408_C::OnDlgSelectedOption_2BD4751947D2A0C41C4FB088F20C0122(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30408_C", "OnDlgSelectedOption_2BD4751947D2A0C41C4FB088F20C0122");

	Params::Quest_30408_C_OnDlgSelectedOption_2BD4751947D2A0C41C4FB088F20C0122 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
