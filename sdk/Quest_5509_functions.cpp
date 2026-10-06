#pragma once



// Package: Quest_5509

#include "Basic.hpp"

#include "Quest_5509_classes.hpp"
#include "Quest_5509_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5509.Quest_5509_C.ExecuteUbergraph_Quest_5509
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5509_C::ExecuteUbergraph_Quest_5509(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5509_C", "ExecuteUbergraph_Quest_5509");

	Params::Quest_5509_C_ExecuteUbergraph_Quest_5509 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5509.Quest_5509_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5509_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5509_C", "HandleFinishing");

	Params::Quest_5509_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5509.Quest_5509_C.OnFinished_C417D4004207663DAD7D31901679B10A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5509_C::OnFinished_C417D4004207663DAD7D31901679B10A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5509_C", "OnFinished_C417D4004207663DAD7D31901679B10A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5509.Quest_5509_C.OnStop_C417D4004207663DAD7D31901679B10A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5509_C::OnStop_C417D4004207663DAD7D31901679B10A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5509_C", "OnStop_C417D4004207663DAD7D31901679B10A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5509.Quest_5509_C.OnDlgClosed_F59D38D74F38601F1BA595940E5026C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5509_C::OnDlgClosed_F59D38D74F38601F1BA595940E5026C6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5509_C", "OnDlgClosed_F59D38D74F38601F1BA595940E5026C6");

	Params::Quest_5509_C_OnDlgClosed_F59D38D74F38601F1BA595940E5026C6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5509.Quest_5509_C.OnDlgSelectedOption_F59D38D74F38601F1BA595940E5026C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5509_C::OnDlgSelectedOption_F59D38D74F38601F1BA595940E5026C6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5509_C", "OnDlgSelectedOption_F59D38D74F38601F1BA595940E5026C6");

	Params::Quest_5509_C_OnDlgSelectedOption_F59D38D74F38601F1BA595940E5026C6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
