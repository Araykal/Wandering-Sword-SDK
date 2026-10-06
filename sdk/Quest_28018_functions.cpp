#pragma once



// Package: Quest_28018

#include "Basic.hpp"

#include "Quest_28018_classes.hpp"
#include "Quest_28018_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28018.Quest_28018_C.ExecuteUbergraph_Quest_28018
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28018_C::ExecuteUbergraph_Quest_28018(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28018_C", "ExecuteUbergraph_Quest_28018");

	Params::Quest_28018_C_ExecuteUbergraph_Quest_28018 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28018.Quest_28018_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28018_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28018_C", "HandleFinishing");

	Params::Quest_28018_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28018.Quest_28018_C.OnFinished_7E4231D94232F058A56CA898FF91A0ED
// (BlueprintCallable, BlueprintEvent)

void UQuest_28018_C::OnFinished_7E4231D94232F058A56CA898FF91A0ED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28018_C", "OnFinished_7E4231D94232F058A56CA898FF91A0ED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28018.Quest_28018_C.OnStop_7E4231D94232F058A56CA898FF91A0ED
// (BlueprintCallable, BlueprintEvent)

void UQuest_28018_C::OnStop_7E4231D94232F058A56CA898FF91A0ED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28018_C", "OnStop_7E4231D94232F058A56CA898FF91A0ED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28018.Quest_28018_C.OnDlgClosed_2887D64E4BF17E3E91A5F38681EB9BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28018_C::OnDlgClosed_2887D64E4BF17E3E91A5F38681EB9BED(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28018_C", "OnDlgClosed_2887D64E4BF17E3E91A5F38681EB9BED");

	Params::Quest_28018_C_OnDlgClosed_2887D64E4BF17E3E91A5F38681EB9BED Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28018.Quest_28018_C.OnDlgSelectedOption_2887D64E4BF17E3E91A5F38681EB9BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28018_C::OnDlgSelectedOption_2887D64E4BF17E3E91A5F38681EB9BED(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28018_C", "OnDlgSelectedOption_2887D64E4BF17E3E91A5F38681EB9BED");

	Params::Quest_28018_C_OnDlgSelectedOption_2887D64E4BF17E3E91A5F38681EB9BED Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28018.Quest_28018_C.OnSuccess_7BAEBCFE46C24761E866DDA00FACCCAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28018_C::OnSuccess_7BAEBCFE46C24761E866DDA00FACCCAD(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28018_C", "OnSuccess_7BAEBCFE46C24761E866DDA00FACCCAD");

	Params::Quest_28018_C_OnSuccess_7BAEBCFE46C24761E866DDA00FACCCAD Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
