#pragma once



// Package: Quest_5385

#include "Basic.hpp"

#include "Quest_5385_classes.hpp"
#include "Quest_5385_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5385.Quest_5385_C.ExecuteUbergraph_Quest_5385
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5385_C::ExecuteUbergraph_Quest_5385(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "ExecuteUbergraph_Quest_5385");

	Params::Quest_5385_C_ExecuteUbergraph_Quest_5385 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5385.Quest_5385_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5385_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "HandleFinishing");

	Params::Quest_5385_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5385.Quest_5385_C.OnSuccess_BEEA36D44C889E2685C652AD1AA7AE72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5385_C::OnSuccess_BEEA36D44C889E2685C652AD1AA7AE72(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnSuccess_BEEA36D44C889E2685C652AD1AA7AE72");

	Params::Quest_5385_C_OnSuccess_BEEA36D44C889E2685C652AD1AA7AE72 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5385.Quest_5385_C.OnSuccess_8D57F89040C580DE3752BF85561115B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5385_C::OnSuccess_8D57F89040C580DE3752BF85561115B4(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnSuccess_8D57F89040C580DE3752BF85561115B4");

	Params::Quest_5385_C_OnSuccess_8D57F89040C580DE3752BF85561115B4 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5385.Quest_5385_C.OnSuccess_FA30FB7147189C1AD1057F850A890BA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5385_C::OnSuccess_FA30FB7147189C1AD1057F850A890BA3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnSuccess_FA30FB7147189C1AD1057F850A890BA3");

	Params::Quest_5385_C_OnSuccess_FA30FB7147189C1AD1057F850A890BA3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5385.Quest_5385_C.OnFinished_4BDD7BFF4443AFF4FE8A618F4AE8D6D1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5385_C::OnFinished_4BDD7BFF4443AFF4FE8A618F4AE8D6D1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnFinished_4BDD7BFF4443AFF4FE8A618F4AE8D6D1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5385.Quest_5385_C.OnStop_4BDD7BFF4443AFF4FE8A618F4AE8D6D1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5385_C::OnStop_4BDD7BFF4443AFF4FE8A618F4AE8D6D1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnStop_4BDD7BFF4443AFF4FE8A618F4AE8D6D1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5385.Quest_5385_C.OnDlgClosed_0A7A3A1A4CF0F6AD7458C4B80DB6C76B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5385_C::OnDlgClosed_0A7A3A1A4CF0F6AD7458C4B80DB6C76B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnDlgClosed_0A7A3A1A4CF0F6AD7458C4B80DB6C76B");

	Params::Quest_5385_C_OnDlgClosed_0A7A3A1A4CF0F6AD7458C4B80DB6C76B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5385.Quest_5385_C.OnDlgSelectedOption_0A7A3A1A4CF0F6AD7458C4B80DB6C76B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5385_C::OnDlgSelectedOption_0A7A3A1A4CF0F6AD7458C4B80DB6C76B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnDlgSelectedOption_0A7A3A1A4CF0F6AD7458C4B80DB6C76B");

	Params::Quest_5385_C_OnDlgSelectedOption_0A7A3A1A4CF0F6AD7458C4B80DB6C76B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5385.Quest_5385_C.OnSuccess_09673654457CD713FAFE2C9DBEAF13A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5385_C::OnSuccess_09673654457CD713FAFE2C9DBEAF13A7(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5385_C", "OnSuccess_09673654457CD713FAFE2C9DBEAF13A7");

	Params::Quest_5385_C_OnSuccess_09673654457CD713FAFE2C9DBEAF13A7 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
