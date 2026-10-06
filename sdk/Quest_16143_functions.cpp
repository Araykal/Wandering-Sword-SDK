#pragma once



// Package: Quest_16143

#include "Basic.hpp"

#include "Quest_16143_classes.hpp"
#include "Quest_16143_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16143.Quest_16143_C.ExecuteUbergraph_Quest_16143
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16143_C::ExecuteUbergraph_Quest_16143(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16143_C", "ExecuteUbergraph_Quest_16143");

	Params::Quest_16143_C_ExecuteUbergraph_Quest_16143 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16143.Quest_16143_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16143_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16143_C", "HandleFinishing");

	Params::Quest_16143_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16143.Quest_16143_C.OnFinished_4BD084B1401FAFD40157D698CCAA2467
// (BlueprintCallable, BlueprintEvent)

void UQuest_16143_C::OnFinished_4BD084B1401FAFD40157D698CCAA2467()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16143_C", "OnFinished_4BD084B1401FAFD40157D698CCAA2467");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16143.Quest_16143_C.OnStop_4BD084B1401FAFD40157D698CCAA2467
// (BlueprintCallable, BlueprintEvent)

void UQuest_16143_C::OnStop_4BD084B1401FAFD40157D698CCAA2467()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16143_C", "OnStop_4BD084B1401FAFD40157D698CCAA2467");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16143.Quest_16143_C.OnDlgClosed_3EF241384A5A57C059D3119CA1FBC4DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16143_C::OnDlgClosed_3EF241384A5A57C059D3119CA1FBC4DF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16143_C", "OnDlgClosed_3EF241384A5A57C059D3119CA1FBC4DF");

	Params::Quest_16143_C_OnDlgClosed_3EF241384A5A57C059D3119CA1FBC4DF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16143.Quest_16143_C.OnDlgSelectedOption_3EF241384A5A57C059D3119CA1FBC4DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16143_C::OnDlgSelectedOption_3EF241384A5A57C059D3119CA1FBC4DF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16143_C", "OnDlgSelectedOption_3EF241384A5A57C059D3119CA1FBC4DF");

	Params::Quest_16143_C_OnDlgSelectedOption_3EF241384A5A57C059D3119CA1FBC4DF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
