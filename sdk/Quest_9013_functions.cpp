#pragma once



// Package: Quest_9013

#include "Basic.hpp"

#include "Quest_9013_classes.hpp"
#include "Quest_9013_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_9013.Quest_9013_C.ExecuteUbergraph_Quest_9013
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9013_C::ExecuteUbergraph_Quest_9013(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "ExecuteUbergraph_Quest_9013");

	Params::Quest_9013_C_ExecuteUbergraph_Quest_9013 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9013.Quest_9013_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9013_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "HandleFinishing");

	Params::Quest_9013_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9013.Quest_9013_C.OnSuccess_C62A352E460294ED128FB6943DEFB096
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_9013_C::OnSuccess_C62A352E460294ED128FB6943DEFB096(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnSuccess_C62A352E460294ED128FB6943DEFB096");

	Params::Quest_9013_C_OnSuccess_C62A352E460294ED128FB6943DEFB096 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9013.Quest_9013_C.OnSuccess_DE36B4D34964457C44F2D485FB991F58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_9013_C::OnSuccess_DE36B4D34964457C44F2D485FB991F58(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnSuccess_DE36B4D34964457C44F2D485FB991F58");

	Params::Quest_9013_C_OnSuccess_DE36B4D34964457C44F2D485FB991F58 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9013.Quest_9013_C.OnSuccess_6AC3120649D6328758FBB4BBCA35FB57
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_9013_C::OnSuccess_6AC3120649D6328758FBB4BBCA35FB57(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnSuccess_6AC3120649D6328758FBB4BBCA35FB57");

	Params::Quest_9013_C_OnSuccess_6AC3120649D6328758FBB4BBCA35FB57 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9013.Quest_9013_C.OnFinished_48CB09F44AEC5E4CAA2832A3C9F8A6C3
// (BlueprintCallable, BlueprintEvent)

void UQuest_9013_C::OnFinished_48CB09F44AEC5E4CAA2832A3C9F8A6C3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnFinished_48CB09F44AEC5E4CAA2832A3C9F8A6C3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_9013.Quest_9013_C.OnStop_48CB09F44AEC5E4CAA2832A3C9F8A6C3
// (BlueprintCallable, BlueprintEvent)

void UQuest_9013_C::OnStop_48CB09F44AEC5E4CAA2832A3C9F8A6C3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnStop_48CB09F44AEC5E4CAA2832A3C9F8A6C3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_9013.Quest_9013_C.OnDlgClosed_E4791E944F9C332AA96E6B895ECE9082
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9013_C::OnDlgClosed_E4791E944F9C332AA96E6B895ECE9082(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnDlgClosed_E4791E944F9C332AA96E6B895ECE9082");

	Params::Quest_9013_C_OnDlgClosed_E4791E944F9C332AA96E6B895ECE9082 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9013.Quest_9013_C.OnDlgSelectedOption_E4791E944F9C332AA96E6B895ECE9082
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9013_C::OnDlgSelectedOption_E4791E944F9C332AA96E6B895ECE9082(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnDlgSelectedOption_E4791E944F9C332AA96E6B895ECE9082");

	Params::Quest_9013_C_OnDlgSelectedOption_E4791E944F9C332AA96E6B895ECE9082 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9013.Quest_9013_C.OnSuccess_D819DBC74BE3B7B579AC6F852729F098
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_9013_C::OnSuccess_D819DBC74BE3B7B579AC6F852729F098(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9013_C", "OnSuccess_D819DBC74BE3B7B579AC6F852729F098");

	Params::Quest_9013_C_OnSuccess_D819DBC74BE3B7B579AC6F852729F098 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
