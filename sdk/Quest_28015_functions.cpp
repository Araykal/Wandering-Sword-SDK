#pragma once



// Package: Quest_28015

#include "Basic.hpp"

#include "Quest_28015_classes.hpp"
#include "Quest_28015_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28015.Quest_28015_C.ExecuteUbergraph_Quest_28015
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28015_C::ExecuteUbergraph_Quest_28015(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28015_C", "ExecuteUbergraph_Quest_28015");

	Params::Quest_28015_C_ExecuteUbergraph_Quest_28015 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28015.Quest_28015_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28015_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28015_C", "HandleFinishing");

	Params::Quest_28015_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28015.Quest_28015_C.OnSuccess_4DE5E9234D88330BD08F7A8A5F500858
// (BlueprintCallable, BlueprintEvent)

void UQuest_28015_C::OnSuccess_4DE5E9234D88330BD08F7A8A5F500858()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28015_C", "OnSuccess_4DE5E9234D88330BD08F7A8A5F500858");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28015.Quest_28015_C.OnFinished_A083F6FE440E1B2E08A482998EE0ED5F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28015_C::OnFinished_A083F6FE440E1B2E08A482998EE0ED5F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28015_C", "OnFinished_A083F6FE440E1B2E08A482998EE0ED5F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28015.Quest_28015_C.OnStop_A083F6FE440E1B2E08A482998EE0ED5F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28015_C::OnStop_A083F6FE440E1B2E08A482998EE0ED5F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28015_C", "OnStop_A083F6FE440E1B2E08A482998EE0ED5F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28015.Quest_28015_C.OnDlgClosed_21583E1840416E103457A2B7DB8C4908
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28015_C::OnDlgClosed_21583E1840416E103457A2B7DB8C4908(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28015_C", "OnDlgClosed_21583E1840416E103457A2B7DB8C4908");

	Params::Quest_28015_C_OnDlgClosed_21583E1840416E103457A2B7DB8C4908 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28015.Quest_28015_C.OnDlgSelectedOption_21583E1840416E103457A2B7DB8C4908
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28015_C::OnDlgSelectedOption_21583E1840416E103457A2B7DB8C4908(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28015_C", "OnDlgSelectedOption_21583E1840416E103457A2B7DB8C4908");

	Params::Quest_28015_C_OnDlgSelectedOption_21583E1840416E103457A2B7DB8C4908 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
