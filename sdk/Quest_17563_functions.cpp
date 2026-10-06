#pragma once



// Package: Quest_17563

#include "Basic.hpp"

#include "Quest_17563_classes.hpp"
#include "Quest_17563_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_17563.Quest_17563_C.ExecuteUbergraph_Quest_17563
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17563_C::ExecuteUbergraph_Quest_17563(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17563_C", "ExecuteUbergraph_Quest_17563");

	Params::Quest_17563_C_ExecuteUbergraph_Quest_17563 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17563.Quest_17563_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17563_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17563_C", "HandleFinishing");

	Params::Quest_17563_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17563.Quest_17563_C.OnFinished_EBD9FFBA4D54B29A9E7A93A0FDB516A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_17563_C::OnFinished_EBD9FFBA4D54B29A9E7A93A0FDB516A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17563_C", "OnFinished_EBD9FFBA4D54B29A9E7A93A0FDB516A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17563.Quest_17563_C.OnStop_EBD9FFBA4D54B29A9E7A93A0FDB516A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_17563_C::OnStop_EBD9FFBA4D54B29A9E7A93A0FDB516A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17563_C", "OnStop_EBD9FFBA4D54B29A9E7A93A0FDB516A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17563.Quest_17563_C.OnDlgClosed_A595EE6A4D2A6836A5B279821E0BDC2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17563_C::OnDlgClosed_A595EE6A4D2A6836A5B279821E0BDC2E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17563_C", "OnDlgClosed_A595EE6A4D2A6836A5B279821E0BDC2E");

	Params::Quest_17563_C_OnDlgClosed_A595EE6A4D2A6836A5B279821E0BDC2E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17563.Quest_17563_C.OnDlgSelectedOption_A595EE6A4D2A6836A5B279821E0BDC2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17563_C::OnDlgSelectedOption_A595EE6A4D2A6836A5B279821E0BDC2E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17563_C", "OnDlgSelectedOption_A595EE6A4D2A6836A5B279821E0BDC2E");

	Params::Quest_17563_C_OnDlgSelectedOption_A595EE6A4D2A6836A5B279821E0BDC2E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17563.Quest_17563_C.OnSuccess_8EEBBC684494F1F8D650DA8C619E66DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_17563_C::OnSuccess_8EEBBC684494F1F8D650DA8C619E66DD(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17563_C", "OnSuccess_8EEBBC684494F1F8D650DA8C619E66DD");

	Params::Quest_17563_C_OnSuccess_8EEBBC684494F1F8D650DA8C619E66DD Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
