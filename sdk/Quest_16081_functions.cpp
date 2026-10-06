#pragma once



// Package: Quest_16081

#include "Basic.hpp"

#include "Quest_16081_classes.hpp"
#include "Quest_16081_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16081.Quest_16081_C.ExecuteUbergraph_Quest_16081
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16081_C::ExecuteUbergraph_Quest_16081(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "ExecuteUbergraph_Quest_16081");

	Params::Quest_16081_C_ExecuteUbergraph_Quest_16081 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16081.Quest_16081_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16081_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "HandleFinishing");

	Params::Quest_16081_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16081.Quest_16081_C.OnSuccess_5BAEBE304CC35667019000B692D4A9BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16081_C::OnSuccess_5BAEBE304CC35667019000B692D4A9BD(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnSuccess_5BAEBE304CC35667019000B692D4A9BD");

	Params::Quest_16081_C_OnSuccess_5BAEBE304CC35667019000B692D4A9BD Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16081.Quest_16081_C.OnSuccess_E383149F483CC143F7170DB1C165B068
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16081_C::OnSuccess_E383149F483CC143F7170DB1C165B068(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnSuccess_E383149F483CC143F7170DB1C165B068");

	Params::Quest_16081_C_OnSuccess_E383149F483CC143F7170DB1C165B068 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16081.Quest_16081_C.OnSuccess_DD59AC2B4AFB86DD683BED8889700803
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16081_C::OnSuccess_DD59AC2B4AFB86DD683BED8889700803(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnSuccess_DD59AC2B4AFB86DD683BED8889700803");

	Params::Quest_16081_C_OnSuccess_DD59AC2B4AFB86DD683BED8889700803 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16081.Quest_16081_C.OnFinished_33F01D534211A8C2EEFE739A53E14D51
// (BlueprintCallable, BlueprintEvent)

void UQuest_16081_C::OnFinished_33F01D534211A8C2EEFE739A53E14D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnFinished_33F01D534211A8C2EEFE739A53E14D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16081.Quest_16081_C.OnStop_33F01D534211A8C2EEFE739A53E14D51
// (BlueprintCallable, BlueprintEvent)

void UQuest_16081_C::OnStop_33F01D534211A8C2EEFE739A53E14D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnStop_33F01D534211A8C2EEFE739A53E14D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16081.Quest_16081_C.OnDlgClosed_EE4000A945B268E7109D2F89C2C96373
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16081_C::OnDlgClosed_EE4000A945B268E7109D2F89C2C96373(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnDlgClosed_EE4000A945B268E7109D2F89C2C96373");

	Params::Quest_16081_C_OnDlgClosed_EE4000A945B268E7109D2F89C2C96373 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16081.Quest_16081_C.OnDlgSelectedOption_EE4000A945B268E7109D2F89C2C96373
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16081_C::OnDlgSelectedOption_EE4000A945B268E7109D2F89C2C96373(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnDlgSelectedOption_EE4000A945B268E7109D2F89C2C96373");

	Params::Quest_16081_C_OnDlgSelectedOption_EE4000A945B268E7109D2F89C2C96373 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16081.Quest_16081_C.OnSuccess_561C05C041EA2CAB025DED8E1B0804ED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16081_C::OnSuccess_561C05C041EA2CAB025DED8E1B0804ED(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16081_C", "OnSuccess_561C05C041EA2CAB025DED8E1B0804ED");

	Params::Quest_16081_C_OnSuccess_561C05C041EA2CAB025DED8E1B0804ED Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
