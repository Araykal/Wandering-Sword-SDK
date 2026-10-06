#pragma once



// Package: Quest_5112

#include "Basic.hpp"

#include "Quest_5112_classes.hpp"
#include "Quest_5112_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5112.Quest_5112_C.ExecuteUbergraph_Quest_5112
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5112_C::ExecuteUbergraph_Quest_5112(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5112_C", "ExecuteUbergraph_Quest_5112");

	Params::Quest_5112_C_ExecuteUbergraph_Quest_5112 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5112.Quest_5112_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5112_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5112_C", "HandleFinishing");

	Params::Quest_5112_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5112.Quest_5112_C.OnSuccess_A0D0428749C553F1DF74D6AAC684E441
// (BlueprintCallable, BlueprintEvent)

void UQuest_5112_C::OnSuccess_A0D0428749C553F1DF74D6AAC684E441()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5112_C", "OnSuccess_A0D0428749C553F1DF74D6AAC684E441");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5112.Quest_5112_C.OnFinished_87ECBF7844B3ABE2E7BA6B85BD83F69F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5112_C::OnFinished_87ECBF7844B3ABE2E7BA6B85BD83F69F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5112_C", "OnFinished_87ECBF7844B3ABE2E7BA6B85BD83F69F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5112.Quest_5112_C.OnStop_87ECBF7844B3ABE2E7BA6B85BD83F69F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5112_C::OnStop_87ECBF7844B3ABE2E7BA6B85BD83F69F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5112_C", "OnStop_87ECBF7844B3ABE2E7BA6B85BD83F69F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5112.Quest_5112_C.OnDlgClosed_235244CE4A2AC7328D39D3AD36CE4235
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5112_C::OnDlgClosed_235244CE4A2AC7328D39D3AD36CE4235(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5112_C", "OnDlgClosed_235244CE4A2AC7328D39D3AD36CE4235");

	Params::Quest_5112_C_OnDlgClosed_235244CE4A2AC7328D39D3AD36CE4235 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5112.Quest_5112_C.OnDlgSelectedOption_235244CE4A2AC7328D39D3AD36CE4235
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5112_C::OnDlgSelectedOption_235244CE4A2AC7328D39D3AD36CE4235(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5112_C", "OnDlgSelectedOption_235244CE4A2AC7328D39D3AD36CE4235");

	Params::Quest_5112_C_OnDlgSelectedOption_235244CE4A2AC7328D39D3AD36CE4235 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
