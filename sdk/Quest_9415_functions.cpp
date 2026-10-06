#pragma once



// Package: Quest_9415

#include "Basic.hpp"

#include "Quest_9415_classes.hpp"
#include "Quest_9415_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_9415.Quest_9415_C.ExecuteUbergraph_Quest_9415
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9415_C::ExecuteUbergraph_Quest_9415(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9415_C", "ExecuteUbergraph_Quest_9415");

	Params::Quest_9415_C_ExecuteUbergraph_Quest_9415 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9415.Quest_9415_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9415_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9415_C", "HandleFinishing");

	Params::Quest_9415_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9415.Quest_9415_C.OnFinished_7EA3B6364ABE201FF5EC688C17B1A087
// (BlueprintCallable, BlueprintEvent)

void UQuest_9415_C::OnFinished_7EA3B6364ABE201FF5EC688C17B1A087()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9415_C", "OnFinished_7EA3B6364ABE201FF5EC688C17B1A087");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_9415.Quest_9415_C.OnStop_7EA3B6364ABE201FF5EC688C17B1A087
// (BlueprintCallable, BlueprintEvent)

void UQuest_9415_C::OnStop_7EA3B6364ABE201FF5EC688C17B1A087()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9415_C", "OnStop_7EA3B6364ABE201FF5EC688C17B1A087");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_9415.Quest_9415_C.OnDlgClosed_44C666B94435215EF4786983985728A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9415_C::OnDlgClosed_44C666B94435215EF4786983985728A0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9415_C", "OnDlgClosed_44C666B94435215EF4786983985728A0");

	Params::Quest_9415_C_OnDlgClosed_44C666B94435215EF4786983985728A0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_9415.Quest_9415_C.OnDlgSelectedOption_44C666B94435215EF4786983985728A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_9415_C::OnDlgSelectedOption_44C666B94435215EF4786983985728A0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_9415_C", "OnDlgSelectedOption_44C666B94435215EF4786983985728A0");

	Params::Quest_9415_C_OnDlgSelectedOption_44C666B94435215EF4786983985728A0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
