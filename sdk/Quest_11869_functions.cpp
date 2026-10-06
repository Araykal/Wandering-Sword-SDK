#pragma once



// Package: Quest_11869

#include "Basic.hpp"

#include "Quest_11869_classes.hpp"
#include "Quest_11869_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11869.Quest_11869_C.ExecuteUbergraph_Quest_11869
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11869_C::ExecuteUbergraph_Quest_11869(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "ExecuteUbergraph_Quest_11869");

	Params::Quest_11869_C_ExecuteUbergraph_Quest_11869 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11869.Quest_11869_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11869_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "HandleFinishing");

	Params::Quest_11869_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11869.Quest_11869_C.OnSuccess_C5A1D764486610CEE841C58CEBB53DAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11869_C::OnSuccess_C5A1D764486610CEE841C58CEBB53DAA(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "OnSuccess_C5A1D764486610CEE841C58CEBB53DAA");

	Params::Quest_11869_C_OnSuccess_C5A1D764486610CEE841C58CEBB53DAA Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11869.Quest_11869_C.OnFinished_8F2D13644E528480961D29B569277B6E
// (BlueprintCallable, BlueprintEvent)

void UQuest_11869_C::OnFinished_8F2D13644E528480961D29B569277B6E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "OnFinished_8F2D13644E528480961D29B569277B6E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11869.Quest_11869_C.OnStop_8F2D13644E528480961D29B569277B6E
// (BlueprintCallable, BlueprintEvent)

void UQuest_11869_C::OnStop_8F2D13644E528480961D29B569277B6E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "OnStop_8F2D13644E528480961D29B569277B6E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11869.Quest_11869_C.OnDlgClosed_C65B1EB047B3C75C9FA89AA5256D8415
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11869_C::OnDlgClosed_C65B1EB047B3C75C9FA89AA5256D8415(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "OnDlgClosed_C65B1EB047B3C75C9FA89AA5256D8415");

	Params::Quest_11869_C_OnDlgClosed_C65B1EB047B3C75C9FA89AA5256D8415 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11869.Quest_11869_C.OnDlgSelectedOption_C65B1EB047B3C75C9FA89AA5256D8415
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11869_C::OnDlgSelectedOption_C65B1EB047B3C75C9FA89AA5256D8415(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "OnDlgSelectedOption_C65B1EB047B3C75C9FA89AA5256D8415");

	Params::Quest_11869_C_OnDlgSelectedOption_C65B1EB047B3C75C9FA89AA5256D8415 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11869.Quest_11869_C.OnSuccess_BA0A352944D6C47F70A98AB2B80FCE7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11869_C::OnSuccess_BA0A352944D6C47F70A98AB2B80FCE7A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11869_C", "OnSuccess_BA0A352944D6C47F70A98AB2B80FCE7A");

	Params::Quest_11869_C_OnSuccess_BA0A352944D6C47F70A98AB2B80FCE7A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
