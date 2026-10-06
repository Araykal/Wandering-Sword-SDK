#pragma once



// Package: Quest_5639

#include "Basic.hpp"

#include "Quest_5639_classes.hpp"
#include "Quest_5639_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5639.Quest_5639_C.ExecuteUbergraph_Quest_5639
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5639_C::ExecuteUbergraph_Quest_5639(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5639_C", "ExecuteUbergraph_Quest_5639");

	Params::Quest_5639_C_ExecuteUbergraph_Quest_5639 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5639.Quest_5639_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5639_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5639_C", "HandleFinishing");

	Params::Quest_5639_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5639.Quest_5639_C.OnFinished_FC7B94954D8D9D041DB15C934546CCCE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5639_C::OnFinished_FC7B94954D8D9D041DB15C934546CCCE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5639_C", "OnFinished_FC7B94954D8D9D041DB15C934546CCCE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5639.Quest_5639_C.OnStop_FC7B94954D8D9D041DB15C934546CCCE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5639_C::OnStop_FC7B94954D8D9D041DB15C934546CCCE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5639_C", "OnStop_FC7B94954D8D9D041DB15C934546CCCE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5639.Quest_5639_C.OnDlgClosed_16F2FD4942CA3245E5EBD5AE6B6828B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5639_C::OnDlgClosed_16F2FD4942CA3245E5EBD5AE6B6828B9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5639_C", "OnDlgClosed_16F2FD4942CA3245E5EBD5AE6B6828B9");

	Params::Quest_5639_C_OnDlgClosed_16F2FD4942CA3245E5EBD5AE6B6828B9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5639.Quest_5639_C.OnDlgSelectedOption_16F2FD4942CA3245E5EBD5AE6B6828B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5639_C::OnDlgSelectedOption_16F2FD4942CA3245E5EBD5AE6B6828B9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5639_C", "OnDlgSelectedOption_16F2FD4942CA3245E5EBD5AE6B6828B9");

	Params::Quest_5639_C_OnDlgSelectedOption_16F2FD4942CA3245E5EBD5AE6B6828B9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
