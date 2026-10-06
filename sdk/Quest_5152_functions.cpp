#pragma once



// Package: Quest_5152

#include "Basic.hpp"

#include "Quest_5152_classes.hpp"
#include "Quest_5152_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5152.Quest_5152_C.ExecuteUbergraph_Quest_5152
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5152_C::ExecuteUbergraph_Quest_5152(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5152_C", "ExecuteUbergraph_Quest_5152");

	Params::Quest_5152_C_ExecuteUbergraph_Quest_5152 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5152.Quest_5152_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5152_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5152_C", "HandleFinishing");

	Params::Quest_5152_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5152.Quest_5152_C.OnSuccess_FDAC524849E221665A1053B573949A31
// (BlueprintCallable, BlueprintEvent)

void UQuest_5152_C::OnSuccess_FDAC524849E221665A1053B573949A31()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5152_C", "OnSuccess_FDAC524849E221665A1053B573949A31");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5152.Quest_5152_C.OnFinished_5F128FB54F0C5414193899B88B5475DC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5152_C::OnFinished_5F128FB54F0C5414193899B88B5475DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5152_C", "OnFinished_5F128FB54F0C5414193899B88B5475DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5152.Quest_5152_C.OnStop_5F128FB54F0C5414193899B88B5475DC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5152_C::OnStop_5F128FB54F0C5414193899B88B5475DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5152_C", "OnStop_5F128FB54F0C5414193899B88B5475DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5152.Quest_5152_C.OnDlgClosed_F1C10BFF4F6DCBF6D889A6BBCE07134B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5152_C::OnDlgClosed_F1C10BFF4F6DCBF6D889A6BBCE07134B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5152_C", "OnDlgClosed_F1C10BFF4F6DCBF6D889A6BBCE07134B");

	Params::Quest_5152_C_OnDlgClosed_F1C10BFF4F6DCBF6D889A6BBCE07134B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5152.Quest_5152_C.OnDlgSelectedOption_F1C10BFF4F6DCBF6D889A6BBCE07134B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5152_C::OnDlgSelectedOption_F1C10BFF4F6DCBF6D889A6BBCE07134B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5152_C", "OnDlgSelectedOption_F1C10BFF4F6DCBF6D889A6BBCE07134B");

	Params::Quest_5152_C_OnDlgSelectedOption_F1C10BFF4F6DCBF6D889A6BBCE07134B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
