#pragma once



// Package: Quest_29812

#include "Basic.hpp"

#include "Quest_29812_classes.hpp"
#include "Quest_29812_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29812.Quest_29812_C.ExecuteUbergraph_Quest_29812
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29812_C::ExecuteUbergraph_Quest_29812(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29812_C", "ExecuteUbergraph_Quest_29812");

	Params::Quest_29812_C_ExecuteUbergraph_Quest_29812 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29812.Quest_29812_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29812_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29812_C", "HandleFinishing");

	Params::Quest_29812_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29812.Quest_29812_C.OnSuccess_B36AEBC64EC923D39705BFACB573F36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29812_C::OnSuccess_B36AEBC64EC923D39705BFACB573F36E(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29812_C", "OnSuccess_B36AEBC64EC923D39705BFACB573F36E");

	Params::Quest_29812_C_OnSuccess_B36AEBC64EC923D39705BFACB573F36E Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29812.Quest_29812_C.OnFinished_28FD06D0499E40F8A4FC908E5A5864D0
// (BlueprintCallable, BlueprintEvent)

void UQuest_29812_C::OnFinished_28FD06D0499E40F8A4FC908E5A5864D0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29812_C", "OnFinished_28FD06D0499E40F8A4FC908E5A5864D0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29812.Quest_29812_C.OnStop_28FD06D0499E40F8A4FC908E5A5864D0
// (BlueprintCallable, BlueprintEvent)

void UQuest_29812_C::OnStop_28FD06D0499E40F8A4FC908E5A5864D0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29812_C", "OnStop_28FD06D0499E40F8A4FC908E5A5864D0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29812.Quest_29812_C.OnDlgClosed_19C2B7054744D795BEF42BADA1DC0C7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29812_C::OnDlgClosed_19C2B7054744D795BEF42BADA1DC0C7D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29812_C", "OnDlgClosed_19C2B7054744D795BEF42BADA1DC0C7D");

	Params::Quest_29812_C_OnDlgClosed_19C2B7054744D795BEF42BADA1DC0C7D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29812.Quest_29812_C.OnDlgSelectedOption_19C2B7054744D795BEF42BADA1DC0C7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29812_C::OnDlgSelectedOption_19C2B7054744D795BEF42BADA1DC0C7D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29812_C", "OnDlgSelectedOption_19C2B7054744D795BEF42BADA1DC0C7D");

	Params::Quest_29812_C_OnDlgSelectedOption_19C2B7054744D795BEF42BADA1DC0C7D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
