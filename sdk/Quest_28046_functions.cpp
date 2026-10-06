#pragma once



// Package: Quest_28046

#include "Basic.hpp"

#include "Quest_28046_classes.hpp"
#include "Quest_28046_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28046.Quest_28046_C.ExecuteUbergraph_Quest_28046
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28046_C::ExecuteUbergraph_Quest_28046(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "ExecuteUbergraph_Quest_28046");

	Params::Quest_28046_C_ExecuteUbergraph_Quest_28046 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28046.Quest_28046_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28046_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "HandleFinishing");

	Params::Quest_28046_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28046.Quest_28046_C.OnSuccess_49E032AA49F13CC91EDBF9B6CCD5667B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28046_C::OnSuccess_49E032AA49F13CC91EDBF9B6CCD5667B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "OnSuccess_49E032AA49F13CC91EDBF9B6CCD5667B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28046.Quest_28046_C.OnSuccess_00616F0544E2463E97E1B28EB573231D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28046_C::OnSuccess_00616F0544E2463E97E1B28EB573231D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "OnSuccess_00616F0544E2463E97E1B28EB573231D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28046.Quest_28046_C.OnFinished_D6CFC48945E1A4E16C25ABBA42D25AF0
// (BlueprintCallable, BlueprintEvent)

void UQuest_28046_C::OnFinished_D6CFC48945E1A4E16C25ABBA42D25AF0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "OnFinished_D6CFC48945E1A4E16C25ABBA42D25AF0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28046.Quest_28046_C.OnStop_D6CFC48945E1A4E16C25ABBA42D25AF0
// (BlueprintCallable, BlueprintEvent)

void UQuest_28046_C::OnStop_D6CFC48945E1A4E16C25ABBA42D25AF0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "OnStop_D6CFC48945E1A4E16C25ABBA42D25AF0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28046.Quest_28046_C.OnDlgClosed_7187A91040647B9A22FC4E9DB503AFE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28046_C::OnDlgClosed_7187A91040647B9A22FC4E9DB503AFE4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "OnDlgClosed_7187A91040647B9A22FC4E9DB503AFE4");

	Params::Quest_28046_C_OnDlgClosed_7187A91040647B9A22FC4E9DB503AFE4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28046.Quest_28046_C.OnDlgSelectedOption_7187A91040647B9A22FC4E9DB503AFE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28046_C::OnDlgSelectedOption_7187A91040647B9A22FC4E9DB503AFE4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28046_C", "OnDlgSelectedOption_7187A91040647B9A22FC4E9DB503AFE4");

	Params::Quest_28046_C_OnDlgSelectedOption_7187A91040647B9A22FC4E9DB503AFE4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
