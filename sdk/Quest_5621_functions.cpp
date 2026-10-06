#pragma once



// Package: Quest_5621

#include "Basic.hpp"

#include "Quest_5621_classes.hpp"
#include "Quest_5621_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5621.Quest_5621_C.ExecuteUbergraph_Quest_5621
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5621_C::ExecuteUbergraph_Quest_5621(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5621_C", "ExecuteUbergraph_Quest_5621");

	Params::Quest_5621_C_ExecuteUbergraph_Quest_5621 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5621.Quest_5621_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5621_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5621_C", "HandleFinishing");

	Params::Quest_5621_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5621.Quest_5621_C.OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5621_C::OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5621_C", "OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48");

	Params::Quest_5621_C_OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5621.Quest_5621_C.OnFinished_84A40B154A302B910D37E3AC5329F5E9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5621_C::OnFinished_84A40B154A302B910D37E3AC5329F5E9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5621_C", "OnFinished_84A40B154A302B910D37E3AC5329F5E9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5621.Quest_5621_C.OnStop_84A40B154A302B910D37E3AC5329F5E9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5621_C::OnStop_84A40B154A302B910D37E3AC5329F5E9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5621_C", "OnStop_84A40B154A302B910D37E3AC5329F5E9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5621.Quest_5621_C.OnDlgClosed_56DE03D745548F592048E09FE2FF0D37
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5621_C::OnDlgClosed_56DE03D745548F592048E09FE2FF0D37(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5621_C", "OnDlgClosed_56DE03D745548F592048E09FE2FF0D37");

	Params::Quest_5621_C_OnDlgClosed_56DE03D745548F592048E09FE2FF0D37 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5621.Quest_5621_C.OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5621_C::OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5621_C", "OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37");

	Params::Quest_5621_C_OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
