#pragma once



// Package: Quest_12670

#include "Basic.hpp"

#include "Quest_12670_classes.hpp"
#include "Quest_12670_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12670.Quest_12670_C.ExecuteUbergraph_Quest_12670
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12670_C::ExecuteUbergraph_Quest_12670(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12670_C", "ExecuteUbergraph_Quest_12670");

	Params::Quest_12670_C_ExecuteUbergraph_Quest_12670 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12670.Quest_12670_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12670_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12670_C", "HandleFinishing");

	Params::Quest_12670_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12670.Quest_12670_C.OnSuccess_775717EE431DE7FDAB17BB8BEEEBB954
// (BlueprintCallable, BlueprintEvent)

void UQuest_12670_C::OnSuccess_775717EE431DE7FDAB17BB8BEEEBB954()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12670_C", "OnSuccess_775717EE431DE7FDAB17BB8BEEEBB954");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12670.Quest_12670_C.OnFinished_150FC102469A55914D752AA004F865C0
// (BlueprintCallable, BlueprintEvent)

void UQuest_12670_C::OnFinished_150FC102469A55914D752AA004F865C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12670_C", "OnFinished_150FC102469A55914D752AA004F865C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12670.Quest_12670_C.OnStop_150FC102469A55914D752AA004F865C0
// (BlueprintCallable, BlueprintEvent)

void UQuest_12670_C::OnStop_150FC102469A55914D752AA004F865C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12670_C", "OnStop_150FC102469A55914D752AA004F865C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12670.Quest_12670_C.OnDlgClosed_463BEE6C440ABE5D11B22AABBC4BBB1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12670_C::OnDlgClosed_463BEE6C440ABE5D11B22AABBC4BBB1D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12670_C", "OnDlgClosed_463BEE6C440ABE5D11B22AABBC4BBB1D");

	Params::Quest_12670_C_OnDlgClosed_463BEE6C440ABE5D11B22AABBC4BBB1D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12670.Quest_12670_C.OnDlgSelectedOption_463BEE6C440ABE5D11B22AABBC4BBB1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12670_C::OnDlgSelectedOption_463BEE6C440ABE5D11B22AABBC4BBB1D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12670_C", "OnDlgSelectedOption_463BEE6C440ABE5D11B22AABBC4BBB1D");

	Params::Quest_12670_C_OnDlgSelectedOption_463BEE6C440ABE5D11B22AABBC4BBB1D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
