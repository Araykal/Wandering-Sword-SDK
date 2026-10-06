#pragma once



// Package: Quest_5167

#include "Basic.hpp"

#include "Quest_5167_classes.hpp"
#include "Quest_5167_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5167.Quest_5167_C.ExecuteUbergraph_Quest_5167
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5167_C::ExecuteUbergraph_Quest_5167(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "ExecuteUbergraph_Quest_5167");

	Params::Quest_5167_C_ExecuteUbergraph_Quest_5167 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5167.Quest_5167_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5167_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "HandleFinishing");

	Params::Quest_5167_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5167.Quest_5167_C.OnSuccess_EC7C7341406C3CB2F30A31BD96A856D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5167_C::OnSuccess_EC7C7341406C3CB2F30A31BD96A856D7(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnSuccess_EC7C7341406C3CB2F30A31BD96A856D7");

	Params::Quest_5167_C_OnSuccess_EC7C7341406C3CB2F30A31BD96A856D7 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5167.Quest_5167_C.OnSuccess_EBDEA7344E86E08E9CCACCA3E6A7E7FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5167_C::OnSuccess_EBDEA7344E86E08E9CCACCA3E6A7E7FA(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnSuccess_EBDEA7344E86E08E9CCACCA3E6A7E7FA");

	Params::Quest_5167_C_OnSuccess_EBDEA7344E86E08E9CCACCA3E6A7E7FA Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5167.Quest_5167_C.OnSuccess_8F64E1094A1ED835A25B0186EBDE8B8F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5167_C::OnSuccess_8F64E1094A1ED835A25B0186EBDE8B8F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnSuccess_8F64E1094A1ED835A25B0186EBDE8B8F");

	Params::Quest_5167_C_OnSuccess_8F64E1094A1ED835A25B0186EBDE8B8F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5167.Quest_5167_C.OnFinished_1ABC279C49A6B659538A3C9395AF261D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5167_C::OnFinished_1ABC279C49A6B659538A3C9395AF261D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnFinished_1ABC279C49A6B659538A3C9395AF261D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5167.Quest_5167_C.OnStop_1ABC279C49A6B659538A3C9395AF261D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5167_C::OnStop_1ABC279C49A6B659538A3C9395AF261D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnStop_1ABC279C49A6B659538A3C9395AF261D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5167.Quest_5167_C.OnDlgClosed_AE2A5E074772F4779AE8888C2B33B91D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5167_C::OnDlgClosed_AE2A5E074772F4779AE8888C2B33B91D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnDlgClosed_AE2A5E074772F4779AE8888C2B33B91D");

	Params::Quest_5167_C_OnDlgClosed_AE2A5E074772F4779AE8888C2B33B91D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5167.Quest_5167_C.OnDlgSelectedOption_AE2A5E074772F4779AE8888C2B33B91D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5167_C::OnDlgSelectedOption_AE2A5E074772F4779AE8888C2B33B91D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnDlgSelectedOption_AE2A5E074772F4779AE8888C2B33B91D");

	Params::Quest_5167_C_OnDlgSelectedOption_AE2A5E074772F4779AE8888C2B33B91D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5167.Quest_5167_C.OnSuccess_818C53944A6EAFC24874C99D38899C10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5167_C::OnSuccess_818C53944A6EAFC24874C99D38899C10(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5167_C", "OnSuccess_818C53944A6EAFC24874C99D38899C10");

	Params::Quest_5167_C_OnSuccess_818C53944A6EAFC24874C99D38899C10 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
