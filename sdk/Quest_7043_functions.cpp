#pragma once



// Package: Quest_7043

#include "Basic.hpp"

#include "Quest_7043_classes.hpp"
#include "Quest_7043_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7043.Quest_7043_C.ExecuteUbergraph_Quest_7043
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7043_C::ExecuteUbergraph_Quest_7043(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7043_C", "ExecuteUbergraph_Quest_7043");

	Params::Quest_7043_C_ExecuteUbergraph_Quest_7043 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7043.Quest_7043_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7043_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7043_C", "HandleFinishing");

	Params::Quest_7043_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7043.Quest_7043_C.OnFinished_4899168D4C0281AF188A94B031FD64F2
// (BlueprintCallable, BlueprintEvent)

void UQuest_7043_C::OnFinished_4899168D4C0281AF188A94B031FD64F2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7043_C", "OnFinished_4899168D4C0281AF188A94B031FD64F2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7043.Quest_7043_C.OnStop_4899168D4C0281AF188A94B031FD64F2
// (BlueprintCallable, BlueprintEvent)

void UQuest_7043_C::OnStop_4899168D4C0281AF188A94B031FD64F2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7043_C", "OnStop_4899168D4C0281AF188A94B031FD64F2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7043.Quest_7043_C.OnDlgClosed_2FD594A24314707E73C19A8F6067229E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7043_C::OnDlgClosed_2FD594A24314707E73C19A8F6067229E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7043_C", "OnDlgClosed_2FD594A24314707E73C19A8F6067229E");

	Params::Quest_7043_C_OnDlgClosed_2FD594A24314707E73C19A8F6067229E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7043.Quest_7043_C.OnDlgSelectedOption_2FD594A24314707E73C19A8F6067229E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7043_C::OnDlgSelectedOption_2FD594A24314707E73C19A8F6067229E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7043_C", "OnDlgSelectedOption_2FD594A24314707E73C19A8F6067229E");

	Params::Quest_7043_C_OnDlgSelectedOption_2FD594A24314707E73C19A8F6067229E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
