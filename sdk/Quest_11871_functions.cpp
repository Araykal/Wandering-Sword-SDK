#pragma once



// Package: Quest_11871

#include "Basic.hpp"

#include "Quest_11871_classes.hpp"
#include "Quest_11871_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11871.Quest_11871_C.ExecuteUbergraph_Quest_11871
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11871_C::ExecuteUbergraph_Quest_11871(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "ExecuteUbergraph_Quest_11871");

	Params::Quest_11871_C_ExecuteUbergraph_Quest_11871 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11871.Quest_11871_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11871_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "HandleFinishing");

	Params::Quest_11871_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11871.Quest_11871_C.OnSuccess_B4A69D394024B7482CC5F38FDFE76C54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11871_C::OnSuccess_B4A69D394024B7482CC5F38FDFE76C54(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "OnSuccess_B4A69D394024B7482CC5F38FDFE76C54");

	Params::Quest_11871_C_OnSuccess_B4A69D394024B7482CC5F38FDFE76C54 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11871.Quest_11871_C.OnSuccess_DCAFE0A34A7FA75829AC238A9989E406
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11871_C::OnSuccess_DCAFE0A34A7FA75829AC238A9989E406(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "OnSuccess_DCAFE0A34A7FA75829AC238A9989E406");

	Params::Quest_11871_C_OnSuccess_DCAFE0A34A7FA75829AC238A9989E406 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11871.Quest_11871_C.OnFinished_816E97AB4334816D930F33A30243C28F
// (BlueprintCallable, BlueprintEvent)

void UQuest_11871_C::OnFinished_816E97AB4334816D930F33A30243C28F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "OnFinished_816E97AB4334816D930F33A30243C28F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11871.Quest_11871_C.OnStop_816E97AB4334816D930F33A30243C28F
// (BlueprintCallable, BlueprintEvent)

void UQuest_11871_C::OnStop_816E97AB4334816D930F33A30243C28F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "OnStop_816E97AB4334816D930F33A30243C28F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11871.Quest_11871_C.OnDlgClosed_3BF4A08C4C0B921A58B56DA71EE627C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11871_C::OnDlgClosed_3BF4A08C4C0B921A58B56DA71EE627C1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "OnDlgClosed_3BF4A08C4C0B921A58B56DA71EE627C1");

	Params::Quest_11871_C_OnDlgClosed_3BF4A08C4C0B921A58B56DA71EE627C1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11871.Quest_11871_C.OnDlgSelectedOption_3BF4A08C4C0B921A58B56DA71EE627C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11871_C::OnDlgSelectedOption_3BF4A08C4C0B921A58B56DA71EE627C1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "OnDlgSelectedOption_3BF4A08C4C0B921A58B56DA71EE627C1");

	Params::Quest_11871_C_OnDlgSelectedOption_3BF4A08C4C0B921A58B56DA71EE627C1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11871.Quest_11871_C.OnSuccess_931882F547084ED9C76E7F9C43398E7C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11871_C::OnSuccess_931882F547084ED9C76E7F9C43398E7C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11871_C", "OnSuccess_931882F547084ED9C76E7F9C43398E7C");

	Params::Quest_11871_C_OnSuccess_931882F547084ED9C76E7F9C43398E7C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
