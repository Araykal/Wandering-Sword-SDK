#pragma once



// Package: Quest_5862

#include "Basic.hpp"

#include "Quest_5862_classes.hpp"
#include "Quest_5862_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5862.Quest_5862_C.ExecuteUbergraph_Quest_5862
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5862_C::ExecuteUbergraph_Quest_5862(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5862_C", "ExecuteUbergraph_Quest_5862");

	Params::Quest_5862_C_ExecuteUbergraph_Quest_5862 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5862.Quest_5862_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5862_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5862_C", "HandleFinishing");

	Params::Quest_5862_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5862.Quest_5862_C.OnFinished_D460C94F4FD018DA1FD00B94655FC04C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5862_C::OnFinished_D460C94F4FD018DA1FD00B94655FC04C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5862_C", "OnFinished_D460C94F4FD018DA1FD00B94655FC04C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5862.Quest_5862_C.OnStop_D460C94F4FD018DA1FD00B94655FC04C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5862_C::OnStop_D460C94F4FD018DA1FD00B94655FC04C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5862_C", "OnStop_D460C94F4FD018DA1FD00B94655FC04C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5862.Quest_5862_C.OnDlgClosed_63B8E1E44D506ED67B3E6A923876C516
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5862_C::OnDlgClosed_63B8E1E44D506ED67B3E6A923876C516(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5862_C", "OnDlgClosed_63B8E1E44D506ED67B3E6A923876C516");

	Params::Quest_5862_C_OnDlgClosed_63B8E1E44D506ED67B3E6A923876C516 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5862.Quest_5862_C.OnDlgSelectedOption_63B8E1E44D506ED67B3E6A923876C516
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5862_C::OnDlgSelectedOption_63B8E1E44D506ED67B3E6A923876C516(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5862_C", "OnDlgSelectedOption_63B8E1E44D506ED67B3E6A923876C516");

	Params::Quest_5862_C_OnDlgSelectedOption_63B8E1E44D506ED67B3E6A923876C516 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
