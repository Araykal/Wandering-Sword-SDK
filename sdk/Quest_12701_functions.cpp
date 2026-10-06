#pragma once



// Package: Quest_12701

#include "Basic.hpp"

#include "Quest_12701_classes.hpp"
#include "Quest_12701_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12701.Quest_12701_C.ExecuteUbergraph_Quest_12701
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12701_C::ExecuteUbergraph_Quest_12701(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12701_C", "ExecuteUbergraph_Quest_12701");

	Params::Quest_12701_C_ExecuteUbergraph_Quest_12701 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12701.Quest_12701_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12701_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12701_C", "HandleFinishing");

	Params::Quest_12701_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12701.Quest_12701_C.OnSuccess_33249BCD48BE4E8417B4FAAAC9EFD5B2
// (BlueprintCallable, BlueprintEvent)

void UQuest_12701_C::OnSuccess_33249BCD48BE4E8417B4FAAAC9EFD5B2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12701_C", "OnSuccess_33249BCD48BE4E8417B4FAAAC9EFD5B2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12701.Quest_12701_C.OnFinished_47D9C84D47B9C2B86BCC578BCCAB5B1F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12701_C::OnFinished_47D9C84D47B9C2B86BCC578BCCAB5B1F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12701_C", "OnFinished_47D9C84D47B9C2B86BCC578BCCAB5B1F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12701.Quest_12701_C.OnStop_47D9C84D47B9C2B86BCC578BCCAB5B1F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12701_C::OnStop_47D9C84D47B9C2B86BCC578BCCAB5B1F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12701_C", "OnStop_47D9C84D47B9C2B86BCC578BCCAB5B1F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12701.Quest_12701_C.OnDlgClosed_E55424E6457502BF95E88FB2CCCF3C88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12701_C::OnDlgClosed_E55424E6457502BF95E88FB2CCCF3C88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12701_C", "OnDlgClosed_E55424E6457502BF95E88FB2CCCF3C88");

	Params::Quest_12701_C_OnDlgClosed_E55424E6457502BF95E88FB2CCCF3C88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12701.Quest_12701_C.OnDlgSelectedOption_E55424E6457502BF95E88FB2CCCF3C88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12701_C::OnDlgSelectedOption_E55424E6457502BF95E88FB2CCCF3C88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12701_C", "OnDlgSelectedOption_E55424E6457502BF95E88FB2CCCF3C88");

	Params::Quest_12701_C_OnDlgSelectedOption_E55424E6457502BF95E88FB2CCCF3C88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
