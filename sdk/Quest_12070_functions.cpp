#pragma once



// Package: Quest_12070

#include "Basic.hpp"

#include "Quest_12070_classes.hpp"
#include "Quest_12070_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12070.Quest_12070_C.ExecuteUbergraph_Quest_12070
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12070_C::ExecuteUbergraph_Quest_12070(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12070_C", "ExecuteUbergraph_Quest_12070");

	Params::Quest_12070_C_ExecuteUbergraph_Quest_12070 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12070.Quest_12070_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12070_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12070_C", "HandleFinishing");

	Params::Quest_12070_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12070.Quest_12070_C.OnFinished_1933456044CA12E257A55D9CB559CCED
// (BlueprintCallable, BlueprintEvent)

void UQuest_12070_C::OnFinished_1933456044CA12E257A55D9CB559CCED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12070_C", "OnFinished_1933456044CA12E257A55D9CB559CCED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12070.Quest_12070_C.OnStop_1933456044CA12E257A55D9CB559CCED
// (BlueprintCallable, BlueprintEvent)

void UQuest_12070_C::OnStop_1933456044CA12E257A55D9CB559CCED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12070_C", "OnStop_1933456044CA12E257A55D9CB559CCED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12070.Quest_12070_C.OnDlgClosed_77CD951C46966DEA4FC485928A9D5A33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12070_C::OnDlgClosed_77CD951C46966DEA4FC485928A9D5A33(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12070_C", "OnDlgClosed_77CD951C46966DEA4FC485928A9D5A33");

	Params::Quest_12070_C_OnDlgClosed_77CD951C46966DEA4FC485928A9D5A33 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12070.Quest_12070_C.OnDlgSelectedOption_77CD951C46966DEA4FC485928A9D5A33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12070_C::OnDlgSelectedOption_77CD951C46966DEA4FC485928A9D5A33(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12070_C", "OnDlgSelectedOption_77CD951C46966DEA4FC485928A9D5A33");

	Params::Quest_12070_C_OnDlgSelectedOption_77CD951C46966DEA4FC485928A9D5A33 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12070.Quest_12070_C.OnSuccess_EECC34C14CF9E484AB2875BE09547FF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12070_C::OnSuccess_EECC34C14CF9E484AB2875BE09547FF4(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12070_C", "OnSuccess_EECC34C14CF9E484AB2875BE09547FF4");

	Params::Quest_12070_C_OnSuccess_EECC34C14CF9E484AB2875BE09547FF4 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
