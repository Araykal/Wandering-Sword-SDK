#pragma once



// Package: Quest_5422

#include "Basic.hpp"

#include "Quest_5422_classes.hpp"
#include "Quest_5422_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5422.Quest_5422_C.ExecuteUbergraph_Quest_5422
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5422_C::ExecuteUbergraph_Quest_5422(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "ExecuteUbergraph_Quest_5422");

	Params::Quest_5422_C_ExecuteUbergraph_Quest_5422 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5422.Quest_5422_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5422_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "HandleFinishing");

	Params::Quest_5422_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5422.Quest_5422_C.OnSuccess_9FAB8E5A47A8BCA47E2810B56A28EE2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5422_C::OnSuccess_9FAB8E5A47A8BCA47E2810B56A28EE2D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnSuccess_9FAB8E5A47A8BCA47E2810B56A28EE2D");

	Params::Quest_5422_C_OnSuccess_9FAB8E5A47A8BCA47E2810B56A28EE2D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5422.Quest_5422_C.OnSuccess_B7AB85FF4948E29ED42FECA65916BD10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5422_C::OnSuccess_B7AB85FF4948E29ED42FECA65916BD10(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnSuccess_B7AB85FF4948E29ED42FECA65916BD10");

	Params::Quest_5422_C_OnSuccess_B7AB85FF4948E29ED42FECA65916BD10 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5422.Quest_5422_C.OnSuccess_8FEA62E742C5031C0FAE17B8F1DA322C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5422_C::OnSuccess_8FEA62E742C5031C0FAE17B8F1DA322C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnSuccess_8FEA62E742C5031C0FAE17B8F1DA322C");

	Params::Quest_5422_C_OnSuccess_8FEA62E742C5031C0FAE17B8F1DA322C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5422.Quest_5422_C.OnFinished_B26ED87D4B42230F52476BBA31C82086
// (BlueprintCallable, BlueprintEvent)

void UQuest_5422_C::OnFinished_B26ED87D4B42230F52476BBA31C82086()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnFinished_B26ED87D4B42230F52476BBA31C82086");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5422.Quest_5422_C.OnStop_B26ED87D4B42230F52476BBA31C82086
// (BlueprintCallable, BlueprintEvent)

void UQuest_5422_C::OnStop_B26ED87D4B42230F52476BBA31C82086()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnStop_B26ED87D4B42230F52476BBA31C82086");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5422.Quest_5422_C.OnDlgClosed_3AAB117D49E59185759165BA68559F49
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5422_C::OnDlgClosed_3AAB117D49E59185759165BA68559F49(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnDlgClosed_3AAB117D49E59185759165BA68559F49");

	Params::Quest_5422_C_OnDlgClosed_3AAB117D49E59185759165BA68559F49 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5422.Quest_5422_C.OnDlgSelectedOption_3AAB117D49E59185759165BA68559F49
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5422_C::OnDlgSelectedOption_3AAB117D49E59185759165BA68559F49(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnDlgSelectedOption_3AAB117D49E59185759165BA68559F49");

	Params::Quest_5422_C_OnDlgSelectedOption_3AAB117D49E59185759165BA68559F49 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5422.Quest_5422_C.OnSuccess_E161BE68482EEC97E49D6697F1CF8EB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5422_C::OnSuccess_E161BE68482EEC97E49D6697F1CF8EB7(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5422_C", "OnSuccess_E161BE68482EEC97E49D6697F1CF8EB7");

	Params::Quest_5422_C_OnSuccess_E161BE68482EEC97E49D6697F1CF8EB7 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
