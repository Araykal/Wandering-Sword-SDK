#pragma once



// Package: Quest_5337

#include "Basic.hpp"

#include "Quest_5337_classes.hpp"
#include "Quest_5337_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5337.Quest_5337_C.ExecuteUbergraph_Quest_5337
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5337_C::ExecuteUbergraph_Quest_5337(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5337_C", "ExecuteUbergraph_Quest_5337");

	Params::Quest_5337_C_ExecuteUbergraph_Quest_5337 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5337.Quest_5337_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5337_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5337_C", "HandleFinishing");

	Params::Quest_5337_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5337.Quest_5337_C.OnFinished_990149BC464951F45E69029FDEBF7EC6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5337_C::OnFinished_990149BC464951F45E69029FDEBF7EC6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5337_C", "OnFinished_990149BC464951F45E69029FDEBF7EC6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5337.Quest_5337_C.OnStop_990149BC464951F45E69029FDEBF7EC6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5337_C::OnStop_990149BC464951F45E69029FDEBF7EC6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5337_C", "OnStop_990149BC464951F45E69029FDEBF7EC6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5337.Quest_5337_C.OnDlgClosed_0C44A87A4DCB9DB730150088F483858F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5337_C::OnDlgClosed_0C44A87A4DCB9DB730150088F483858F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5337_C", "OnDlgClosed_0C44A87A4DCB9DB730150088F483858F");

	Params::Quest_5337_C_OnDlgClosed_0C44A87A4DCB9DB730150088F483858F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5337.Quest_5337_C.OnDlgSelectedOption_0C44A87A4DCB9DB730150088F483858F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5337_C::OnDlgSelectedOption_0C44A87A4DCB9DB730150088F483858F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5337_C", "OnDlgSelectedOption_0C44A87A4DCB9DB730150088F483858F");

	Params::Quest_5337_C_OnDlgSelectedOption_0C44A87A4DCB9DB730150088F483858F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5337.Quest_5337_C.OnSuccess_964BDC85431DE986757930BC1EE7A1FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5337_C::OnSuccess_964BDC85431DE986757930BC1EE7A1FE(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5337_C", "OnSuccess_964BDC85431DE986757930BC1EE7A1FE");

	Params::Quest_5337_C_OnSuccess_964BDC85431DE986757930BC1EE7A1FE Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
