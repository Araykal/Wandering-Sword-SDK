#pragma once



// Package: Quest_11937

#include "Basic.hpp"

#include "Quest_11937_classes.hpp"
#include "Quest_11937_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11937.Quest_11937_C.ExecuteUbergraph_Quest_11937
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11937_C::ExecuteUbergraph_Quest_11937(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "ExecuteUbergraph_Quest_11937");

	Params::Quest_11937_C_ExecuteUbergraph_Quest_11937 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11937.Quest_11937_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11937_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "HandleFinishing");

	Params::Quest_11937_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11937.Quest_11937_C.OnSuccess_E69F94F44C99B00661328CBD54D961EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11937_C::OnSuccess_E69F94F44C99B00661328CBD54D961EF(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnSuccess_E69F94F44C99B00661328CBD54D961EF");

	Params::Quest_11937_C_OnSuccess_E69F94F44C99B00661328CBD54D961EF Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11937.Quest_11937_C.OnSuccess_7A89BB314ECC3831EB6F04B25F7BCFB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11937_C::OnSuccess_7A89BB314ECC3831EB6F04B25F7BCFB4(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnSuccess_7A89BB314ECC3831EB6F04B25F7BCFB4");

	Params::Quest_11937_C_OnSuccess_7A89BB314ECC3831EB6F04B25F7BCFB4 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11937.Quest_11937_C.OnSuccess_CB8B1A4246C4D54E197ACABE66790EC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11937_C::OnSuccess_CB8B1A4246C4D54E197ACABE66790EC3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnSuccess_CB8B1A4246C4D54E197ACABE66790EC3");

	Params::Quest_11937_C_OnSuccess_CB8B1A4246C4D54E197ACABE66790EC3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11937.Quest_11937_C.OnFinished_DA02AAF54B149F0A37DEBC81E16928D8
// (BlueprintCallable, BlueprintEvent)

void UQuest_11937_C::OnFinished_DA02AAF54B149F0A37DEBC81E16928D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnFinished_DA02AAF54B149F0A37DEBC81E16928D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11937.Quest_11937_C.OnStop_DA02AAF54B149F0A37DEBC81E16928D8
// (BlueprintCallable, BlueprintEvent)

void UQuest_11937_C::OnStop_DA02AAF54B149F0A37DEBC81E16928D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnStop_DA02AAF54B149F0A37DEBC81E16928D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11937.Quest_11937_C.OnDlgClosed_3AA976874D85AF014B37E4BBDDCC808F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11937_C::OnDlgClosed_3AA976874D85AF014B37E4BBDDCC808F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnDlgClosed_3AA976874D85AF014B37E4BBDDCC808F");

	Params::Quest_11937_C_OnDlgClosed_3AA976874D85AF014B37E4BBDDCC808F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11937.Quest_11937_C.OnDlgSelectedOption_3AA976874D85AF014B37E4BBDDCC808F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11937_C::OnDlgSelectedOption_3AA976874D85AF014B37E4BBDDCC808F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnDlgSelectedOption_3AA976874D85AF014B37E4BBDDCC808F");

	Params::Quest_11937_C_OnDlgSelectedOption_3AA976874D85AF014B37E4BBDDCC808F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11937.Quest_11937_C.OnSuccess_DD35F17D48E4A4A700421BBC93F22BB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11937_C::OnSuccess_DD35F17D48E4A4A700421BBC93F22BB5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11937_C", "OnSuccess_DD35F17D48E4A4A700421BBC93F22BB5");

	Params::Quest_11937_C_OnSuccess_DD35F17D48E4A4A700421BBC93F22BB5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
