#pragma once



// Package: Quest_11872

#include "Basic.hpp"

#include "Quest_11872_classes.hpp"
#include "Quest_11872_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11872.Quest_11872_C.ExecuteUbergraph_Quest_11872
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11872_C::ExecuteUbergraph_Quest_11872(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11872_C", "ExecuteUbergraph_Quest_11872");

	Params::Quest_11872_C_ExecuteUbergraph_Quest_11872 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11872.Quest_11872_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11872_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11872_C", "HandleFinishing");

	Params::Quest_11872_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11872.Quest_11872_C.OnFinished_8C28BBBA4F1E4744D47BC0B8412A091F
// (BlueprintCallable, BlueprintEvent)

void UQuest_11872_C::OnFinished_8C28BBBA4F1E4744D47BC0B8412A091F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11872_C", "OnFinished_8C28BBBA4F1E4744D47BC0B8412A091F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11872.Quest_11872_C.OnStop_8C28BBBA4F1E4744D47BC0B8412A091F
// (BlueprintCallable, BlueprintEvent)

void UQuest_11872_C::OnStop_8C28BBBA4F1E4744D47BC0B8412A091F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11872_C", "OnStop_8C28BBBA4F1E4744D47BC0B8412A091F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11872.Quest_11872_C.OnDlgClosed_8D661F064EF57CC0077B43A2095E49E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11872_C::OnDlgClosed_8D661F064EF57CC0077B43A2095E49E1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11872_C", "OnDlgClosed_8D661F064EF57CC0077B43A2095E49E1");

	Params::Quest_11872_C_OnDlgClosed_8D661F064EF57CC0077B43A2095E49E1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11872.Quest_11872_C.OnDlgSelectedOption_8D661F064EF57CC0077B43A2095E49E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11872_C::OnDlgSelectedOption_8D661F064EF57CC0077B43A2095E49E1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11872_C", "OnDlgSelectedOption_8D661F064EF57CC0077B43A2095E49E1");

	Params::Quest_11872_C_OnDlgSelectedOption_8D661F064EF57CC0077B43A2095E49E1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
