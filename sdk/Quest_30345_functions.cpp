#pragma once



// Package: Quest_30345

#include "Basic.hpp"

#include "Quest_30345_classes.hpp"
#include "Quest_30345_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30345.Quest_30345_C.ExecuteUbergraph_Quest_30345
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30345_C::ExecuteUbergraph_Quest_30345(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30345_C", "ExecuteUbergraph_Quest_30345");

	Params::Quest_30345_C_ExecuteUbergraph_Quest_30345 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30345.Quest_30345_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30345_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30345_C", "HandleFinishing");

	Params::Quest_30345_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30345.Quest_30345_C.OnSuccess_8C4529F54AD568B71F26EF8CF8B494CF
// (BlueprintCallable, BlueprintEvent)

void UQuest_30345_C::OnSuccess_8C4529F54AD568B71F26EF8CF8B494CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30345_C", "OnSuccess_8C4529F54AD568B71F26EF8CF8B494CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30345.Quest_30345_C.OnFinished_5EADD13C438B6C4766DCC3950FFE952E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30345_C::OnFinished_5EADD13C438B6C4766DCC3950FFE952E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30345_C", "OnFinished_5EADD13C438B6C4766DCC3950FFE952E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30345.Quest_30345_C.OnStop_5EADD13C438B6C4766DCC3950FFE952E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30345_C::OnStop_5EADD13C438B6C4766DCC3950FFE952E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30345_C", "OnStop_5EADD13C438B6C4766DCC3950FFE952E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30345.Quest_30345_C.OnDlgClosed_DF512EEA4FD8E3584B34D48AFC462500
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30345_C::OnDlgClosed_DF512EEA4FD8E3584B34D48AFC462500(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30345_C", "OnDlgClosed_DF512EEA4FD8E3584B34D48AFC462500");

	Params::Quest_30345_C_OnDlgClosed_DF512EEA4FD8E3584B34D48AFC462500 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30345.Quest_30345_C.OnDlgSelectedOption_DF512EEA4FD8E3584B34D48AFC462500
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30345_C::OnDlgSelectedOption_DF512EEA4FD8E3584B34D48AFC462500(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30345_C", "OnDlgSelectedOption_DF512EEA4FD8E3584B34D48AFC462500");

	Params::Quest_30345_C_OnDlgSelectedOption_DF512EEA4FD8E3584B34D48AFC462500 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
