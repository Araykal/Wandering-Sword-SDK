#pragma once



// Package: Quest_11457

#include "Basic.hpp"

#include "Quest_11457_classes.hpp"
#include "Quest_11457_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11457.Quest_11457_C.ExecuteUbergraph_Quest_11457
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11457_C::ExecuteUbergraph_Quest_11457(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11457_C", "ExecuteUbergraph_Quest_11457");

	Params::Quest_11457_C_ExecuteUbergraph_Quest_11457 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11457.Quest_11457_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11457_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11457_C", "HandleFinishing");

	Params::Quest_11457_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11457.Quest_11457_C.OnFinished_480DDEAD4C31D696B820F8925082BF40
// (BlueprintCallable, BlueprintEvent)

void UQuest_11457_C::OnFinished_480DDEAD4C31D696B820F8925082BF40()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11457_C", "OnFinished_480DDEAD4C31D696B820F8925082BF40");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11457.Quest_11457_C.OnStop_480DDEAD4C31D696B820F8925082BF40
// (BlueprintCallable, BlueprintEvent)

void UQuest_11457_C::OnStop_480DDEAD4C31D696B820F8925082BF40()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11457_C", "OnStop_480DDEAD4C31D696B820F8925082BF40");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11457.Quest_11457_C.OnDlgClosed_49E948724EA66008AD5C10A5EC6BBA32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11457_C::OnDlgClosed_49E948724EA66008AD5C10A5EC6BBA32(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11457_C", "OnDlgClosed_49E948724EA66008AD5C10A5EC6BBA32");

	Params::Quest_11457_C_OnDlgClosed_49E948724EA66008AD5C10A5EC6BBA32 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11457.Quest_11457_C.OnDlgSelectedOption_49E948724EA66008AD5C10A5EC6BBA32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11457_C::OnDlgSelectedOption_49E948724EA66008AD5C10A5EC6BBA32(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11457_C", "OnDlgSelectedOption_49E948724EA66008AD5C10A5EC6BBA32");

	Params::Quest_11457_C_OnDlgSelectedOption_49E948724EA66008AD5C10A5EC6BBA32 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11457.Quest_11457_C.OnSuccess_99DE3B6645560FA4752CEBB48C6BDF17
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11457_C::OnSuccess_99DE3B6645560FA4752CEBB48C6BDF17(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11457_C", "OnSuccess_99DE3B6645560FA4752CEBB48C6BDF17");

	Params::Quest_11457_C_OnSuccess_99DE3B6645560FA4752CEBB48C6BDF17 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
