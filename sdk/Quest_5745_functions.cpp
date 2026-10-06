#pragma once



// Package: Quest_5745

#include "Basic.hpp"

#include "Quest_5745_classes.hpp"
#include "Quest_5745_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5745.Quest_5745_C.ExecuteUbergraph_Quest_5745
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5745_C::ExecuteUbergraph_Quest_5745(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "ExecuteUbergraph_Quest_5745");

	Params::Quest_5745_C_ExecuteUbergraph_Quest_5745 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5745.Quest_5745_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5745_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "HandleFinishing");

	Params::Quest_5745_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5745.Quest_5745_C.OnSuccess_9A0C2ADC4A7D51D4E11B0DB2B614D104
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5745_C::OnSuccess_9A0C2ADC4A7D51D4E11B0DB2B614D104(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "OnSuccess_9A0C2ADC4A7D51D4E11B0DB2B614D104");

	Params::Quest_5745_C_OnSuccess_9A0C2ADC4A7D51D4E11B0DB2B614D104 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5745.Quest_5745_C.OnFinished_C4805974429867F9B1FCF8B2DF0C1639
// (BlueprintCallable, BlueprintEvent)

void UQuest_5745_C::OnFinished_C4805974429867F9B1FCF8B2DF0C1639()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "OnFinished_C4805974429867F9B1FCF8B2DF0C1639");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5745.Quest_5745_C.OnStop_C4805974429867F9B1FCF8B2DF0C1639
// (BlueprintCallable, BlueprintEvent)

void UQuest_5745_C::OnStop_C4805974429867F9B1FCF8B2DF0C1639()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "OnStop_C4805974429867F9B1FCF8B2DF0C1639");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5745.Quest_5745_C.OnDlgClosed_A859960448BAD3787F8A5DB7F163BF78
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5745_C::OnDlgClosed_A859960448BAD3787F8A5DB7F163BF78(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "OnDlgClosed_A859960448BAD3787F8A5DB7F163BF78");

	Params::Quest_5745_C_OnDlgClosed_A859960448BAD3787F8A5DB7F163BF78 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5745.Quest_5745_C.OnDlgSelectedOption_A859960448BAD3787F8A5DB7F163BF78
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5745_C::OnDlgSelectedOption_A859960448BAD3787F8A5DB7F163BF78(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "OnDlgSelectedOption_A859960448BAD3787F8A5DB7F163BF78");

	Params::Quest_5745_C_OnDlgSelectedOption_A859960448BAD3787F8A5DB7F163BF78 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5745.Quest_5745_C.OnSuccess_E0C30EA341852912D572B98E5B86E7B3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5745_C::OnSuccess_E0C30EA341852912D572B98E5B86E7B3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5745_C", "OnSuccess_E0C30EA341852912D572B98E5B86E7B3");

	Params::Quest_5745_C_OnSuccess_E0C30EA341852912D572B98E5B86E7B3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
