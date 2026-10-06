#pragma once



// Package: Quest_5011

#include "Basic.hpp"

#include "Quest_5011_classes.hpp"
#include "Quest_5011_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5011.Quest_5011_C.ExecuteUbergraph_Quest_5011
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5011_C::ExecuteUbergraph_Quest_5011(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5011_C", "ExecuteUbergraph_Quest_5011");

	Params::Quest_5011_C_ExecuteUbergraph_Quest_5011 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5011.Quest_5011_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5011_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5011_C", "HandleFinishing");

	Params::Quest_5011_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5011.Quest_5011_C.OnSuccess_878311B246A787223BDF8482DC0AE0FD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5011_C::OnSuccess_878311B246A787223BDF8482DC0AE0FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5011_C", "OnSuccess_878311B246A787223BDF8482DC0AE0FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5011.Quest_5011_C.OnFinished_6662E9874215296FFA248D81B1E7372A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5011_C::OnFinished_6662E9874215296FFA248D81B1E7372A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5011_C", "OnFinished_6662E9874215296FFA248D81B1E7372A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5011.Quest_5011_C.OnStop_6662E9874215296FFA248D81B1E7372A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5011_C::OnStop_6662E9874215296FFA248D81B1E7372A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5011_C", "OnStop_6662E9874215296FFA248D81B1E7372A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5011.Quest_5011_C.OnDlgClosed_A8AB4350433BBE1310E699872E578E2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5011_C::OnDlgClosed_A8AB4350433BBE1310E699872E578E2F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5011_C", "OnDlgClosed_A8AB4350433BBE1310E699872E578E2F");

	Params::Quest_5011_C_OnDlgClosed_A8AB4350433BBE1310E699872E578E2F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5011.Quest_5011_C.OnDlgSelectedOption_A8AB4350433BBE1310E699872E578E2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5011_C::OnDlgSelectedOption_A8AB4350433BBE1310E699872E578E2F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5011_C", "OnDlgSelectedOption_A8AB4350433BBE1310E699872E578E2F");

	Params::Quest_5011_C_OnDlgSelectedOption_A8AB4350433BBE1310E699872E578E2F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
