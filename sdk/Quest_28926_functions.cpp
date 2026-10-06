#pragma once



// Package: Quest_28926

#include "Basic.hpp"

#include "Quest_28926_classes.hpp"
#include "Quest_28926_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28926.Quest_28926_C.ExecuteUbergraph_Quest_28926
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28926_C::ExecuteUbergraph_Quest_28926(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28926_C", "ExecuteUbergraph_Quest_28926");

	Params::Quest_28926_C_ExecuteUbergraph_Quest_28926 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28926.Quest_28926_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28926_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28926_C", "HandleFinishing");

	Params::Quest_28926_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28926.Quest_28926_C.OnSuccess_AAF3B9D74C666EB5FCA6BBA6E77CCFE5
// (BlueprintCallable, BlueprintEvent)

void UQuest_28926_C::OnSuccess_AAF3B9D74C666EB5FCA6BBA6E77CCFE5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28926_C", "OnSuccess_AAF3B9D74C666EB5FCA6BBA6E77CCFE5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28926.Quest_28926_C.OnFinished_597A15EA461F7373A570BF87E222E237
// (BlueprintCallable, BlueprintEvent)

void UQuest_28926_C::OnFinished_597A15EA461F7373A570BF87E222E237()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28926_C", "OnFinished_597A15EA461F7373A570BF87E222E237");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28926.Quest_28926_C.OnStop_597A15EA461F7373A570BF87E222E237
// (BlueprintCallable, BlueprintEvent)

void UQuest_28926_C::OnStop_597A15EA461F7373A570BF87E222E237()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28926_C", "OnStop_597A15EA461F7373A570BF87E222E237");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28926.Quest_28926_C.OnDlgClosed_98BAEB8944EEC948677C80BED07A53DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28926_C::OnDlgClosed_98BAEB8944EEC948677C80BED07A53DD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28926_C", "OnDlgClosed_98BAEB8944EEC948677C80BED07A53DD");

	Params::Quest_28926_C_OnDlgClosed_98BAEB8944EEC948677C80BED07A53DD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28926.Quest_28926_C.OnDlgSelectedOption_98BAEB8944EEC948677C80BED07A53DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28926_C::OnDlgSelectedOption_98BAEB8944EEC948677C80BED07A53DD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28926_C", "OnDlgSelectedOption_98BAEB8944EEC948677C80BED07A53DD");

	Params::Quest_28926_C_OnDlgSelectedOption_98BAEB8944EEC948677C80BED07A53DD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
