#pragma once



// Package: Quest_12643

#include "Basic.hpp"

#include "Quest_12643_classes.hpp"
#include "Quest_12643_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12643.Quest_12643_C.ExecuteUbergraph_Quest_12643
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12643_C::ExecuteUbergraph_Quest_12643(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12643_C", "ExecuteUbergraph_Quest_12643");

	Params::Quest_12643_C_ExecuteUbergraph_Quest_12643 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12643.Quest_12643_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12643_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12643_C", "HandleFinishing");

	Params::Quest_12643_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12643.Quest_12643_C.OnSuccess_FA9BB0EB45BA37DDCDEF21B23FCDE6B4
// (BlueprintCallable, BlueprintEvent)

void UQuest_12643_C::OnSuccess_FA9BB0EB45BA37DDCDEF21B23FCDE6B4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12643_C", "OnSuccess_FA9BB0EB45BA37DDCDEF21B23FCDE6B4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12643.Quest_12643_C.OnFinished_766BF4DC4260C36370B71B954A312691
// (BlueprintCallable, BlueprintEvent)

void UQuest_12643_C::OnFinished_766BF4DC4260C36370B71B954A312691()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12643_C", "OnFinished_766BF4DC4260C36370B71B954A312691");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12643.Quest_12643_C.OnStop_766BF4DC4260C36370B71B954A312691
// (BlueprintCallable, BlueprintEvent)

void UQuest_12643_C::OnStop_766BF4DC4260C36370B71B954A312691()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12643_C", "OnStop_766BF4DC4260C36370B71B954A312691");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12643.Quest_12643_C.OnDlgClosed_20033735423250EC509514BF3A935180
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12643_C::OnDlgClosed_20033735423250EC509514BF3A935180(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12643_C", "OnDlgClosed_20033735423250EC509514BF3A935180");

	Params::Quest_12643_C_OnDlgClosed_20033735423250EC509514BF3A935180 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12643.Quest_12643_C.OnDlgSelectedOption_20033735423250EC509514BF3A935180
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12643_C::OnDlgSelectedOption_20033735423250EC509514BF3A935180(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12643_C", "OnDlgSelectedOption_20033735423250EC509514BF3A935180");

	Params::Quest_12643_C_OnDlgSelectedOption_20033735423250EC509514BF3A935180 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
