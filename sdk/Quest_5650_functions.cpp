#pragma once



// Package: Quest_5650

#include "Basic.hpp"

#include "Quest_5650_classes.hpp"
#include "Quest_5650_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5650.Quest_5650_C.ExecuteUbergraph_Quest_5650
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5650_C::ExecuteUbergraph_Quest_5650(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "ExecuteUbergraph_Quest_5650");

	Params::Quest_5650_C_ExecuteUbergraph_Quest_5650 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5650.Quest_5650_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5650_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "HandleFinishing");

	Params::Quest_5650_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5650.Quest_5650_C.OnSuccess_8F5BE9574A0DFCD7B68E55AA7EBA0AD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5650_C::OnSuccess_8F5BE9574A0DFCD7B68E55AA7EBA0AD2(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "OnSuccess_8F5BE9574A0DFCD7B68E55AA7EBA0AD2");

	Params::Quest_5650_C_OnSuccess_8F5BE9574A0DFCD7B68E55AA7EBA0AD2 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5650.Quest_5650_C.OnSuccess_D7EF48364C9DC78C4EC797BE547CCEE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5650_C::OnSuccess_D7EF48364C9DC78C4EC797BE547CCEE9(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "OnSuccess_D7EF48364C9DC78C4EC797BE547CCEE9");

	Params::Quest_5650_C_OnSuccess_D7EF48364C9DC78C4EC797BE547CCEE9 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5650.Quest_5650_C.OnFinished_475C61FB4BD5258EECC5509FD2ADEA1E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5650_C::OnFinished_475C61FB4BD5258EECC5509FD2ADEA1E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "OnFinished_475C61FB4BD5258EECC5509FD2ADEA1E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5650.Quest_5650_C.OnStop_475C61FB4BD5258EECC5509FD2ADEA1E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5650_C::OnStop_475C61FB4BD5258EECC5509FD2ADEA1E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "OnStop_475C61FB4BD5258EECC5509FD2ADEA1E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5650.Quest_5650_C.OnDlgClosed_20B8DBB8465D691BF5E5CF893209A48B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5650_C::OnDlgClosed_20B8DBB8465D691BF5E5CF893209A48B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "OnDlgClosed_20B8DBB8465D691BF5E5CF893209A48B");

	Params::Quest_5650_C_OnDlgClosed_20B8DBB8465D691BF5E5CF893209A48B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5650.Quest_5650_C.OnDlgSelectedOption_20B8DBB8465D691BF5E5CF893209A48B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5650_C::OnDlgSelectedOption_20B8DBB8465D691BF5E5CF893209A48B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "OnDlgSelectedOption_20B8DBB8465D691BF5E5CF893209A48B");

	Params::Quest_5650_C_OnDlgSelectedOption_20B8DBB8465D691BF5E5CF893209A48B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5650.Quest_5650_C.OnSuccess_B2F463CA419218ABF566149F59B85C9A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5650_C::OnSuccess_B2F463CA419218ABF566149F59B85C9A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5650_C", "OnSuccess_B2F463CA419218ABF566149F59B85C9A");

	Params::Quest_5650_C_OnSuccess_B2F463CA419218ABF566149F59B85C9A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
