#pragma once



// Package: Quest_11879

#include "Basic.hpp"

#include "Quest_11879_classes.hpp"
#include "Quest_11879_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11879.Quest_11879_C.ExecuteUbergraph_Quest_11879
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11879_C::ExecuteUbergraph_Quest_11879(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11879_C", "ExecuteUbergraph_Quest_11879");

	Params::Quest_11879_C_ExecuteUbergraph_Quest_11879 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11879.Quest_11879_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11879_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11879_C", "HandleFinishing");

	Params::Quest_11879_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11879.Quest_11879_C.OnFinished_15CA62484CBDBE66B9DAAE9BAC2E4FBC
// (BlueprintCallable, BlueprintEvent)

void UQuest_11879_C::OnFinished_15CA62484CBDBE66B9DAAE9BAC2E4FBC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11879_C", "OnFinished_15CA62484CBDBE66B9DAAE9BAC2E4FBC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11879.Quest_11879_C.OnStop_15CA62484CBDBE66B9DAAE9BAC2E4FBC
// (BlueprintCallable, BlueprintEvent)

void UQuest_11879_C::OnStop_15CA62484CBDBE66B9DAAE9BAC2E4FBC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11879_C", "OnStop_15CA62484CBDBE66B9DAAE9BAC2E4FBC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11879.Quest_11879_C.OnDlgClosed_28819B074416FFDD316CB0A8680554D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11879_C::OnDlgClosed_28819B074416FFDD316CB0A8680554D3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11879_C", "OnDlgClosed_28819B074416FFDD316CB0A8680554D3");

	Params::Quest_11879_C_OnDlgClosed_28819B074416FFDD316CB0A8680554D3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11879.Quest_11879_C.OnDlgSelectedOption_28819B074416FFDD316CB0A8680554D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11879_C::OnDlgSelectedOption_28819B074416FFDD316CB0A8680554D3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11879_C", "OnDlgSelectedOption_28819B074416FFDD316CB0A8680554D3");

	Params::Quest_11879_C_OnDlgSelectedOption_28819B074416FFDD316CB0A8680554D3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
