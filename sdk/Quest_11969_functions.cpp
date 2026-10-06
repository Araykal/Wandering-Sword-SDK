#pragma once



// Package: Quest_11969

#include "Basic.hpp"

#include "Quest_11969_classes.hpp"
#include "Quest_11969_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11969.Quest_11969_C.ExecuteUbergraph_Quest_11969
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11969_C::ExecuteUbergraph_Quest_11969(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11969_C", "ExecuteUbergraph_Quest_11969");

	Params::Quest_11969_C_ExecuteUbergraph_Quest_11969 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11969.Quest_11969_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11969_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11969_C", "HandleFinishing");

	Params::Quest_11969_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11969.Quest_11969_C.OnSuccess_B3F27B964F2ED83CCAE3A39CBB1E56BA
// (BlueprintCallable, BlueprintEvent)

void UQuest_11969_C::OnSuccess_B3F27B964F2ED83CCAE3A39CBB1E56BA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11969_C", "OnSuccess_B3F27B964F2ED83CCAE3A39CBB1E56BA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11969.Quest_11969_C.OnFinished_88903E394AFC2EA45A370FB8F7A50F09
// (BlueprintCallable, BlueprintEvent)

void UQuest_11969_C::OnFinished_88903E394AFC2EA45A370FB8F7A50F09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11969_C", "OnFinished_88903E394AFC2EA45A370FB8F7A50F09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11969.Quest_11969_C.OnStop_88903E394AFC2EA45A370FB8F7A50F09
// (BlueprintCallable, BlueprintEvent)

void UQuest_11969_C::OnStop_88903E394AFC2EA45A370FB8F7A50F09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11969_C", "OnStop_88903E394AFC2EA45A370FB8F7A50F09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11969.Quest_11969_C.OnDlgClosed_A35171F74055C11F6A4E3BADA7C51A63
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11969_C::OnDlgClosed_A35171F74055C11F6A4E3BADA7C51A63(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11969_C", "OnDlgClosed_A35171F74055C11F6A4E3BADA7C51A63");

	Params::Quest_11969_C_OnDlgClosed_A35171F74055C11F6A4E3BADA7C51A63 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11969.Quest_11969_C.OnDlgSelectedOption_A35171F74055C11F6A4E3BADA7C51A63
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11969_C::OnDlgSelectedOption_A35171F74055C11F6A4E3BADA7C51A63(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11969_C", "OnDlgSelectedOption_A35171F74055C11F6A4E3BADA7C51A63");

	Params::Quest_11969_C_OnDlgSelectedOption_A35171F74055C11F6A4E3BADA7C51A63 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
