#pragma once



// Package: Quest_29701

#include "Basic.hpp"

#include "Quest_29701_classes.hpp"
#include "Quest_29701_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29701.Quest_29701_C.ExecuteUbergraph_Quest_29701
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29701_C::ExecuteUbergraph_Quest_29701(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29701_C", "ExecuteUbergraph_Quest_29701");

	Params::Quest_29701_C_ExecuteUbergraph_Quest_29701 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29701.Quest_29701_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29701_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29701_C", "HandleFinishing");

	Params::Quest_29701_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29701.Quest_29701_C.OnSuccess_919B688B4F84E79D56BE18BFA7B1DE81
// (BlueprintCallable, BlueprintEvent)

void UQuest_29701_C::OnSuccess_919B688B4F84E79D56BE18BFA7B1DE81()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29701_C", "OnSuccess_919B688B4F84E79D56BE18BFA7B1DE81");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29701.Quest_29701_C.OnFinished_64EAE9604D2132D07EDB8C926F9A34C4
// (BlueprintCallable, BlueprintEvent)

void UQuest_29701_C::OnFinished_64EAE9604D2132D07EDB8C926F9A34C4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29701_C", "OnFinished_64EAE9604D2132D07EDB8C926F9A34C4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29701.Quest_29701_C.OnStop_64EAE9604D2132D07EDB8C926F9A34C4
// (BlueprintCallable, BlueprintEvent)

void UQuest_29701_C::OnStop_64EAE9604D2132D07EDB8C926F9A34C4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29701_C", "OnStop_64EAE9604D2132D07EDB8C926F9A34C4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29701.Quest_29701_C.OnDlgClosed_C35419CA40BEEC65BD91C780A075459F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29701_C::OnDlgClosed_C35419CA40BEEC65BD91C780A075459F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29701_C", "OnDlgClosed_C35419CA40BEEC65BD91C780A075459F");

	Params::Quest_29701_C_OnDlgClosed_C35419CA40BEEC65BD91C780A075459F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29701.Quest_29701_C.OnDlgSelectedOption_C35419CA40BEEC65BD91C780A075459F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29701_C::OnDlgSelectedOption_C35419CA40BEEC65BD91C780A075459F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29701_C", "OnDlgSelectedOption_C35419CA40BEEC65BD91C780A075459F");

	Params::Quest_29701_C_OnDlgSelectedOption_C35419CA40BEEC65BD91C780A075459F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
