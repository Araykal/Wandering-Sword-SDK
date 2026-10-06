#pragma once



// Package: Quest_28934

#include "Basic.hpp"

#include "Quest_28934_classes.hpp"
#include "Quest_28934_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28934.Quest_28934_C.ExecuteUbergraph_Quest_28934
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28934_C::ExecuteUbergraph_Quest_28934(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "ExecuteUbergraph_Quest_28934");

	Params::Quest_28934_C_ExecuteUbergraph_Quest_28934 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28934.Quest_28934_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28934_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "HandleFinishing");

	Params::Quest_28934_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28934.Quest_28934_C.OnSuccess_1C76A1644A1022F43CDA09B26824559A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28934_C::OnSuccess_1C76A1644A1022F43CDA09B26824559A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnSuccess_1C76A1644A1022F43CDA09B26824559A");

	Params::Quest_28934_C_OnSuccess_1C76A1644A1022F43CDA09B26824559A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28934.Quest_28934_C.OnSuccess_88F6064944B891C88E098B81CB262B54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28934_C::OnSuccess_88F6064944B891C88E098B81CB262B54(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnSuccess_88F6064944B891C88E098B81CB262B54");

	Params::Quest_28934_C_OnSuccess_88F6064944B891C88E098B81CB262B54 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28934.Quest_28934_C.OnSuccess_F5CECE134EB4BF772E5B188152E5D27C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28934_C::OnSuccess_F5CECE134EB4BF772E5B188152E5D27C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnSuccess_F5CECE134EB4BF772E5B188152E5D27C");

	Params::Quest_28934_C_OnSuccess_F5CECE134EB4BF772E5B188152E5D27C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28934.Quest_28934_C.OnSuccess_53126DCF4887F4135A3159B2495D6194
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28934_C::OnSuccess_53126DCF4887F4135A3159B2495D6194(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnSuccess_53126DCF4887F4135A3159B2495D6194");

	Params::Quest_28934_C_OnSuccess_53126DCF4887F4135A3159B2495D6194 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28934.Quest_28934_C.OnFinished_2FB025FA47CB4F3A57C3B6BB5A1BA0DC
// (BlueprintCallable, BlueprintEvent)

void UQuest_28934_C::OnFinished_2FB025FA47CB4F3A57C3B6BB5A1BA0DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnFinished_2FB025FA47CB4F3A57C3B6BB5A1BA0DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28934.Quest_28934_C.OnStop_2FB025FA47CB4F3A57C3B6BB5A1BA0DC
// (BlueprintCallable, BlueprintEvent)

void UQuest_28934_C::OnStop_2FB025FA47CB4F3A57C3B6BB5A1BA0DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnStop_2FB025FA47CB4F3A57C3B6BB5A1BA0DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28934.Quest_28934_C.OnDlgClosed_8CA576BE4BE666C070EAB4A060E94516
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28934_C::OnDlgClosed_8CA576BE4BE666C070EAB4A060E94516(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnDlgClosed_8CA576BE4BE666C070EAB4A060E94516");

	Params::Quest_28934_C_OnDlgClosed_8CA576BE4BE666C070EAB4A060E94516 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28934.Quest_28934_C.OnDlgSelectedOption_8CA576BE4BE666C070EAB4A060E94516
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28934_C::OnDlgSelectedOption_8CA576BE4BE666C070EAB4A060E94516(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28934_C", "OnDlgSelectedOption_8CA576BE4BE666C070EAB4A060E94516");

	Params::Quest_28934_C_OnDlgSelectedOption_8CA576BE4BE666C070EAB4A060E94516 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
