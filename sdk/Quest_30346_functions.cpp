#pragma once



// Package: Quest_30346

#include "Basic.hpp"

#include "Quest_30346_classes.hpp"
#include "Quest_30346_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30346.Quest_30346_C.ExecuteUbergraph_Quest_30346
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30346_C::ExecuteUbergraph_Quest_30346(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30346_C", "ExecuteUbergraph_Quest_30346");

	Params::Quest_30346_C_ExecuteUbergraph_Quest_30346 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30346.Quest_30346_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30346_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30346_C", "HandleFinishing");

	Params::Quest_30346_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30346.Quest_30346_C.OnSuccess_64C4987440A84169EB4D0E805E8CA534
// (BlueprintCallable, BlueprintEvent)

void UQuest_30346_C::OnSuccess_64C4987440A84169EB4D0E805E8CA534()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30346_C", "OnSuccess_64C4987440A84169EB4D0E805E8CA534");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30346.Quest_30346_C.OnFinished_C58990A24D23B0975DE78C85C16F9254
// (BlueprintCallable, BlueprintEvent)

void UQuest_30346_C::OnFinished_C58990A24D23B0975DE78C85C16F9254()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30346_C", "OnFinished_C58990A24D23B0975DE78C85C16F9254");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30346.Quest_30346_C.OnStop_C58990A24D23B0975DE78C85C16F9254
// (BlueprintCallable, BlueprintEvent)

void UQuest_30346_C::OnStop_C58990A24D23B0975DE78C85C16F9254()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30346_C", "OnStop_C58990A24D23B0975DE78C85C16F9254");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30346.Quest_30346_C.OnDlgClosed_5D9B2D41404628C20B5145B6D1F55495
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30346_C::OnDlgClosed_5D9B2D41404628C20B5145B6D1F55495(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30346_C", "OnDlgClosed_5D9B2D41404628C20B5145B6D1F55495");

	Params::Quest_30346_C_OnDlgClosed_5D9B2D41404628C20B5145B6D1F55495 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30346.Quest_30346_C.OnDlgSelectedOption_5D9B2D41404628C20B5145B6D1F55495
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30346_C::OnDlgSelectedOption_5D9B2D41404628C20B5145B6D1F55495(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30346_C", "OnDlgSelectedOption_5D9B2D41404628C20B5145B6D1F55495");

	Params::Quest_30346_C_OnDlgSelectedOption_5D9B2D41404628C20B5145B6D1F55495 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
