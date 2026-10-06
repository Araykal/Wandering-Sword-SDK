#pragma once



// Package: Quest_30341

#include "Basic.hpp"

#include "Quest_30341_classes.hpp"
#include "Quest_30341_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30341.Quest_30341_C.ExecuteUbergraph_Quest_30341
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30341_C::ExecuteUbergraph_Quest_30341(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "ExecuteUbergraph_Quest_30341");

	Params::Quest_30341_C_ExecuteUbergraph_Quest_30341 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30341.Quest_30341_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30341_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "HandleFinishing");

	Params::Quest_30341_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30341.Quest_30341_C.OnSuccess_76A3B7C342748C062071748C45207BCC
// (BlueprintCallable, BlueprintEvent)

void UQuest_30341_C::OnSuccess_76A3B7C342748C062071748C45207BCC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "OnSuccess_76A3B7C342748C062071748C45207BCC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30341.Quest_30341_C.OnFinished_424731824FE7C4AE09CE61A2537E5BBF
// (BlueprintCallable, BlueprintEvent)

void UQuest_30341_C::OnFinished_424731824FE7C4AE09CE61A2537E5BBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "OnFinished_424731824FE7C4AE09CE61A2537E5BBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30341.Quest_30341_C.OnStop_424731824FE7C4AE09CE61A2537E5BBF
// (BlueprintCallable, BlueprintEvent)

void UQuest_30341_C::OnStop_424731824FE7C4AE09CE61A2537E5BBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "OnStop_424731824FE7C4AE09CE61A2537E5BBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30341.Quest_30341_C.OnDlgClosed_415477CE4A35C20BC26098A3B953ECA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30341_C::OnDlgClosed_415477CE4A35C20BC26098A3B953ECA7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "OnDlgClosed_415477CE4A35C20BC26098A3B953ECA7");

	Params::Quest_30341_C_OnDlgClosed_415477CE4A35C20BC26098A3B953ECA7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30341.Quest_30341_C.OnDlgSelectedOption_415477CE4A35C20BC26098A3B953ECA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30341_C::OnDlgSelectedOption_415477CE4A35C20BC26098A3B953ECA7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "OnDlgSelectedOption_415477CE4A35C20BC26098A3B953ECA7");

	Params::Quest_30341_C_OnDlgSelectedOption_415477CE4A35C20BC26098A3B953ECA7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30341.Quest_30341_C.He Jiu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Msg                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30341_C::He_Jiu(int32 NPCId, bool Msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30341_C", "He Jiu");

	Params::Quest_30341_C_He_Jiu Parms{};

	Parms.NPCId = NPCId;
	Parms.Msg = Msg;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
