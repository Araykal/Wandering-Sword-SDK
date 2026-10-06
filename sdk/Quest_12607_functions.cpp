#pragma once



// Package: Quest_12607

#include "Basic.hpp"

#include "Quest_12607_classes.hpp"
#include "Quest_12607_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12607.Quest_12607_C.ExecuteUbergraph_Quest_12607
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12607_C::ExecuteUbergraph_Quest_12607(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12607_C", "ExecuteUbergraph_Quest_12607");

	Params::Quest_12607_C_ExecuteUbergraph_Quest_12607 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12607.Quest_12607_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12607_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12607_C", "HandleFinishing");

	Params::Quest_12607_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12607.Quest_12607_C.OnFinished_F05208AD4850BCAF88A76B8CE42BB081
// (BlueprintCallable, BlueprintEvent)

void UQuest_12607_C::OnFinished_F05208AD4850BCAF88A76B8CE42BB081()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12607_C", "OnFinished_F05208AD4850BCAF88A76B8CE42BB081");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12607.Quest_12607_C.OnStop_F05208AD4850BCAF88A76B8CE42BB081
// (BlueprintCallable, BlueprintEvent)

void UQuest_12607_C::OnStop_F05208AD4850BCAF88A76B8CE42BB081()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12607_C", "OnStop_F05208AD4850BCAF88A76B8CE42BB081");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12607.Quest_12607_C.OnDlgClosed_6D7BF4AF43233DB2432842AF6AEEE82D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12607_C::OnDlgClosed_6D7BF4AF43233DB2432842AF6AEEE82D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12607_C", "OnDlgClosed_6D7BF4AF43233DB2432842AF6AEEE82D");

	Params::Quest_12607_C_OnDlgClosed_6D7BF4AF43233DB2432842AF6AEEE82D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12607.Quest_12607_C.OnDlgSelectedOption_6D7BF4AF43233DB2432842AF6AEEE82D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12607_C::OnDlgSelectedOption_6D7BF4AF43233DB2432842AF6AEEE82D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12607_C", "OnDlgSelectedOption_6D7BF4AF43233DB2432842AF6AEEE82D");

	Params::Quest_12607_C_OnDlgSelectedOption_6D7BF4AF43233DB2432842AF6AEEE82D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12607.Quest_12607_C.OnSuccess_1F317B664C1025523B4DD08E61F27FC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12607_C::OnSuccess_1F317B664C1025523B4DD08E61F27FC8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12607_C", "OnSuccess_1F317B664C1025523B4DD08E61F27FC8");

	Params::Quest_12607_C_OnSuccess_1F317B664C1025523B4DD08E61F27FC8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
