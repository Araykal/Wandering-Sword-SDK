#pragma once



// Package: Quest_30398

#include "Basic.hpp"

#include "Quest_30398_classes.hpp"
#include "Quest_30398_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30398.Quest_30398_C.ExecuteUbergraph_Quest_30398
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30398_C::ExecuteUbergraph_Quest_30398(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30398_C", "ExecuteUbergraph_Quest_30398");

	Params::Quest_30398_C_ExecuteUbergraph_Quest_30398 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30398.Quest_30398_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30398_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30398_C", "HandleFinishing");

	Params::Quest_30398_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30398.Quest_30398_C.OnSuccess_2126CABA4F9C99D9491298BFAA9C5E18
// (BlueprintCallable, BlueprintEvent)

void UQuest_30398_C::OnSuccess_2126CABA4F9C99D9491298BFAA9C5E18()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30398_C", "OnSuccess_2126CABA4F9C99D9491298BFAA9C5E18");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30398.Quest_30398_C.OnFinished_6C0E64424F9CA0752E11C4922F896B9B
// (BlueprintCallable, BlueprintEvent)

void UQuest_30398_C::OnFinished_6C0E64424F9CA0752E11C4922F896B9B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30398_C", "OnFinished_6C0E64424F9CA0752E11C4922F896B9B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30398.Quest_30398_C.OnStop_6C0E64424F9CA0752E11C4922F896B9B
// (BlueprintCallable, BlueprintEvent)

void UQuest_30398_C::OnStop_6C0E64424F9CA0752E11C4922F896B9B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30398_C", "OnStop_6C0E64424F9CA0752E11C4922F896B9B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30398.Quest_30398_C.OnDlgClosed_7F446E684FFAB4B39C578EBB6A5C7670
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30398_C::OnDlgClosed_7F446E684FFAB4B39C578EBB6A5C7670(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30398_C", "OnDlgClosed_7F446E684FFAB4B39C578EBB6A5C7670");

	Params::Quest_30398_C_OnDlgClosed_7F446E684FFAB4B39C578EBB6A5C7670 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30398.Quest_30398_C.OnDlgSelectedOption_7F446E684FFAB4B39C578EBB6A5C7670
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30398_C::OnDlgSelectedOption_7F446E684FFAB4B39C578EBB6A5C7670(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30398_C", "OnDlgSelectedOption_7F446E684FFAB4B39C578EBB6A5C7670");

	Params::Quest_30398_C_OnDlgSelectedOption_7F446E684FFAB4B39C578EBB6A5C7670 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
