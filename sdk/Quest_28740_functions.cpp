#pragma once



// Package: Quest_28740

#include "Basic.hpp"

#include "Quest_28740_classes.hpp"
#include "Quest_28740_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28740.Quest_28740_C.ExecuteUbergraph_Quest_28740
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28740_C::ExecuteUbergraph_Quest_28740(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "ExecuteUbergraph_Quest_28740");

	Params::Quest_28740_C_ExecuteUbergraph_Quest_28740 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28740.Quest_28740_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28740_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "HandleFinishing");

	Params::Quest_28740_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28740.Quest_28740_C.OnSuccess_EABA51C34025FE84153DC3ADBBC5864B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28740_C::OnSuccess_EABA51C34025FE84153DC3ADBBC5864B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "OnSuccess_EABA51C34025FE84153DC3ADBBC5864B");

	Params::Quest_28740_C_OnSuccess_EABA51C34025FE84153DC3ADBBC5864B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28740.Quest_28740_C.OnFinished_57EE0EC6475B508E1006AFBE3B16546C
// (BlueprintCallable, BlueprintEvent)

void UQuest_28740_C::OnFinished_57EE0EC6475B508E1006AFBE3B16546C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "OnFinished_57EE0EC6475B508E1006AFBE3B16546C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28740.Quest_28740_C.OnStop_57EE0EC6475B508E1006AFBE3B16546C
// (BlueprintCallable, BlueprintEvent)

void UQuest_28740_C::OnStop_57EE0EC6475B508E1006AFBE3B16546C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "OnStop_57EE0EC6475B508E1006AFBE3B16546C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28740.Quest_28740_C.OnDlgClosed_8449E667493C8CFB6F92C7AB0EE70DA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28740_C::OnDlgClosed_8449E667493C8CFB6F92C7AB0EE70DA6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "OnDlgClosed_8449E667493C8CFB6F92C7AB0EE70DA6");

	Params::Quest_28740_C_OnDlgClosed_8449E667493C8CFB6F92C7AB0EE70DA6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28740.Quest_28740_C.OnDlgSelectedOption_8449E667493C8CFB6F92C7AB0EE70DA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28740_C::OnDlgSelectedOption_8449E667493C8CFB6F92C7AB0EE70DA6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "OnDlgSelectedOption_8449E667493C8CFB6F92C7AB0EE70DA6");

	Params::Quest_28740_C_OnDlgSelectedOption_8449E667493C8CFB6F92C7AB0EE70DA6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28740.Quest_28740_C.OnSuccess_A912F1B449270D0AAF98D5AEBF62F8F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28740_C::OnSuccess_A912F1B449270D0AAF98D5AEBF62F8F5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28740_C", "OnSuccess_A912F1B449270D0AAF98D5AEBF62F8F5");

	Params::Quest_28740_C_OnSuccess_A912F1B449270D0AAF98D5AEBF62F8F5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
