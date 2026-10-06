#pragma once



// Package: Quest_28942

#include "Basic.hpp"

#include "Quest_28942_classes.hpp"
#include "Quest_28942_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28942.Quest_28942_C.ExecuteUbergraph_Quest_28942
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28942_C::ExecuteUbergraph_Quest_28942(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28942_C", "ExecuteUbergraph_Quest_28942");

	Params::Quest_28942_C_ExecuteUbergraph_Quest_28942 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28942.Quest_28942_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28942_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28942_C", "HandleFinishing");

	Params::Quest_28942_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28942.Quest_28942_C.OnFinished_28CD345F4A4A1C2529A82FA166833A01
// (BlueprintCallable, BlueprintEvent)

void UQuest_28942_C::OnFinished_28CD345F4A4A1C2529A82FA166833A01()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28942_C", "OnFinished_28CD345F4A4A1C2529A82FA166833A01");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28942.Quest_28942_C.OnStop_28CD345F4A4A1C2529A82FA166833A01
// (BlueprintCallable, BlueprintEvent)

void UQuest_28942_C::OnStop_28CD345F4A4A1C2529A82FA166833A01()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28942_C", "OnStop_28CD345F4A4A1C2529A82FA166833A01");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28942.Quest_28942_C.OnDlgClosed_DA873F8F4DA90545018F698E6B796CC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28942_C::OnDlgClosed_DA873F8F4DA90545018F698E6B796CC4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28942_C", "OnDlgClosed_DA873F8F4DA90545018F698E6B796CC4");

	Params::Quest_28942_C_OnDlgClosed_DA873F8F4DA90545018F698E6B796CC4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28942.Quest_28942_C.OnDlgSelectedOption_DA873F8F4DA90545018F698E6B796CC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28942_C::OnDlgSelectedOption_DA873F8F4DA90545018F698E6B796CC4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28942_C", "OnDlgSelectedOption_DA873F8F4DA90545018F698E6B796CC4");

	Params::Quest_28942_C_OnDlgSelectedOption_DA873F8F4DA90545018F698E6B796CC4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
