#pragma once



// Package: Quest_12672

#include "Basic.hpp"

#include "Quest_12672_classes.hpp"
#include "Quest_12672_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12672.Quest_12672_C.ExecuteUbergraph_Quest_12672
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12672_C::ExecuteUbergraph_Quest_12672(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "ExecuteUbergraph_Quest_12672");

	Params::Quest_12672_C_ExecuteUbergraph_Quest_12672 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12672.Quest_12672_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12672_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "HandleFinishing");

	Params::Quest_12672_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12672.Quest_12672_C.OnSuccess_4262BC214D149EBDD8A6B8AF5A747459
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12672_C::OnSuccess_4262BC214D149EBDD8A6B8AF5A747459(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "OnSuccess_4262BC214D149EBDD8A6B8AF5A747459");

	Params::Quest_12672_C_OnSuccess_4262BC214D149EBDD8A6B8AF5A747459 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12672.Quest_12672_C.OnFinished_C42BE2D24C30CB15194531B8DDE469C1
// (BlueprintCallable, BlueprintEvent)

void UQuest_12672_C::OnFinished_C42BE2D24C30CB15194531B8DDE469C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "OnFinished_C42BE2D24C30CB15194531B8DDE469C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12672.Quest_12672_C.OnStop_C42BE2D24C30CB15194531B8DDE469C1
// (BlueprintCallable, BlueprintEvent)

void UQuest_12672_C::OnStop_C42BE2D24C30CB15194531B8DDE469C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "OnStop_C42BE2D24C30CB15194531B8DDE469C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12672.Quest_12672_C.OnDlgClosed_BEAC4A2748C0A3AD40EEEFA22D2CFDE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12672_C::OnDlgClosed_BEAC4A2748C0A3AD40EEEFA22D2CFDE3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "OnDlgClosed_BEAC4A2748C0A3AD40EEEFA22D2CFDE3");

	Params::Quest_12672_C_OnDlgClosed_BEAC4A2748C0A3AD40EEEFA22D2CFDE3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12672.Quest_12672_C.OnDlgSelectedOption_BEAC4A2748C0A3AD40EEEFA22D2CFDE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12672_C::OnDlgSelectedOption_BEAC4A2748C0A3AD40EEEFA22D2CFDE3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "OnDlgSelectedOption_BEAC4A2748C0A3AD40EEEFA22D2CFDE3");

	Params::Quest_12672_C_OnDlgSelectedOption_BEAC4A2748C0A3AD40EEEFA22D2CFDE3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12672.Quest_12672_C.OnSuccess_4FC7ED10499244A699A231A2D40B052E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12672_C::OnSuccess_4FC7ED10499244A699A231A2D40B052E(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12672_C", "OnSuccess_4FC7ED10499244A699A231A2D40B052E");

	Params::Quest_12672_C_OnSuccess_4FC7ED10499244A699A231A2D40B052E Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
