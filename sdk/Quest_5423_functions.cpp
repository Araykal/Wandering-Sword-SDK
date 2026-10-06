#pragma once



// Package: Quest_5423

#include "Basic.hpp"

#include "Quest_5423_classes.hpp"
#include "Quest_5423_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5423.Quest_5423_C.ExecuteUbergraph_Quest_5423
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5423_C::ExecuteUbergraph_Quest_5423(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "ExecuteUbergraph_Quest_5423");

	Params::Quest_5423_C_ExecuteUbergraph_Quest_5423 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5423.Quest_5423_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5423_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "HandleFinishing");

	Params::Quest_5423_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5423.Quest_5423_C.OnSuccess_8227CC8B4D802798F154D2B868700499
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5423_C::OnSuccess_8227CC8B4D802798F154D2B868700499(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnSuccess_8227CC8B4D802798F154D2B868700499");

	Params::Quest_5423_C_OnSuccess_8227CC8B4D802798F154D2B868700499 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5423.Quest_5423_C.OnSuccess_8CDD7F444F850D364C14D2969A337B10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5423_C::OnSuccess_8CDD7F444F850D364C14D2969A337B10(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnSuccess_8CDD7F444F850D364C14D2969A337B10");

	Params::Quest_5423_C_OnSuccess_8CDD7F444F850D364C14D2969A337B10 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5423.Quest_5423_C.OnSuccess_F72E9CCD4C1EEEA2CF358DAE5241EFDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5423_C::OnSuccess_F72E9CCD4C1EEEA2CF358DAE5241EFDF(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnSuccess_F72E9CCD4C1EEEA2CF358DAE5241EFDF");

	Params::Quest_5423_C_OnSuccess_F72E9CCD4C1EEEA2CF358DAE5241EFDF Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5423.Quest_5423_C.OnFinished_46DC369B40041268E40DBC8D30460267
// (BlueprintCallable, BlueprintEvent)

void UQuest_5423_C::OnFinished_46DC369B40041268E40DBC8D30460267()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnFinished_46DC369B40041268E40DBC8D30460267");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5423.Quest_5423_C.OnStop_46DC369B40041268E40DBC8D30460267
// (BlueprintCallable, BlueprintEvent)

void UQuest_5423_C::OnStop_46DC369B40041268E40DBC8D30460267()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnStop_46DC369B40041268E40DBC8D30460267");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5423.Quest_5423_C.OnDlgClosed_2526997742A3CFDEBDC5B2848989C1B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5423_C::OnDlgClosed_2526997742A3CFDEBDC5B2848989C1B8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnDlgClosed_2526997742A3CFDEBDC5B2848989C1B8");

	Params::Quest_5423_C_OnDlgClosed_2526997742A3CFDEBDC5B2848989C1B8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5423.Quest_5423_C.OnDlgSelectedOption_2526997742A3CFDEBDC5B2848989C1B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5423_C::OnDlgSelectedOption_2526997742A3CFDEBDC5B2848989C1B8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnDlgSelectedOption_2526997742A3CFDEBDC5B2848989C1B8");

	Params::Quest_5423_C_OnDlgSelectedOption_2526997742A3CFDEBDC5B2848989C1B8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5423.Quest_5423_C.OnSuccess_E4415EBC49F64F3EC2CAF28723F71ED9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5423_C::OnSuccess_E4415EBC49F64F3EC2CAF28723F71ED9(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5423_C", "OnSuccess_E4415EBC49F64F3EC2CAF28723F71ED9");

	Params::Quest_5423_C_OnSuccess_E4415EBC49F64F3EC2CAF28723F71ED9 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
