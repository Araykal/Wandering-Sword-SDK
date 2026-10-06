#pragma once



// Package: Quest_29022

#include "Basic.hpp"

#include "Quest_29022_classes.hpp"
#include "Quest_29022_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29022.Quest_29022_C.ExecuteUbergraph_Quest_29022
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29022_C::ExecuteUbergraph_Quest_29022(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29022_C", "ExecuteUbergraph_Quest_29022");

	Params::Quest_29022_C_ExecuteUbergraph_Quest_29022 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29022.Quest_29022_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29022_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29022_C", "HandleFinishing");

	Params::Quest_29022_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29022.Quest_29022_C.OnDlgClosed_7325BD274C240CA6CD096A91A2D0B8E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29022_C::OnDlgClosed_7325BD274C240CA6CD096A91A2D0B8E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29022_C", "OnDlgClosed_7325BD274C240CA6CD096A91A2D0B8E9");

	Params::Quest_29022_C_OnDlgClosed_7325BD274C240CA6CD096A91A2D0B8E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29022.Quest_29022_C.OnDlgSelectedOption_7325BD274C240CA6CD096A91A2D0B8E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29022_C::OnDlgSelectedOption_7325BD274C240CA6CD096A91A2D0B8E9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29022_C", "OnDlgSelectedOption_7325BD274C240CA6CD096A91A2D0B8E9");

	Params::Quest_29022_C_OnDlgSelectedOption_7325BD274C240CA6CD096A91A2D0B8E9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29022.Quest_29022_C.OnFinished_D10B601444E34126A58E5EA8BE755F91
// (BlueprintCallable, BlueprintEvent)

void UQuest_29022_C::OnFinished_D10B601444E34126A58E5EA8BE755F91()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29022_C", "OnFinished_D10B601444E34126A58E5EA8BE755F91");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29022.Quest_29022_C.OnStop_D10B601444E34126A58E5EA8BE755F91
// (BlueprintCallable, BlueprintEvent)

void UQuest_29022_C::OnStop_D10B601444E34126A58E5EA8BE755F91()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29022_C", "OnStop_D10B601444E34126A58E5EA8BE755F91");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
