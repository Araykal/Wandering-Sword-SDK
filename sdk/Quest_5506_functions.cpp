#pragma once



// Package: Quest_5506

#include "Basic.hpp"

#include "Quest_5506_classes.hpp"
#include "Quest_5506_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5506.Quest_5506_C.ExecuteUbergraph_Quest_5506
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5506_C::ExecuteUbergraph_Quest_5506(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "ExecuteUbergraph_Quest_5506");

	Params::Quest_5506_C_ExecuteUbergraph_Quest_5506 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5506.Quest_5506_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5506_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "HandleFinishing");

	Params::Quest_5506_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5506.Quest_5506_C.OnSuccess_9203FF63418811ED3BFFD894A358CC2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5506_C::OnSuccess_9203FF63418811ED3BFFD894A358CC2E(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnSuccess_9203FF63418811ED3BFFD894A358CC2E");

	Params::Quest_5506_C_OnSuccess_9203FF63418811ED3BFFD894A358CC2E Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5506.Quest_5506_C.OnSuccess_265D6715436A6F639616F2ACDDECCCD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5506_C::OnSuccess_265D6715436A6F639616F2ACDDECCCD3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnSuccess_265D6715436A6F639616F2ACDDECCCD3");

	Params::Quest_5506_C_OnSuccess_265D6715436A6F639616F2ACDDECCCD3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5506.Quest_5506_C.OnSuccess_13E947DC43ED2BE5518D6B8F2AC08317
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5506_C::OnSuccess_13E947DC43ED2BE5518D6B8F2AC08317(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnSuccess_13E947DC43ED2BE5518D6B8F2AC08317");

	Params::Quest_5506_C_OnSuccess_13E947DC43ED2BE5518D6B8F2AC08317 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5506.Quest_5506_C.OnFinished_AF19538847186F5349887BA06AD94DAC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5506_C::OnFinished_AF19538847186F5349887BA06AD94DAC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnFinished_AF19538847186F5349887BA06AD94DAC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5506.Quest_5506_C.OnStop_AF19538847186F5349887BA06AD94DAC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5506_C::OnStop_AF19538847186F5349887BA06AD94DAC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnStop_AF19538847186F5349887BA06AD94DAC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5506.Quest_5506_C.OnDlgClosed_34ACCFC34875FC3E9324038EFB0F23DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5506_C::OnDlgClosed_34ACCFC34875FC3E9324038EFB0F23DB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnDlgClosed_34ACCFC34875FC3E9324038EFB0F23DB");

	Params::Quest_5506_C_OnDlgClosed_34ACCFC34875FC3E9324038EFB0F23DB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5506.Quest_5506_C.OnDlgSelectedOption_34ACCFC34875FC3E9324038EFB0F23DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5506_C::OnDlgSelectedOption_34ACCFC34875FC3E9324038EFB0F23DB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnDlgSelectedOption_34ACCFC34875FC3E9324038EFB0F23DB");

	Params::Quest_5506_C_OnDlgSelectedOption_34ACCFC34875FC3E9324038EFB0F23DB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5506.Quest_5506_C.OnSuccess_101D9D5B48EA1FFFD2D173A3B7EC84E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5506_C::OnSuccess_101D9D5B48EA1FFFD2D173A3B7EC84E2(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5506_C", "OnSuccess_101D9D5B48EA1FFFD2D173A3B7EC84E2");

	Params::Quest_5506_C_OnSuccess_101D9D5B48EA1FFFD2D173A3B7EC84E2 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
