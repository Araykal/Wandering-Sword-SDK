#pragma once



// Package: Quest_5706

#include "Basic.hpp"

#include "Quest_5706_classes.hpp"
#include "Quest_5706_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5706.Quest_5706_C.ExecuteUbergraph_Quest_5706
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5706_C::ExecuteUbergraph_Quest_5706(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5706_C", "ExecuteUbergraph_Quest_5706");

	Params::Quest_5706_C_ExecuteUbergraph_Quest_5706 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5706.Quest_5706_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5706_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5706_C", "HandleFinishing");

	Params::Quest_5706_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5706.Quest_5706_C.OnFinished_3B040ED5482D57C6BF074C8885EBB50F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5706_C::OnFinished_3B040ED5482D57C6BF074C8885EBB50F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5706_C", "OnFinished_3B040ED5482D57C6BF074C8885EBB50F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5706.Quest_5706_C.OnStop_3B040ED5482D57C6BF074C8885EBB50F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5706_C::OnStop_3B040ED5482D57C6BF074C8885EBB50F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5706_C", "OnStop_3B040ED5482D57C6BF074C8885EBB50F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5706.Quest_5706_C.OnDlgClosed_47D8CB094DF2573D7914BFAFBA603635
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5706_C::OnDlgClosed_47D8CB094DF2573D7914BFAFBA603635(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5706_C", "OnDlgClosed_47D8CB094DF2573D7914BFAFBA603635");

	Params::Quest_5706_C_OnDlgClosed_47D8CB094DF2573D7914BFAFBA603635 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5706.Quest_5706_C.OnDlgSelectedOption_47D8CB094DF2573D7914BFAFBA603635
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5706_C::OnDlgSelectedOption_47D8CB094DF2573D7914BFAFBA603635(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5706_C", "OnDlgSelectedOption_47D8CB094DF2573D7914BFAFBA603635");

	Params::Quest_5706_C_OnDlgSelectedOption_47D8CB094DF2573D7914BFAFBA603635 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
