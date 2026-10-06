#pragma once



// Package: Quest_30086

#include "Basic.hpp"

#include "Quest_30086_classes.hpp"
#include "Quest_30086_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30086.Quest_30086_C.ExecuteUbergraph_Quest_30086
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30086_C::ExecuteUbergraph_Quest_30086(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30086_C", "ExecuteUbergraph_Quest_30086");

	Params::Quest_30086_C_ExecuteUbergraph_Quest_30086 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30086.Quest_30086_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30086_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30086_C", "HandleFinishing");

	Params::Quest_30086_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30086.Quest_30086_C.OnSuccess_0A1EF6D94B3E5F1A7B6B5EA67BCC64F3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30086_C::OnSuccess_0A1EF6D94B3E5F1A7B6B5EA67BCC64F3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30086_C", "OnSuccess_0A1EF6D94B3E5F1A7B6B5EA67BCC64F3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30086.Quest_30086_C.OnFinished_8A76FB714D1BDA5C709AD6928BE4B25F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30086_C::OnFinished_8A76FB714D1BDA5C709AD6928BE4B25F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30086_C", "OnFinished_8A76FB714D1BDA5C709AD6928BE4B25F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30086.Quest_30086_C.OnStop_8A76FB714D1BDA5C709AD6928BE4B25F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30086_C::OnStop_8A76FB714D1BDA5C709AD6928BE4B25F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30086_C", "OnStop_8A76FB714D1BDA5C709AD6928BE4B25F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30086.Quest_30086_C.OnDlgClosed_642030BF4304944CE669A69CA783B37D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30086_C::OnDlgClosed_642030BF4304944CE669A69CA783B37D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30086_C", "OnDlgClosed_642030BF4304944CE669A69CA783B37D");

	Params::Quest_30086_C_OnDlgClosed_642030BF4304944CE669A69CA783B37D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30086.Quest_30086_C.OnDlgSelectedOption_642030BF4304944CE669A69CA783B37D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30086_C::OnDlgSelectedOption_642030BF4304944CE669A69CA783B37D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30086_C", "OnDlgSelectedOption_642030BF4304944CE669A69CA783B37D");

	Params::Quest_30086_C_OnDlgSelectedOption_642030BF4304944CE669A69CA783B37D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
