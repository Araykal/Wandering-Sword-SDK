#pragma once



// Package: Quest_5358

#include "Basic.hpp"

#include "Quest_5358_classes.hpp"
#include "Quest_5358_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5358.Quest_5358_C.ExecuteUbergraph_Quest_5358
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5358_C::ExecuteUbergraph_Quest_5358(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "ExecuteUbergraph_Quest_5358");

	Params::Quest_5358_C_ExecuteUbergraph_Quest_5358 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5358.Quest_5358_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5358_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "HandleFinishing");

	Params::Quest_5358_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5358.Quest_5358_C.OnSuccess_99AA78644F9D055AC6DFFAA406029551
// (BlueprintCallable, BlueprintEvent)

void UQuest_5358_C::OnSuccess_99AA78644F9D055AC6DFFAA406029551()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "OnSuccess_99AA78644F9D055AC6DFFAA406029551");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5358.Quest_5358_C.OnSuccess_53D5774D439E0CFC4C04DDB57AF68F51
// (BlueprintCallable, BlueprintEvent)

void UQuest_5358_C::OnSuccess_53D5774D439E0CFC4C04DDB57AF68F51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "OnSuccess_53D5774D439E0CFC4C04DDB57AF68F51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5358.Quest_5358_C.OnFinished_5EDAF4394AD4F3B570DA86A0D5DFCBF5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5358_C::OnFinished_5EDAF4394AD4F3B570DA86A0D5DFCBF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "OnFinished_5EDAF4394AD4F3B570DA86A0D5DFCBF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5358.Quest_5358_C.OnStop_5EDAF4394AD4F3B570DA86A0D5DFCBF5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5358_C::OnStop_5EDAF4394AD4F3B570DA86A0D5DFCBF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "OnStop_5EDAF4394AD4F3B570DA86A0D5DFCBF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5358.Quest_5358_C.OnDlgClosed_E9BF98CE4C75BAA6A524B7BA2081190C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5358_C::OnDlgClosed_E9BF98CE4C75BAA6A524B7BA2081190C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "OnDlgClosed_E9BF98CE4C75BAA6A524B7BA2081190C");

	Params::Quest_5358_C_OnDlgClosed_E9BF98CE4C75BAA6A524B7BA2081190C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5358.Quest_5358_C.OnDlgSelectedOption_E9BF98CE4C75BAA6A524B7BA2081190C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5358_C::OnDlgSelectedOption_E9BF98CE4C75BAA6A524B7BA2081190C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5358_C", "OnDlgSelectedOption_E9BF98CE4C75BAA6A524B7BA2081190C");

	Params::Quest_5358_C_OnDlgSelectedOption_E9BF98CE4C75BAA6A524B7BA2081190C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
