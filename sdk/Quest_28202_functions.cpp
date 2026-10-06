#pragma once



// Package: Quest_28202

#include "Basic.hpp"

#include "Quest_28202_classes.hpp"
#include "Quest_28202_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28202.Quest_28202_C.ExecuteUbergraph_Quest_28202
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28202_C::ExecuteUbergraph_Quest_28202(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28202_C", "ExecuteUbergraph_Quest_28202");

	Params::Quest_28202_C_ExecuteUbergraph_Quest_28202 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28202.Quest_28202_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28202_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28202_C", "HandleFinishing");

	Params::Quest_28202_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28202.Quest_28202_C.OnSuccess_05C1475C4F5484741031EC9AAFB3CF23
// (BlueprintCallable, BlueprintEvent)

void UQuest_28202_C::OnSuccess_05C1475C4F5484741031EC9AAFB3CF23()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28202_C", "OnSuccess_05C1475C4F5484741031EC9AAFB3CF23");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28202.Quest_28202_C.OnFinished_D8316FF14F7E73B0737B78916E845DCE
// (BlueprintCallable, BlueprintEvent)

void UQuest_28202_C::OnFinished_D8316FF14F7E73B0737B78916E845DCE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28202_C", "OnFinished_D8316FF14F7E73B0737B78916E845DCE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28202.Quest_28202_C.OnStop_D8316FF14F7E73B0737B78916E845DCE
// (BlueprintCallable, BlueprintEvent)

void UQuest_28202_C::OnStop_D8316FF14F7E73B0737B78916E845DCE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28202_C", "OnStop_D8316FF14F7E73B0737B78916E845DCE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28202.Quest_28202_C.OnDlgClosed_9720322444CE987850C5D68558935230
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28202_C::OnDlgClosed_9720322444CE987850C5D68558935230(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28202_C", "OnDlgClosed_9720322444CE987850C5D68558935230");

	Params::Quest_28202_C_OnDlgClosed_9720322444CE987850C5D68558935230 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28202.Quest_28202_C.OnDlgSelectedOption_9720322444CE987850C5D68558935230
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28202_C::OnDlgSelectedOption_9720322444CE987850C5D68558935230(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28202_C", "OnDlgSelectedOption_9720322444CE987850C5D68558935230");

	Params::Quest_28202_C_OnDlgSelectedOption_9720322444CE987850C5D68558935230 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
