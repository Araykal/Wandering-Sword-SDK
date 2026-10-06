#pragma once



// Package: Quest_5165

#include "Basic.hpp"

#include "Quest_5165_classes.hpp"
#include "Quest_5165_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5165.Quest_5165_C.ExecuteUbergraph_Quest_5165
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5165_C::ExecuteUbergraph_Quest_5165(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5165_C", "ExecuteUbergraph_Quest_5165");

	Params::Quest_5165_C_ExecuteUbergraph_Quest_5165 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5165.Quest_5165_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5165_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5165_C", "HandleFinishing");

	Params::Quest_5165_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5165.Quest_5165_C.OnFinished_6EB473264CD8FC632018A3BF17B25BD1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5165_C::OnFinished_6EB473264CD8FC632018A3BF17B25BD1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5165_C", "OnFinished_6EB473264CD8FC632018A3BF17B25BD1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5165.Quest_5165_C.OnStop_6EB473264CD8FC632018A3BF17B25BD1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5165_C::OnStop_6EB473264CD8FC632018A3BF17B25BD1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5165_C", "OnStop_6EB473264CD8FC632018A3BF17B25BD1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5165.Quest_5165_C.OnDlgClosed_961B11AE442F66A433280789A9FD1A47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5165_C::OnDlgClosed_961B11AE442F66A433280789A9FD1A47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5165_C", "OnDlgClosed_961B11AE442F66A433280789A9FD1A47");

	Params::Quest_5165_C_OnDlgClosed_961B11AE442F66A433280789A9FD1A47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5165.Quest_5165_C.OnDlgSelectedOption_961B11AE442F66A433280789A9FD1A47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5165_C::OnDlgSelectedOption_961B11AE442F66A433280789A9FD1A47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5165_C", "OnDlgSelectedOption_961B11AE442F66A433280789A9FD1A47");

	Params::Quest_5165_C_OnDlgSelectedOption_961B11AE442F66A433280789A9FD1A47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5165.Quest_5165_C.OnSuccess_DF1B00C4400A5E0C63F6E7B1F09408C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5165_C::OnSuccess_DF1B00C4400A5E0C63F6E7B1F09408C3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5165_C", "OnSuccess_DF1B00C4400A5E0C63F6E7B1F09408C3");

	Params::Quest_5165_C_OnSuccess_DF1B00C4400A5E0C63F6E7B1F09408C3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
