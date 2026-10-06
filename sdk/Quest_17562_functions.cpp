#pragma once



// Package: Quest_17562

#include "Basic.hpp"

#include "Quest_17562_classes.hpp"
#include "Quest_17562_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_17562.Quest_17562_C.ExecuteUbergraph_Quest_17562
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17562_C::ExecuteUbergraph_Quest_17562(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17562_C", "ExecuteUbergraph_Quest_17562");

	Params::Quest_17562_C_ExecuteUbergraph_Quest_17562 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17562.Quest_17562_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17562_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17562_C", "HandleFinishing");

	Params::Quest_17562_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17562.Quest_17562_C.OnFinished_157EA95745C3E92530233BB59E5B1F37
// (BlueprintCallable, BlueprintEvent)

void UQuest_17562_C::OnFinished_157EA95745C3E92530233BB59E5B1F37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17562_C", "OnFinished_157EA95745C3E92530233BB59E5B1F37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17562.Quest_17562_C.OnStop_157EA95745C3E92530233BB59E5B1F37
// (BlueprintCallable, BlueprintEvent)

void UQuest_17562_C::OnStop_157EA95745C3E92530233BB59E5B1F37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17562_C", "OnStop_157EA95745C3E92530233BB59E5B1F37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_17562.Quest_17562_C.OnDlgClosed_D46E40994DD7F96A57E28481ECD1A69A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17562_C::OnDlgClosed_D46E40994DD7F96A57E28481ECD1A69A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17562_C", "OnDlgClosed_D46E40994DD7F96A57E28481ECD1A69A");

	Params::Quest_17562_C_OnDlgClosed_D46E40994DD7F96A57E28481ECD1A69A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_17562.Quest_17562_C.OnDlgSelectedOption_D46E40994DD7F96A57E28481ECD1A69A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_17562_C::OnDlgSelectedOption_D46E40994DD7F96A57E28481ECD1A69A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_17562_C", "OnDlgSelectedOption_D46E40994DD7F96A57E28481ECD1A69A");

	Params::Quest_17562_C_OnDlgSelectedOption_D46E40994DD7F96A57E28481ECD1A69A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
