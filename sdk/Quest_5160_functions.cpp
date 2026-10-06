#pragma once



// Package: Quest_5160

#include "Basic.hpp"

#include "Quest_5160_classes.hpp"
#include "Quest_5160_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5160.Quest_5160_C.ExecuteUbergraph_Quest_5160
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5160_C::ExecuteUbergraph_Quest_5160(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "ExecuteUbergraph_Quest_5160");

	Params::Quest_5160_C_ExecuteUbergraph_Quest_5160 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5160.Quest_5160_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5160_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "HandleFinishing");

	Params::Quest_5160_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5160.Quest_5160_C.OnSuccess_81DCCB0C4A8E5233CF606E8F895DE644
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5160_C::OnSuccess_81DCCB0C4A8E5233CF606E8F895DE644(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnSuccess_81DCCB0C4A8E5233CF606E8F895DE644");

	Params::Quest_5160_C_OnSuccess_81DCCB0C4A8E5233CF606E8F895DE644 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5160.Quest_5160_C.OnSuccess_E1B30F2B4714FD957EBA7A86B29FD6D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5160_C::OnSuccess_E1B30F2B4714FD957EBA7A86B29FD6D3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnSuccess_E1B30F2B4714FD957EBA7A86B29FD6D3");

	Params::Quest_5160_C_OnSuccess_E1B30F2B4714FD957EBA7A86B29FD6D3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5160.Quest_5160_C.OnSuccess_80C8A6FB4D2833F98F68D08C1E231F0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5160_C::OnSuccess_80C8A6FB4D2833F98F68D08C1E231F0A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnSuccess_80C8A6FB4D2833F98F68D08C1E231F0A");

	Params::Quest_5160_C_OnSuccess_80C8A6FB4D2833F98F68D08C1E231F0A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5160.Quest_5160_C.OnFinished_7980FB424094C8666297DEBC38DE1D9F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5160_C::OnFinished_7980FB424094C8666297DEBC38DE1D9F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnFinished_7980FB424094C8666297DEBC38DE1D9F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5160.Quest_5160_C.OnStop_7980FB424094C8666297DEBC38DE1D9F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5160_C::OnStop_7980FB424094C8666297DEBC38DE1D9F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnStop_7980FB424094C8666297DEBC38DE1D9F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5160.Quest_5160_C.OnDlgClosed_5AA471BE46C133E4EFC41DB28ECF3A75
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5160_C::OnDlgClosed_5AA471BE46C133E4EFC41DB28ECF3A75(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnDlgClosed_5AA471BE46C133E4EFC41DB28ECF3A75");

	Params::Quest_5160_C_OnDlgClosed_5AA471BE46C133E4EFC41DB28ECF3A75 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5160.Quest_5160_C.OnDlgSelectedOption_5AA471BE46C133E4EFC41DB28ECF3A75
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5160_C::OnDlgSelectedOption_5AA471BE46C133E4EFC41DB28ECF3A75(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnDlgSelectedOption_5AA471BE46C133E4EFC41DB28ECF3A75");

	Params::Quest_5160_C_OnDlgSelectedOption_5AA471BE46C133E4EFC41DB28ECF3A75 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5160.Quest_5160_C.OnSuccess_B8FE959947CAEF0D412446A198D2ADBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5160_C::OnSuccess_B8FE959947CAEF0D412446A198D2ADBE(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5160_C", "OnSuccess_B8FE959947CAEF0D412446A198D2ADBE");

	Params::Quest_5160_C_OnSuccess_B8FE959947CAEF0D412446A198D2ADBE Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
