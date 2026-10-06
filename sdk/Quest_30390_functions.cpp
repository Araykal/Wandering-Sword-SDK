#pragma once



// Package: Quest_30390

#include "Basic.hpp"

#include "Quest_30390_classes.hpp"
#include "Quest_30390_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30390.Quest_30390_C.ExecuteUbergraph_Quest_30390
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30390_C::ExecuteUbergraph_Quest_30390(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30390_C", "ExecuteUbergraph_Quest_30390");

	Params::Quest_30390_C_ExecuteUbergraph_Quest_30390 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30390.Quest_30390_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30390_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30390_C", "HandleFinishing");

	Params::Quest_30390_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30390.Quest_30390_C.OnSuccess_C12051E045E997836557F5B987518B28
// (BlueprintCallable, BlueprintEvent)

void UQuest_30390_C::OnSuccess_C12051E045E997836557F5B987518B28()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30390_C", "OnSuccess_C12051E045E997836557F5B987518B28");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30390.Quest_30390_C.OnFinished_5953515A49B7415867A7E4B8115658D7
// (BlueprintCallable, BlueprintEvent)

void UQuest_30390_C::OnFinished_5953515A49B7415867A7E4B8115658D7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30390_C", "OnFinished_5953515A49B7415867A7E4B8115658D7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30390.Quest_30390_C.OnStop_5953515A49B7415867A7E4B8115658D7
// (BlueprintCallable, BlueprintEvent)

void UQuest_30390_C::OnStop_5953515A49B7415867A7E4B8115658D7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30390_C", "OnStop_5953515A49B7415867A7E4B8115658D7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30390.Quest_30390_C.OnDlgClosed_1C6F1C9B48AAE6C25379B5A1D0C4C367
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30390_C::OnDlgClosed_1C6F1C9B48AAE6C25379B5A1D0C4C367(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30390_C", "OnDlgClosed_1C6F1C9B48AAE6C25379B5A1D0C4C367");

	Params::Quest_30390_C_OnDlgClosed_1C6F1C9B48AAE6C25379B5A1D0C4C367 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30390.Quest_30390_C.OnDlgSelectedOption_1C6F1C9B48AAE6C25379B5A1D0C4C367
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30390_C::OnDlgSelectedOption_1C6F1C9B48AAE6C25379B5A1D0C4C367(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30390_C", "OnDlgSelectedOption_1C6F1C9B48AAE6C25379B5A1D0C4C367");

	Params::Quest_30390_C_OnDlgSelectedOption_1C6F1C9B48AAE6C25379B5A1D0C4C367 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
