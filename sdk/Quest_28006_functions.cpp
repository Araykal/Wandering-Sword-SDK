#pragma once



// Package: Quest_28006

#include "Basic.hpp"

#include "Quest_28006_classes.hpp"
#include "Quest_28006_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28006.Quest_28006_C.ExecuteUbergraph_Quest_28006
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28006_C::ExecuteUbergraph_Quest_28006(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28006_C", "ExecuteUbergraph_Quest_28006");

	Params::Quest_28006_C_ExecuteUbergraph_Quest_28006 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28006.Quest_28006_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28006_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28006_C", "HandleFinishing");

	Params::Quest_28006_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28006.Quest_28006_C.OnFinished_28175650447EE884D2142FB2C8CC4722
// (BlueprintCallable, BlueprintEvent)

void UQuest_28006_C::OnFinished_28175650447EE884D2142FB2C8CC4722()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28006_C", "OnFinished_28175650447EE884D2142FB2C8CC4722");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28006.Quest_28006_C.OnStop_28175650447EE884D2142FB2C8CC4722
// (BlueprintCallable, BlueprintEvent)

void UQuest_28006_C::OnStop_28175650447EE884D2142FB2C8CC4722()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28006_C", "OnStop_28175650447EE884D2142FB2C8CC4722");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28006.Quest_28006_C.OnDlgClosed_6236FC86442A8BD3840189849D7D3CDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28006_C::OnDlgClosed_6236FC86442A8BD3840189849D7D3CDB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28006_C", "OnDlgClosed_6236FC86442A8BD3840189849D7D3CDB");

	Params::Quest_28006_C_OnDlgClosed_6236FC86442A8BD3840189849D7D3CDB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28006.Quest_28006_C.OnDlgSelectedOption_6236FC86442A8BD3840189849D7D3CDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28006_C::OnDlgSelectedOption_6236FC86442A8BD3840189849D7D3CDB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28006_C", "OnDlgSelectedOption_6236FC86442A8BD3840189849D7D3CDB");

	Params::Quest_28006_C_OnDlgSelectedOption_6236FC86442A8BD3840189849D7D3CDB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28006.Quest_28006_C.OnSuccess_BE1B2AED453D171D87686BB8C6B7FE07
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28006_C::OnSuccess_BE1B2AED453D171D87686BB8C6B7FE07(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28006_C", "OnSuccess_BE1B2AED453D171D87686BB8C6B7FE07");

	Params::Quest_28006_C_OnSuccess_BE1B2AED453D171D87686BB8C6B7FE07 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
