#pragma once



// Package: Quest_30333

#include "Basic.hpp"

#include "Quest_30333_classes.hpp"
#include "Quest_30333_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30333.Quest_30333_C.ExecuteUbergraph_Quest_30333
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30333_C::ExecuteUbergraph_Quest_30333(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30333_C", "ExecuteUbergraph_Quest_30333");

	Params::Quest_30333_C_ExecuteUbergraph_Quest_30333 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30333.Quest_30333_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30333_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30333_C", "HandleFinishing");

	Params::Quest_30333_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30333.Quest_30333_C.OnFinished_DA73C9C54860E7FF9414F1970A27D667
// (BlueprintCallable, BlueprintEvent)

void UQuest_30333_C::OnFinished_DA73C9C54860E7FF9414F1970A27D667()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30333_C", "OnFinished_DA73C9C54860E7FF9414F1970A27D667");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30333.Quest_30333_C.OnStop_DA73C9C54860E7FF9414F1970A27D667
// (BlueprintCallable, BlueprintEvent)

void UQuest_30333_C::OnStop_DA73C9C54860E7FF9414F1970A27D667()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30333_C", "OnStop_DA73C9C54860E7FF9414F1970A27D667");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30333.Quest_30333_C.OnDlgClosed_3EF840E14F21266138B54782D3E883FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30333_C::OnDlgClosed_3EF840E14F21266138B54782D3E883FF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30333_C", "OnDlgClosed_3EF840E14F21266138B54782D3E883FF");

	Params::Quest_30333_C_OnDlgClosed_3EF840E14F21266138B54782D3E883FF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30333.Quest_30333_C.OnDlgSelectedOption_3EF840E14F21266138B54782D3E883FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30333_C::OnDlgSelectedOption_3EF840E14F21266138B54782D3E883FF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30333_C", "OnDlgSelectedOption_3EF840E14F21266138B54782D3E883FF");

	Params::Quest_30333_C_OnDlgSelectedOption_3EF840E14F21266138B54782D3E883FF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
