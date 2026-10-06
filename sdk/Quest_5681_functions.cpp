#pragma once



// Package: Quest_5681

#include "Basic.hpp"

#include "Quest_5681_classes.hpp"
#include "Quest_5681_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5681.Quest_5681_C.ExecuteUbergraph_Quest_5681
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5681_C::ExecuteUbergraph_Quest_5681(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5681_C", "ExecuteUbergraph_Quest_5681");

	Params::Quest_5681_C_ExecuteUbergraph_Quest_5681 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5681.Quest_5681_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5681_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5681_C", "HandleFinishing");

	Params::Quest_5681_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5681.Quest_5681_C.OnFinished_4C9C7D9841B71FB89396BDB91CC8941D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5681_C::OnFinished_4C9C7D9841B71FB89396BDB91CC8941D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5681_C", "OnFinished_4C9C7D9841B71FB89396BDB91CC8941D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5681.Quest_5681_C.OnStop_4C9C7D9841B71FB89396BDB91CC8941D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5681_C::OnStop_4C9C7D9841B71FB89396BDB91CC8941D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5681_C", "OnStop_4C9C7D9841B71FB89396BDB91CC8941D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5681.Quest_5681_C.OnDlgClosed_083872774FE41B9E697C0A986E356530
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5681_C::OnDlgClosed_083872774FE41B9E697C0A986E356530(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5681_C", "OnDlgClosed_083872774FE41B9E697C0A986E356530");

	Params::Quest_5681_C_OnDlgClosed_083872774FE41B9E697C0A986E356530 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5681.Quest_5681_C.OnDlgSelectedOption_083872774FE41B9E697C0A986E356530
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5681_C::OnDlgSelectedOption_083872774FE41B9E697C0A986E356530(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5681_C", "OnDlgSelectedOption_083872774FE41B9E697C0A986E356530");

	Params::Quest_5681_C_OnDlgSelectedOption_083872774FE41B9E697C0A986E356530 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
