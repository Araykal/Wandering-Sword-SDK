#pragma once



// Package: Quest_5735

#include "Basic.hpp"

#include "Quest_5735_classes.hpp"
#include "Quest_5735_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5735.Quest_5735_C.ExecuteUbergraph_Quest_5735
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5735_C::ExecuteUbergraph_Quest_5735(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5735_C", "ExecuteUbergraph_Quest_5735");

	Params::Quest_5735_C_ExecuteUbergraph_Quest_5735 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5735.Quest_5735_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5735_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5735_C", "HandleFinishing");

	Params::Quest_5735_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5735.Quest_5735_C.OnFinished_3B43F705443686B408FC7487E767EB03
// (BlueprintCallable, BlueprintEvent)

void UQuest_5735_C::OnFinished_3B43F705443686B408FC7487E767EB03()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5735_C", "OnFinished_3B43F705443686B408FC7487E767EB03");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5735.Quest_5735_C.OnStop_3B43F705443686B408FC7487E767EB03
// (BlueprintCallable, BlueprintEvent)

void UQuest_5735_C::OnStop_3B43F705443686B408FC7487E767EB03()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5735_C", "OnStop_3B43F705443686B408FC7487E767EB03");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5735.Quest_5735_C.OnDlgClosed_7CDECAC14E55D3234AFCDBABA597BBC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5735_C::OnDlgClosed_7CDECAC14E55D3234AFCDBABA597BBC3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5735_C", "OnDlgClosed_7CDECAC14E55D3234AFCDBABA597BBC3");

	Params::Quest_5735_C_OnDlgClosed_7CDECAC14E55D3234AFCDBABA597BBC3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5735.Quest_5735_C.OnDlgSelectedOption_7CDECAC14E55D3234AFCDBABA597BBC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5735_C::OnDlgSelectedOption_7CDECAC14E55D3234AFCDBABA597BBC3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5735_C", "OnDlgSelectedOption_7CDECAC14E55D3234AFCDBABA597BBC3");

	Params::Quest_5735_C_OnDlgSelectedOption_7CDECAC14E55D3234AFCDBABA597BBC3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5735.Quest_5735_C.OnSuccess_744151F44196270CACCC84B20A23A936
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5735_C::OnSuccess_744151F44196270CACCC84B20A23A936(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5735_C", "OnSuccess_744151F44196270CACCC84B20A23A936");

	Params::Quest_5735_C_OnSuccess_744151F44196270CACCC84B20A23A936 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
