#pragma once



// Package: Quest_5095

#include "Basic.hpp"

#include "Quest_5095_classes.hpp"
#include "Quest_5095_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5095.Quest_5095_C.ExecuteUbergraph_Quest_5095
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5095_C::ExecuteUbergraph_Quest_5095(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "ExecuteUbergraph_Quest_5095");

	Params::Quest_5095_C_ExecuteUbergraph_Quest_5095 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5095.Quest_5095_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5095_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "HandleFinishing");

	Params::Quest_5095_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5095.Quest_5095_C.OnSuccess_7A53A3244862589F0BAE0AA3B59F2564
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5095_C::OnSuccess_7A53A3244862589F0BAE0AA3B59F2564(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnSuccess_7A53A3244862589F0BAE0AA3B59F2564");

	Params::Quest_5095_C_OnSuccess_7A53A3244862589F0BAE0AA3B59F2564 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5095.Quest_5095_C.OnSuccess_7B4225EF422A4ACBD58D08BF8BF6796A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5095_C::OnSuccess_7B4225EF422A4ACBD58D08BF8BF6796A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnSuccess_7B4225EF422A4ACBD58D08BF8BF6796A");

	Params::Quest_5095_C_OnSuccess_7B4225EF422A4ACBD58D08BF8BF6796A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5095.Quest_5095_C.OnSuccess_41DEA5E9451BBD39FA8845AA2A73F8B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5095_C::OnSuccess_41DEA5E9451BBD39FA8845AA2A73F8B4(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnSuccess_41DEA5E9451BBD39FA8845AA2A73F8B4");

	Params::Quest_5095_C_OnSuccess_41DEA5E9451BBD39FA8845AA2A73F8B4 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5095.Quest_5095_C.OnFinished_82B18DB8415A83AE7659039F1CE9D63D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5095_C::OnFinished_82B18DB8415A83AE7659039F1CE9D63D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnFinished_82B18DB8415A83AE7659039F1CE9D63D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5095.Quest_5095_C.OnStop_82B18DB8415A83AE7659039F1CE9D63D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5095_C::OnStop_82B18DB8415A83AE7659039F1CE9D63D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnStop_82B18DB8415A83AE7659039F1CE9D63D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5095.Quest_5095_C.OnDlgClosed_B00917864D160F144BC54DA10E14DCD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5095_C::OnDlgClosed_B00917864D160F144BC54DA10E14DCD1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnDlgClosed_B00917864D160F144BC54DA10E14DCD1");

	Params::Quest_5095_C_OnDlgClosed_B00917864D160F144BC54DA10E14DCD1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5095.Quest_5095_C.OnDlgSelectedOption_B00917864D160F144BC54DA10E14DCD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5095_C::OnDlgSelectedOption_B00917864D160F144BC54DA10E14DCD1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnDlgSelectedOption_B00917864D160F144BC54DA10E14DCD1");

	Params::Quest_5095_C_OnDlgSelectedOption_B00917864D160F144BC54DA10E14DCD1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5095.Quest_5095_C.OnSuccess_232DE5734BD2D4C1058ACCA4535740D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5095_C::OnSuccess_232DE5734BD2D4C1058ACCA4535740D3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5095_C", "OnSuccess_232DE5734BD2D4C1058ACCA4535740D3");

	Params::Quest_5095_C_OnSuccess_232DE5734BD2D4C1058ACCA4535740D3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
