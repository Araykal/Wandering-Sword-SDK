#pragma once



// Package: Quest_30394

#include "Basic.hpp"

#include "Quest_30394_classes.hpp"
#include "Quest_30394_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30394.Quest_30394_C.ExecuteUbergraph_Quest_30394
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30394_C::ExecuteUbergraph_Quest_30394(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30394_C", "ExecuteUbergraph_Quest_30394");

	Params::Quest_30394_C_ExecuteUbergraph_Quest_30394 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30394.Quest_30394_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30394_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30394_C", "HandleFinishing");

	Params::Quest_30394_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30394.Quest_30394_C.OnFinished_8DD764734C9AE4ED49F2969CB23C58D7
// (BlueprintCallable, BlueprintEvent)

void UQuest_30394_C::OnFinished_8DD764734C9AE4ED49F2969CB23C58D7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30394_C", "OnFinished_8DD764734C9AE4ED49F2969CB23C58D7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30394.Quest_30394_C.OnStop_8DD764734C9AE4ED49F2969CB23C58D7
// (BlueprintCallable, BlueprintEvent)

void UQuest_30394_C::OnStop_8DD764734C9AE4ED49F2969CB23C58D7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30394_C", "OnStop_8DD764734C9AE4ED49F2969CB23C58D7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30394.Quest_30394_C.OnDlgClosed_7991B8D94D7EFFE96F39048E501F9F5A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30394_C::OnDlgClosed_7991B8D94D7EFFE96F39048E501F9F5A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30394_C", "OnDlgClosed_7991B8D94D7EFFE96F39048E501F9F5A");

	Params::Quest_30394_C_OnDlgClosed_7991B8D94D7EFFE96F39048E501F9F5A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30394.Quest_30394_C.OnDlgSelectedOption_7991B8D94D7EFFE96F39048E501F9F5A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30394_C::OnDlgSelectedOption_7991B8D94D7EFFE96F39048E501F9F5A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30394_C", "OnDlgSelectedOption_7991B8D94D7EFFE96F39048E501F9F5A");

	Params::Quest_30394_C_OnDlgSelectedOption_7991B8D94D7EFFE96F39048E501F9F5A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
