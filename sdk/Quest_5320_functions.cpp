#pragma once



// Package: Quest_5320

#include "Basic.hpp"

#include "Quest_5320_classes.hpp"
#include "Quest_5320_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5320.Quest_5320_C.ExecuteUbergraph_Quest_5320
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5320_C::ExecuteUbergraph_Quest_5320(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "ExecuteUbergraph_Quest_5320");

	Params::Quest_5320_C_ExecuteUbergraph_Quest_5320 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5320.Quest_5320_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5320_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "HandleFinishing");

	Params::Quest_5320_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5320.Quest_5320_C.OnSuccess_DC51537940CAA4AABDFBF9976F142E34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5320_C::OnSuccess_DC51537940CAA4AABDFBF9976F142E34(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "OnSuccess_DC51537940CAA4AABDFBF9976F142E34");

	Params::Quest_5320_C_OnSuccess_DC51537940CAA4AABDFBF9976F142E34 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5320.Quest_5320_C.OnFinished_8D4E90004652457396221FA8C46BF646
// (BlueprintCallable, BlueprintEvent)

void UQuest_5320_C::OnFinished_8D4E90004652457396221FA8C46BF646()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "OnFinished_8D4E90004652457396221FA8C46BF646");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5320.Quest_5320_C.OnStop_8D4E90004652457396221FA8C46BF646
// (BlueprintCallable, BlueprintEvent)

void UQuest_5320_C::OnStop_8D4E90004652457396221FA8C46BF646()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "OnStop_8D4E90004652457396221FA8C46BF646");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5320.Quest_5320_C.OnDlgClosed_AD32E9F24EEDA1332EBD75B7A460D5EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5320_C::OnDlgClosed_AD32E9F24EEDA1332EBD75B7A460D5EF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "OnDlgClosed_AD32E9F24EEDA1332EBD75B7A460D5EF");

	Params::Quest_5320_C_OnDlgClosed_AD32E9F24EEDA1332EBD75B7A460D5EF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5320.Quest_5320_C.OnDlgSelectedOption_AD32E9F24EEDA1332EBD75B7A460D5EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5320_C::OnDlgSelectedOption_AD32E9F24EEDA1332EBD75B7A460D5EF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "OnDlgSelectedOption_AD32E9F24EEDA1332EBD75B7A460D5EF");

	Params::Quest_5320_C_OnDlgSelectedOption_AD32E9F24EEDA1332EBD75B7A460D5EF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5320.Quest_5320_C.OnSuccess_0F48D4AA463E2D0F6E1002BA914C11A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5320_C::OnSuccess_0F48D4AA463E2D0F6E1002BA914C11A9(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5320_C", "OnSuccess_0F48D4AA463E2D0F6E1002BA914C11A9");

	Params::Quest_5320_C_OnSuccess_0F48D4AA463E2D0F6E1002BA914C11A9 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
