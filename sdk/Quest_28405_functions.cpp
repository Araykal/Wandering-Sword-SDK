#pragma once



// Package: Quest_28405

#include "Basic.hpp"

#include "Quest_28405_classes.hpp"
#include "Quest_28405_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28405.Quest_28405_C.ExecuteUbergraph_Quest_28405
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28405_C::ExecuteUbergraph_Quest_28405(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28405_C", "ExecuteUbergraph_Quest_28405");

	Params::Quest_28405_C_ExecuteUbergraph_Quest_28405 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28405.Quest_28405_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28405_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28405_C", "HandleFinishing");

	Params::Quest_28405_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28405.Quest_28405_C.OnSuccess_4AA92A7846E864D921CD1C9FA3D713CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28405_C::OnSuccess_4AA92A7846E864D921CD1C9FA3D713CC(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28405_C", "OnSuccess_4AA92A7846E864D921CD1C9FA3D713CC");

	Params::Quest_28405_C_OnSuccess_4AA92A7846E864D921CD1C9FA3D713CC Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28405.Quest_28405_C.OnFinished_5F1ADF494FA4BC930728F192F76E53E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28405_C::OnFinished_5F1ADF494FA4BC930728F192F76E53E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28405_C", "OnFinished_5F1ADF494FA4BC930728F192F76E53E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28405.Quest_28405_C.OnStop_5F1ADF494FA4BC930728F192F76E53E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28405_C::OnStop_5F1ADF494FA4BC930728F192F76E53E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28405_C", "OnStop_5F1ADF494FA4BC930728F192F76E53E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28405.Quest_28405_C.OnDlgClosed_E4ABCEF64F9ADFF785E3159B19A14892
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28405_C::OnDlgClosed_E4ABCEF64F9ADFF785E3159B19A14892(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28405_C", "OnDlgClosed_E4ABCEF64F9ADFF785E3159B19A14892");

	Params::Quest_28405_C_OnDlgClosed_E4ABCEF64F9ADFF785E3159B19A14892 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28405.Quest_28405_C.OnDlgSelectedOption_E4ABCEF64F9ADFF785E3159B19A14892
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28405_C::OnDlgSelectedOption_E4ABCEF64F9ADFF785E3159B19A14892(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28405_C", "OnDlgSelectedOption_E4ABCEF64F9ADFF785E3159B19A14892");

	Params::Quest_28405_C_OnDlgSelectedOption_E4ABCEF64F9ADFF785E3159B19A14892 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
