#pragma once



// Package: Quest_5704

#include "Basic.hpp"

#include "Quest_5704_classes.hpp"
#include "Quest_5704_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5704.Quest_5704_C.ExecuteUbergraph_Quest_5704
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5704_C::ExecuteUbergraph_Quest_5704(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5704_C", "ExecuteUbergraph_Quest_5704");

	Params::Quest_5704_C_ExecuteUbergraph_Quest_5704 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5704.Quest_5704_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5704_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5704_C", "HandleFinishing");

	Params::Quest_5704_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5704.Quest_5704_C.OnFinished_655397D64F1141350D0354BC096A94B9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5704_C::OnFinished_655397D64F1141350D0354BC096A94B9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5704_C", "OnFinished_655397D64F1141350D0354BC096A94B9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5704.Quest_5704_C.OnStop_655397D64F1141350D0354BC096A94B9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5704_C::OnStop_655397D64F1141350D0354BC096A94B9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5704_C", "OnStop_655397D64F1141350D0354BC096A94B9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5704.Quest_5704_C.OnDlgClosed_0343E404427D13E36298A58B4E759373
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5704_C::OnDlgClosed_0343E404427D13E36298A58B4E759373(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5704_C", "OnDlgClosed_0343E404427D13E36298A58B4E759373");

	Params::Quest_5704_C_OnDlgClosed_0343E404427D13E36298A58B4E759373 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5704.Quest_5704_C.OnDlgSelectedOption_0343E404427D13E36298A58B4E759373
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5704_C::OnDlgSelectedOption_0343E404427D13E36298A58B4E759373(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5704_C", "OnDlgSelectedOption_0343E404427D13E36298A58B4E759373");

	Params::Quest_5704_C_OnDlgSelectedOption_0343E404427D13E36298A58B4E759373 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5704.Quest_5704_C.OnSuccess_978A717D47A056F9425732AE0567EC9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5704_C::OnSuccess_978A717D47A056F9425732AE0567EC9F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5704_C", "OnSuccess_978A717D47A056F9425732AE0567EC9F");

	Params::Quest_5704_C_OnSuccess_978A717D47A056F9425732AE0567EC9F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
