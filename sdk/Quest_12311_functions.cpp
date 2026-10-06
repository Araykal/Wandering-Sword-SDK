#pragma once



// Package: Quest_12311

#include "Basic.hpp"

#include "Quest_12311_classes.hpp"
#include "Quest_12311_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12311.Quest_12311_C.ExecuteUbergraph_Quest_12311
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12311_C::ExecuteUbergraph_Quest_12311(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12311_C", "ExecuteUbergraph_Quest_12311");

	Params::Quest_12311_C_ExecuteUbergraph_Quest_12311 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12311.Quest_12311_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12311_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12311_C", "HandleFinishing");

	Params::Quest_12311_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12311.Quest_12311_C.OnFinished_DC869FCA4DF31CAFCD1C808AA00821C4
// (BlueprintCallable, BlueprintEvent)

void UQuest_12311_C::OnFinished_DC869FCA4DF31CAFCD1C808AA00821C4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12311_C", "OnFinished_DC869FCA4DF31CAFCD1C808AA00821C4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12311.Quest_12311_C.OnStop_DC869FCA4DF31CAFCD1C808AA00821C4
// (BlueprintCallable, BlueprintEvent)

void UQuest_12311_C::OnStop_DC869FCA4DF31CAFCD1C808AA00821C4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12311_C", "OnStop_DC869FCA4DF31CAFCD1C808AA00821C4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12311.Quest_12311_C.OnDlgClosed_1163215E4935357F31DA45911BA03FC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12311_C::OnDlgClosed_1163215E4935357F31DA45911BA03FC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12311_C", "OnDlgClosed_1163215E4935357F31DA45911BA03FC7");

	Params::Quest_12311_C_OnDlgClosed_1163215E4935357F31DA45911BA03FC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12311.Quest_12311_C.OnDlgSelectedOption_1163215E4935357F31DA45911BA03FC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12311_C::OnDlgSelectedOption_1163215E4935357F31DA45911BA03FC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12311_C", "OnDlgSelectedOption_1163215E4935357F31DA45911BA03FC7");

	Params::Quest_12311_C_OnDlgSelectedOption_1163215E4935357F31DA45911BA03FC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12311.Quest_12311_C.OnSuccess_676D9482437A052BCFDDB9A35B8DB664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12311_C::OnSuccess_676D9482437A052BCFDDB9A35B8DB664(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12311_C", "OnSuccess_676D9482437A052BCFDDB9A35B8DB664");

	Params::Quest_12311_C_OnSuccess_676D9482437A052BCFDDB9A35B8DB664 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
