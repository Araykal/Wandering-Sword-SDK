#pragma once



// Package: Quest_5581

#include "Basic.hpp"

#include "Quest_5581_classes.hpp"
#include "Quest_5581_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5581.Quest_5581_C.ExecuteUbergraph_Quest_5581
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5581_C::ExecuteUbergraph_Quest_5581(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5581_C", "ExecuteUbergraph_Quest_5581");

	Params::Quest_5581_C_ExecuteUbergraph_Quest_5581 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5581.Quest_5581_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5581_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5581_C", "HandleFinishing");

	Params::Quest_5581_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5581.Quest_5581_C.OnFinished_CA63FEA14A71877B26046AB9A4C19A99
// (BlueprintCallable, BlueprintEvent)

void UQuest_5581_C::OnFinished_CA63FEA14A71877B26046AB9A4C19A99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5581_C", "OnFinished_CA63FEA14A71877B26046AB9A4C19A99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5581.Quest_5581_C.OnStop_CA63FEA14A71877B26046AB9A4C19A99
// (BlueprintCallable, BlueprintEvent)

void UQuest_5581_C::OnStop_CA63FEA14A71877B26046AB9A4C19A99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5581_C", "OnStop_CA63FEA14A71877B26046AB9A4C19A99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5581.Quest_5581_C.OnDlgClosed_43A7D8F7412C4EEA99A05BAF9301DEE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5581_C::OnDlgClosed_43A7D8F7412C4EEA99A05BAF9301DEE6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5581_C", "OnDlgClosed_43A7D8F7412C4EEA99A05BAF9301DEE6");

	Params::Quest_5581_C_OnDlgClosed_43A7D8F7412C4EEA99A05BAF9301DEE6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5581.Quest_5581_C.OnDlgSelectedOption_43A7D8F7412C4EEA99A05BAF9301DEE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5581_C::OnDlgSelectedOption_43A7D8F7412C4EEA99A05BAF9301DEE6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5581_C", "OnDlgSelectedOption_43A7D8F7412C4EEA99A05BAF9301DEE6");

	Params::Quest_5581_C_OnDlgSelectedOption_43A7D8F7412C4EEA99A05BAF9301DEE6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
