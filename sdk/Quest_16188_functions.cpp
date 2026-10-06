#pragma once



// Package: Quest_16188

#include "Basic.hpp"

#include "Quest_16188_classes.hpp"
#include "Quest_16188_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16188.Quest_16188_C.ExecuteUbergraph_Quest_16188
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16188_C::ExecuteUbergraph_Quest_16188(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16188_C", "ExecuteUbergraph_Quest_16188");

	Params::Quest_16188_C_ExecuteUbergraph_Quest_16188 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16188.Quest_16188_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16188_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16188_C", "HandleFinishing");

	Params::Quest_16188_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16188.Quest_16188_C.OnFinished_5EEDF01C425CB45DB3DEE09222BA4D4C
// (BlueprintCallable, BlueprintEvent)

void UQuest_16188_C::OnFinished_5EEDF01C425CB45DB3DEE09222BA4D4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16188_C", "OnFinished_5EEDF01C425CB45DB3DEE09222BA4D4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16188.Quest_16188_C.OnStop_5EEDF01C425CB45DB3DEE09222BA4D4C
// (BlueprintCallable, BlueprintEvent)

void UQuest_16188_C::OnStop_5EEDF01C425CB45DB3DEE09222BA4D4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16188_C", "OnStop_5EEDF01C425CB45DB3DEE09222BA4D4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16188.Quest_16188_C.OnDlgClosed_6D91F89A4FD544962A4C92B3A54C4C11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16188_C::OnDlgClosed_6D91F89A4FD544962A4C92B3A54C4C11(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16188_C", "OnDlgClosed_6D91F89A4FD544962A4C92B3A54C4C11");

	Params::Quest_16188_C_OnDlgClosed_6D91F89A4FD544962A4C92B3A54C4C11 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16188.Quest_16188_C.OnDlgSelectedOption_6D91F89A4FD544962A4C92B3A54C4C11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16188_C::OnDlgSelectedOption_6D91F89A4FD544962A4C92B3A54C4C11(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16188_C", "OnDlgSelectedOption_6D91F89A4FD544962A4C92B3A54C4C11");

	Params::Quest_16188_C_OnDlgSelectedOption_6D91F89A4FD544962A4C92B3A54C4C11 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
