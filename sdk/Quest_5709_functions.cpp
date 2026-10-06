#pragma once



// Package: Quest_5709

#include "Basic.hpp"

#include "Quest_5709_classes.hpp"
#include "Quest_5709_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5709.Quest_5709_C.ExecuteUbergraph_Quest_5709
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5709_C::ExecuteUbergraph_Quest_5709(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5709_C", "ExecuteUbergraph_Quest_5709");

	Params::Quest_5709_C_ExecuteUbergraph_Quest_5709 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5709.Quest_5709_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5709_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5709_C", "HandleFinishing");

	Params::Quest_5709_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5709.Quest_5709_C.OnFinished_0ABE5FAA4EBAD9A9F99E4991CEF96EF6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5709_C::OnFinished_0ABE5FAA4EBAD9A9F99E4991CEF96EF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5709_C", "OnFinished_0ABE5FAA4EBAD9A9F99E4991CEF96EF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5709.Quest_5709_C.OnStop_0ABE5FAA4EBAD9A9F99E4991CEF96EF6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5709_C::OnStop_0ABE5FAA4EBAD9A9F99E4991CEF96EF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5709_C", "OnStop_0ABE5FAA4EBAD9A9F99E4991CEF96EF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5709.Quest_5709_C.OnDlgClosed_9920D27743718CF6FDAD26987B2D02FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5709_C::OnDlgClosed_9920D27743718CF6FDAD26987B2D02FA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5709_C", "OnDlgClosed_9920D27743718CF6FDAD26987B2D02FA");

	Params::Quest_5709_C_OnDlgClosed_9920D27743718CF6FDAD26987B2D02FA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5709.Quest_5709_C.OnDlgSelectedOption_9920D27743718CF6FDAD26987B2D02FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5709_C::OnDlgSelectedOption_9920D27743718CF6FDAD26987B2D02FA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5709_C", "OnDlgSelectedOption_9920D27743718CF6FDAD26987B2D02FA");

	Params::Quest_5709_C_OnDlgSelectedOption_9920D27743718CF6FDAD26987B2D02FA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5709.Quest_5709_C.OnSuccess_E6C7A58B4640B252B89FBF8E99A43428
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5709_C::OnSuccess_E6C7A58B4640B252B89FBF8E99A43428(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5709_C", "OnSuccess_E6C7A58B4640B252B89FBF8E99A43428");

	Params::Quest_5709_C_OnSuccess_E6C7A58B4640B252B89FBF8E99A43428 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
