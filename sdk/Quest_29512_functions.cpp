#pragma once



// Package: Quest_29512

#include "Basic.hpp"

#include "Quest_29512_classes.hpp"
#include "Quest_29512_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29512.Quest_29512_C.ExecuteUbergraph_Quest_29512
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29512_C::ExecuteUbergraph_Quest_29512(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29512_C", "ExecuteUbergraph_Quest_29512");

	Params::Quest_29512_C_ExecuteUbergraph_Quest_29512 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29512.Quest_29512_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29512_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29512_C", "HandleFinishing");

	Params::Quest_29512_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29512.Quest_29512_C.OnFinished_2B7A216A4BA316D61B4E56B009D07BEF
// (BlueprintCallable, BlueprintEvent)

void UQuest_29512_C::OnFinished_2B7A216A4BA316D61B4E56B009D07BEF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29512_C", "OnFinished_2B7A216A4BA316D61B4E56B009D07BEF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29512.Quest_29512_C.OnStop_2B7A216A4BA316D61B4E56B009D07BEF
// (BlueprintCallable, BlueprintEvent)

void UQuest_29512_C::OnStop_2B7A216A4BA316D61B4E56B009D07BEF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29512_C", "OnStop_2B7A216A4BA316D61B4E56B009D07BEF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29512.Quest_29512_C.OnDlgClosed_948D76424A5710C4397095B41F7415EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29512_C::OnDlgClosed_948D76424A5710C4397095B41F7415EE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29512_C", "OnDlgClosed_948D76424A5710C4397095B41F7415EE");

	Params::Quest_29512_C_OnDlgClosed_948D76424A5710C4397095B41F7415EE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29512.Quest_29512_C.OnDlgSelectedOption_948D76424A5710C4397095B41F7415EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29512_C::OnDlgSelectedOption_948D76424A5710C4397095B41F7415EE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29512_C", "OnDlgSelectedOption_948D76424A5710C4397095B41F7415EE");

	Params::Quest_29512_C_OnDlgSelectedOption_948D76424A5710C4397095B41F7415EE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29512.Quest_29512_C.OnSuccess_0303C74C4CAE7BC38FA4C3A0DC7836C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29512_C::OnSuccess_0303C74C4CAE7BC38FA4C3A0DC7836C5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29512_C", "OnSuccess_0303C74C4CAE7BC38FA4C3A0DC7836C5");

	Params::Quest_29512_C_OnSuccess_0303C74C4CAE7BC38FA4C3A0DC7836C5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
