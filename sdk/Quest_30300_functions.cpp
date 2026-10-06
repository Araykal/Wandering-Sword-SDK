#pragma once



// Package: Quest_30300

#include "Basic.hpp"

#include "Quest_30300_classes.hpp"
#include "Quest_30300_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30300.Quest_30300_C.ExecuteUbergraph_Quest_30300
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30300_C::ExecuteUbergraph_Quest_30300(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30300_C", "ExecuteUbergraph_Quest_30300");

	Params::Quest_30300_C_ExecuteUbergraph_Quest_30300 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30300.Quest_30300_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30300_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30300_C", "HandleFinishing");

	Params::Quest_30300_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30300.Quest_30300_C.OnSuccess_33585FEC441C61ACEB3DF18B131620B1
// (BlueprintCallable, BlueprintEvent)

void UQuest_30300_C::OnSuccess_33585FEC441C61ACEB3DF18B131620B1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30300_C", "OnSuccess_33585FEC441C61ACEB3DF18B131620B1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30300.Quest_30300_C.OnFinished_C4783B844DC2B937C10645A712CC562E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30300_C::OnFinished_C4783B844DC2B937C10645A712CC562E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30300_C", "OnFinished_C4783B844DC2B937C10645A712CC562E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30300.Quest_30300_C.OnStop_C4783B844DC2B937C10645A712CC562E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30300_C::OnStop_C4783B844DC2B937C10645A712CC562E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30300_C", "OnStop_C4783B844DC2B937C10645A712CC562E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30300.Quest_30300_C.OnDlgClosed_F6EB4286483B7B858BD9A582C8B8CD08
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30300_C::OnDlgClosed_F6EB4286483B7B858BD9A582C8B8CD08(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30300_C", "OnDlgClosed_F6EB4286483B7B858BD9A582C8B8CD08");

	Params::Quest_30300_C_OnDlgClosed_F6EB4286483B7B858BD9A582C8B8CD08 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30300.Quest_30300_C.OnDlgSelectedOption_F6EB4286483B7B858BD9A582C8B8CD08
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30300_C::OnDlgSelectedOption_F6EB4286483B7B858BD9A582C8B8CD08(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30300_C", "OnDlgSelectedOption_F6EB4286483B7B858BD9A582C8B8CD08");

	Params::Quest_30300_C_OnDlgSelectedOption_F6EB4286483B7B858BD9A582C8B8CD08 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
