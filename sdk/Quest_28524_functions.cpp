#pragma once



// Package: Quest_28524

#include "Basic.hpp"

#include "Quest_28524_classes.hpp"
#include "Quest_28524_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28524.Quest_28524_C.ExecuteUbergraph_Quest_28524
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28524_C::ExecuteUbergraph_Quest_28524(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28524_C", "ExecuteUbergraph_Quest_28524");

	Params::Quest_28524_C_ExecuteUbergraph_Quest_28524 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28524.Quest_28524_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28524_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28524_C", "HandleFinishing");

	Params::Quest_28524_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28524.Quest_28524_C.OnSuccess_BF10A62D404AB2BBA0C990B99078B744
// (BlueprintCallable, BlueprintEvent)

void UQuest_28524_C::OnSuccess_BF10A62D404AB2BBA0C990B99078B744()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28524_C", "OnSuccess_BF10A62D404AB2BBA0C990B99078B744");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28524.Quest_28524_C.OnFinished_75EF1CEB422BAAEEB2FC87985DF7C5D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28524_C::OnFinished_75EF1CEB422BAAEEB2FC87985DF7C5D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28524_C", "OnFinished_75EF1CEB422BAAEEB2FC87985DF7C5D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28524.Quest_28524_C.OnStop_75EF1CEB422BAAEEB2FC87985DF7C5D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28524_C::OnStop_75EF1CEB422BAAEEB2FC87985DF7C5D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28524_C", "OnStop_75EF1CEB422BAAEEB2FC87985DF7C5D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28524.Quest_28524_C.OnDlgClosed_B15D68954209D4E56F8AAF9A80B04F64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28524_C::OnDlgClosed_B15D68954209D4E56F8AAF9A80B04F64(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28524_C", "OnDlgClosed_B15D68954209D4E56F8AAF9A80B04F64");

	Params::Quest_28524_C_OnDlgClosed_B15D68954209D4E56F8AAF9A80B04F64 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28524.Quest_28524_C.OnDlgSelectedOption_B15D68954209D4E56F8AAF9A80B04F64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28524_C::OnDlgSelectedOption_B15D68954209D4E56F8AAF9A80B04F64(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28524_C", "OnDlgSelectedOption_B15D68954209D4E56F8AAF9A80B04F64");

	Params::Quest_28524_C_OnDlgSelectedOption_B15D68954209D4E56F8AAF9A80B04F64 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
