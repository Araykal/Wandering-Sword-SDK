#pragma once



// Package: Quest_29723

#include "Basic.hpp"

#include "Quest_29723_classes.hpp"
#include "Quest_29723_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29723.Quest_29723_C.ExecuteUbergraph_Quest_29723
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29723_C::ExecuteUbergraph_Quest_29723(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29723_C", "ExecuteUbergraph_Quest_29723");

	Params::Quest_29723_C_ExecuteUbergraph_Quest_29723 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29723.Quest_29723_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29723_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29723_C", "HandleFinishing");

	Params::Quest_29723_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29723.Quest_29723_C.OnSuccess_BA728C154CCF916F2207F8AA29CB4FC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29723_C::OnSuccess_BA728C154CCF916F2207F8AA29CB4FC8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29723_C", "OnSuccess_BA728C154CCF916F2207F8AA29CB4FC8");

	Params::Quest_29723_C_OnSuccess_BA728C154CCF916F2207F8AA29CB4FC8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29723.Quest_29723_C.OnFinished_2A92D8BC45D5D6E310549A9C60225119
// (BlueprintCallable, BlueprintEvent)

void UQuest_29723_C::OnFinished_2A92D8BC45D5D6E310549A9C60225119()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29723_C", "OnFinished_2A92D8BC45D5D6E310549A9C60225119");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29723.Quest_29723_C.OnStop_2A92D8BC45D5D6E310549A9C60225119
// (BlueprintCallable, BlueprintEvent)

void UQuest_29723_C::OnStop_2A92D8BC45D5D6E310549A9C60225119()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29723_C", "OnStop_2A92D8BC45D5D6E310549A9C60225119");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29723.Quest_29723_C.OnDlgClosed_14D5C82E4364CA794B999DA08485DB15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29723_C::OnDlgClosed_14D5C82E4364CA794B999DA08485DB15(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29723_C", "OnDlgClosed_14D5C82E4364CA794B999DA08485DB15");

	Params::Quest_29723_C_OnDlgClosed_14D5C82E4364CA794B999DA08485DB15 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29723.Quest_29723_C.OnDlgSelectedOption_14D5C82E4364CA794B999DA08485DB15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29723_C::OnDlgSelectedOption_14D5C82E4364CA794B999DA08485DB15(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29723_C", "OnDlgSelectedOption_14D5C82E4364CA794B999DA08485DB15");

	Params::Quest_29723_C_OnDlgSelectedOption_14D5C82E4364CA794B999DA08485DB15 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
