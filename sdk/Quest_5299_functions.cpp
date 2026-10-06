#pragma once



// Package: Quest_5299

#include "Basic.hpp"

#include "Quest_5299_classes.hpp"
#include "Quest_5299_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5299.Quest_5299_C.ExecuteUbergraph_Quest_5299
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5299_C::ExecuteUbergraph_Quest_5299(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5299_C", "ExecuteUbergraph_Quest_5299");

	Params::Quest_5299_C_ExecuteUbergraph_Quest_5299 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5299.Quest_5299_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5299_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5299_C", "HandleFinishing");

	Params::Quest_5299_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5299.Quest_5299_C.OnSuccess_DB1050604E1416577A2369AB704897D9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5299_C::OnSuccess_DB1050604E1416577A2369AB704897D9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5299_C", "OnSuccess_DB1050604E1416577A2369AB704897D9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5299.Quest_5299_C.OnFinished_4FF8D3A6409FA8C638B95587DC842535
// (BlueprintCallable, BlueprintEvent)

void UQuest_5299_C::OnFinished_4FF8D3A6409FA8C638B95587DC842535()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5299_C", "OnFinished_4FF8D3A6409FA8C638B95587DC842535");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5299.Quest_5299_C.OnStop_4FF8D3A6409FA8C638B95587DC842535
// (BlueprintCallable, BlueprintEvent)

void UQuest_5299_C::OnStop_4FF8D3A6409FA8C638B95587DC842535()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5299_C", "OnStop_4FF8D3A6409FA8C638B95587DC842535");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5299.Quest_5299_C.OnDlgClosed_FBF5DAAF457AE7AFC96286AA1CC0E610
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5299_C::OnDlgClosed_FBF5DAAF457AE7AFC96286AA1CC0E610(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5299_C", "OnDlgClosed_FBF5DAAF457AE7AFC96286AA1CC0E610");

	Params::Quest_5299_C_OnDlgClosed_FBF5DAAF457AE7AFC96286AA1CC0E610 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5299.Quest_5299_C.OnDlgSelectedOption_FBF5DAAF457AE7AFC96286AA1CC0E610
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5299_C::OnDlgSelectedOption_FBF5DAAF457AE7AFC96286AA1CC0E610(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5299_C", "OnDlgSelectedOption_FBF5DAAF457AE7AFC96286AA1CC0E610");

	Params::Quest_5299_C_OnDlgSelectedOption_FBF5DAAF457AE7AFC96286AA1CC0E610 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
