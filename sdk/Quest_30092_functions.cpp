#pragma once



// Package: Quest_30092

#include "Basic.hpp"

#include "Quest_30092_classes.hpp"
#include "Quest_30092_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30092.Quest_30092_C.ExecuteUbergraph_Quest_30092
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30092_C::ExecuteUbergraph_Quest_30092(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30092_C", "ExecuteUbergraph_Quest_30092");

	Params::Quest_30092_C_ExecuteUbergraph_Quest_30092 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30092.Quest_30092_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30092_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30092_C", "HandleFinishing");

	Params::Quest_30092_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30092.Quest_30092_C.OnSuccess_2F2A7F274C2A4B2969FEEC9E26A83FB4
// (BlueprintCallable, BlueprintEvent)

void UQuest_30092_C::OnSuccess_2F2A7F274C2A4B2969FEEC9E26A83FB4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30092_C", "OnSuccess_2F2A7F274C2A4B2969FEEC9E26A83FB4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30092.Quest_30092_C.OnFinished_DB4A15364E220BCDCC2CA687AC7E3912
// (BlueprintCallable, BlueprintEvent)

void UQuest_30092_C::OnFinished_DB4A15364E220BCDCC2CA687AC7E3912()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30092_C", "OnFinished_DB4A15364E220BCDCC2CA687AC7E3912");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30092.Quest_30092_C.OnStop_DB4A15364E220BCDCC2CA687AC7E3912
// (BlueprintCallable, BlueprintEvent)

void UQuest_30092_C::OnStop_DB4A15364E220BCDCC2CA687AC7E3912()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30092_C", "OnStop_DB4A15364E220BCDCC2CA687AC7E3912");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30092.Quest_30092_C.OnDlgClosed_817F65064A2CC9A2121CC89B15C0AA2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30092_C::OnDlgClosed_817F65064A2CC9A2121CC89B15C0AA2D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30092_C", "OnDlgClosed_817F65064A2CC9A2121CC89B15C0AA2D");

	Params::Quest_30092_C_OnDlgClosed_817F65064A2CC9A2121CC89B15C0AA2D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30092.Quest_30092_C.OnDlgSelectedOption_817F65064A2CC9A2121CC89B15C0AA2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30092_C::OnDlgSelectedOption_817F65064A2CC9A2121CC89B15C0AA2D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30092_C", "OnDlgSelectedOption_817F65064A2CC9A2121CC89B15C0AA2D");

	Params::Quest_30092_C_OnDlgSelectedOption_817F65064A2CC9A2121CC89B15C0AA2D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
