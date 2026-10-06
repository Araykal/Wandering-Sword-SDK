#pragma once



// Package: Quest_30392

#include "Basic.hpp"

#include "Quest_30392_classes.hpp"
#include "Quest_30392_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30392.Quest_30392_C.ExecuteUbergraph_Quest_30392
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30392_C::ExecuteUbergraph_Quest_30392(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30392_C", "ExecuteUbergraph_Quest_30392");

	Params::Quest_30392_C_ExecuteUbergraph_Quest_30392 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30392.Quest_30392_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30392_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30392_C", "HandleFinishing");

	Params::Quest_30392_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30392.Quest_30392_C.OnSuccess_D28AF55F40DF7537D88077AF4E220C62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30392_C::OnSuccess_D28AF55F40DF7537D88077AF4E220C62(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30392_C", "OnSuccess_D28AF55F40DF7537D88077AF4E220C62");

	Params::Quest_30392_C_OnSuccess_D28AF55F40DF7537D88077AF4E220C62 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30392.Quest_30392_C.OnFinished_77AD447A4C6D2379D6304DB5C5418F21
// (BlueprintCallable, BlueprintEvent)

void UQuest_30392_C::OnFinished_77AD447A4C6D2379D6304DB5C5418F21()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30392_C", "OnFinished_77AD447A4C6D2379D6304DB5C5418F21");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30392.Quest_30392_C.OnStop_77AD447A4C6D2379D6304DB5C5418F21
// (BlueprintCallable, BlueprintEvent)

void UQuest_30392_C::OnStop_77AD447A4C6D2379D6304DB5C5418F21()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30392_C", "OnStop_77AD447A4C6D2379D6304DB5C5418F21");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30392.Quest_30392_C.OnDlgClosed_7561F82343D7DC647C98778BC39D9A14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30392_C::OnDlgClosed_7561F82343D7DC647C98778BC39D9A14(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30392_C", "OnDlgClosed_7561F82343D7DC647C98778BC39D9A14");

	Params::Quest_30392_C_OnDlgClosed_7561F82343D7DC647C98778BC39D9A14 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30392.Quest_30392_C.OnDlgSelectedOption_7561F82343D7DC647C98778BC39D9A14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30392_C::OnDlgSelectedOption_7561F82343D7DC647C98778BC39D9A14(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30392_C", "OnDlgSelectedOption_7561F82343D7DC647C98778BC39D9A14");

	Params::Quest_30392_C_OnDlgSelectedOption_7561F82343D7DC647C98778BC39D9A14 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
