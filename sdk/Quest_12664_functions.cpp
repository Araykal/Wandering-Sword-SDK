#pragma once



// Package: Quest_12664

#include "Basic.hpp"

#include "Quest_12664_classes.hpp"
#include "Quest_12664_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12664.Quest_12664_C.ExecuteUbergraph_Quest_12664
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12664_C::ExecuteUbergraph_Quest_12664(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12664_C", "ExecuteUbergraph_Quest_12664");

	Params::Quest_12664_C_ExecuteUbergraph_Quest_12664 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12664.Quest_12664_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12664_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12664_C", "HandleFinishing");

	Params::Quest_12664_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12664.Quest_12664_C.OnSuccess_323E72DB4C0BA4E24E0C338C32B4EA96
// (BlueprintCallable, BlueprintEvent)

void UQuest_12664_C::OnSuccess_323E72DB4C0BA4E24E0C338C32B4EA96()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12664_C", "OnSuccess_323E72DB4C0BA4E24E0C338C32B4EA96");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12664.Quest_12664_C.OnFinished_E21512B146DC6F08A14FF29C47F96E73
// (BlueprintCallable, BlueprintEvent)

void UQuest_12664_C::OnFinished_E21512B146DC6F08A14FF29C47F96E73()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12664_C", "OnFinished_E21512B146DC6F08A14FF29C47F96E73");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12664.Quest_12664_C.OnStop_E21512B146DC6F08A14FF29C47F96E73
// (BlueprintCallable, BlueprintEvent)

void UQuest_12664_C::OnStop_E21512B146DC6F08A14FF29C47F96E73()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12664_C", "OnStop_E21512B146DC6F08A14FF29C47F96E73");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12664.Quest_12664_C.OnDlgClosed_165816E1419813C10B0AA2A1311666D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12664_C::OnDlgClosed_165816E1419813C10B0AA2A1311666D5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12664_C", "OnDlgClosed_165816E1419813C10B0AA2A1311666D5");

	Params::Quest_12664_C_OnDlgClosed_165816E1419813C10B0AA2A1311666D5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12664.Quest_12664_C.OnDlgSelectedOption_165816E1419813C10B0AA2A1311666D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12664_C::OnDlgSelectedOption_165816E1419813C10B0AA2A1311666D5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12664_C", "OnDlgSelectedOption_165816E1419813C10B0AA2A1311666D5");

	Params::Quest_12664_C_OnDlgSelectedOption_165816E1419813C10B0AA2A1311666D5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
