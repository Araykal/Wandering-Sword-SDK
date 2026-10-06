#pragma once



// Package: Quest_16512

#include "Basic.hpp"

#include "Quest_16512_classes.hpp"
#include "Quest_16512_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16512.Quest_16512_C.ExecuteUbergraph_Quest_16512
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16512_C::ExecuteUbergraph_Quest_16512(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16512_C", "ExecuteUbergraph_Quest_16512");

	Params::Quest_16512_C_ExecuteUbergraph_Quest_16512 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16512.Quest_16512_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16512_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16512_C", "HandleFinishing");

	Params::Quest_16512_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16512.Quest_16512_C.OnFinished_15B679B5430916A7588C27897CAB372E
// (BlueprintCallable, BlueprintEvent)

void UQuest_16512_C::OnFinished_15B679B5430916A7588C27897CAB372E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16512_C", "OnFinished_15B679B5430916A7588C27897CAB372E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16512.Quest_16512_C.OnStop_15B679B5430916A7588C27897CAB372E
// (BlueprintCallable, BlueprintEvent)

void UQuest_16512_C::OnStop_15B679B5430916A7588C27897CAB372E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16512_C", "OnStop_15B679B5430916A7588C27897CAB372E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16512.Quest_16512_C.OnDlgClosed_A71C64FA4C25E13D7D4250BB98F4F116
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16512_C::OnDlgClosed_A71C64FA4C25E13D7D4250BB98F4F116(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16512_C", "OnDlgClosed_A71C64FA4C25E13D7D4250BB98F4F116");

	Params::Quest_16512_C_OnDlgClosed_A71C64FA4C25E13D7D4250BB98F4F116 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16512.Quest_16512_C.OnDlgSelectedOption_A71C64FA4C25E13D7D4250BB98F4F116
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16512_C::OnDlgSelectedOption_A71C64FA4C25E13D7D4250BB98F4F116(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16512_C", "OnDlgSelectedOption_A71C64FA4C25E13D7D4250BB98F4F116");

	Params::Quest_16512_C_OnDlgSelectedOption_A71C64FA4C25E13D7D4250BB98F4F116 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16512.Quest_16512_C.OnSuccess_F7ABB5EB4FCF7755BEA7F9858F1A9077
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16512_C::OnSuccess_F7ABB5EB4FCF7755BEA7F9858F1A9077(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16512_C", "OnSuccess_F7ABB5EB4FCF7755BEA7F9858F1A9077");

	Params::Quest_16512_C_OnSuccess_F7ABB5EB4FCF7755BEA7F9858F1A9077 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
