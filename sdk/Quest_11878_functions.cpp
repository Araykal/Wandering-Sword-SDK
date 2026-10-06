#pragma once



// Package: Quest_11878

#include "Basic.hpp"

#include "Quest_11878_classes.hpp"
#include "Quest_11878_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11878.Quest_11878_C.ExecuteUbergraph_Quest_11878
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11878_C::ExecuteUbergraph_Quest_11878(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "ExecuteUbergraph_Quest_11878");

	Params::Quest_11878_C_ExecuteUbergraph_Quest_11878 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11878.Quest_11878_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11878_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "HandleFinishing");

	Params::Quest_11878_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11878.Quest_11878_C.OnSuccess_2EC30DBA45A260522BC30FB4D8B62E86
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11878_C::OnSuccess_2EC30DBA45A260522BC30FB4D8B62E86(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "OnSuccess_2EC30DBA45A260522BC30FB4D8B62E86");

	Params::Quest_11878_C_OnSuccess_2EC30DBA45A260522BC30FB4D8B62E86 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11878.Quest_11878_C.OnFinished_6361F41D45D69F518982BB98D5673089
// (BlueprintCallable, BlueprintEvent)

void UQuest_11878_C::OnFinished_6361F41D45D69F518982BB98D5673089()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "OnFinished_6361F41D45D69F518982BB98D5673089");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11878.Quest_11878_C.OnStop_6361F41D45D69F518982BB98D5673089
// (BlueprintCallable, BlueprintEvent)

void UQuest_11878_C::OnStop_6361F41D45D69F518982BB98D5673089()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "OnStop_6361F41D45D69F518982BB98D5673089");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11878.Quest_11878_C.OnDlgClosed_E1A24FBD4B8025404026CEA798133C5A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11878_C::OnDlgClosed_E1A24FBD4B8025404026CEA798133C5A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "OnDlgClosed_E1A24FBD4B8025404026CEA798133C5A");

	Params::Quest_11878_C_OnDlgClosed_E1A24FBD4B8025404026CEA798133C5A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11878.Quest_11878_C.OnDlgSelectedOption_E1A24FBD4B8025404026CEA798133C5A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11878_C::OnDlgSelectedOption_E1A24FBD4B8025404026CEA798133C5A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "OnDlgSelectedOption_E1A24FBD4B8025404026CEA798133C5A");

	Params::Quest_11878_C_OnDlgSelectedOption_E1A24FBD4B8025404026CEA798133C5A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11878.Quest_11878_C.OnSuccess_8C2D350E4BE9758F8204BAAF0EFF63E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11878_C::OnSuccess_8C2D350E4BE9758F8204BAAF0EFF63E8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11878_C", "OnSuccess_8C2D350E4BE9758F8204BAAF0EFF63E8");

	Params::Quest_11878_C_OnSuccess_8C2D350E4BE9758F8204BAAF0EFF63E8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
