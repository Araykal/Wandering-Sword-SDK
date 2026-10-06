#pragma once



// Package: Quest_12524

#include "Basic.hpp"

#include "Quest_12524_classes.hpp"
#include "Quest_12524_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12524.Quest_12524_C.ExecuteUbergraph_Quest_12524
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12524_C::ExecuteUbergraph_Quest_12524(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12524_C", "ExecuteUbergraph_Quest_12524");

	Params::Quest_12524_C_ExecuteUbergraph_Quest_12524 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12524.Quest_12524_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12524_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12524_C", "HandleFinishing");

	Params::Quest_12524_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12524.Quest_12524_C.OnFinished_D496F3DA422F991E3942BAA90AC6EFC7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12524_C::OnFinished_D496F3DA422F991E3942BAA90AC6EFC7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12524_C", "OnFinished_D496F3DA422F991E3942BAA90AC6EFC7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12524.Quest_12524_C.OnStop_D496F3DA422F991E3942BAA90AC6EFC7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12524_C::OnStop_D496F3DA422F991E3942BAA90AC6EFC7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12524_C", "OnStop_D496F3DA422F991E3942BAA90AC6EFC7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12524.Quest_12524_C.OnDlgClosed_9FF55122463C46ACFD70F4849F25B3B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12524_C::OnDlgClosed_9FF55122463C46ACFD70F4849F25B3B6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12524_C", "OnDlgClosed_9FF55122463C46ACFD70F4849F25B3B6");

	Params::Quest_12524_C_OnDlgClosed_9FF55122463C46ACFD70F4849F25B3B6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12524.Quest_12524_C.OnDlgSelectedOption_9FF55122463C46ACFD70F4849F25B3B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12524_C::OnDlgSelectedOption_9FF55122463C46ACFD70F4849F25B3B6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12524_C", "OnDlgSelectedOption_9FF55122463C46ACFD70F4849F25B3B6");

	Params::Quest_12524_C_OnDlgSelectedOption_9FF55122463C46ACFD70F4849F25B3B6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12524.Quest_12524_C.OnSuccess_B53C371B453121EC427043AE7F96EC08
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12524_C::OnSuccess_B53C371B453121EC427043AE7F96EC08(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12524_C", "OnSuccess_B53C371B453121EC427043AE7F96EC08");

	Params::Quest_12524_C_OnSuccess_B53C371B453121EC427043AE7F96EC08 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
