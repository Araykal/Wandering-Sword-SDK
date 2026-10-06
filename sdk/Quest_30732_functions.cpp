#pragma once



// Package: Quest_30732

#include "Basic.hpp"

#include "Quest_30732_classes.hpp"
#include "Quest_30732_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30732.Quest_30732_C.ExecuteUbergraph_Quest_30732
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30732_C::ExecuteUbergraph_Quest_30732(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30732_C", "ExecuteUbergraph_Quest_30732");

	Params::Quest_30732_C_ExecuteUbergraph_Quest_30732 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30732.Quest_30732_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30732_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30732_C", "HandleFinishing");

	Params::Quest_30732_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30732.Quest_30732_C.OnSuccess_D5B00D004CAA33C86153319D0D8C6230
// (BlueprintCallable, BlueprintEvent)

void UQuest_30732_C::OnSuccess_D5B00D004CAA33C86153319D0D8C6230()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30732_C", "OnSuccess_D5B00D004CAA33C86153319D0D8C6230");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30732.Quest_30732_C.OnFinished_32ED25EB48556EB09E425A88585873C1
// (BlueprintCallable, BlueprintEvent)

void UQuest_30732_C::OnFinished_32ED25EB48556EB09E425A88585873C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30732_C", "OnFinished_32ED25EB48556EB09E425A88585873C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30732.Quest_30732_C.OnStop_32ED25EB48556EB09E425A88585873C1
// (BlueprintCallable, BlueprintEvent)

void UQuest_30732_C::OnStop_32ED25EB48556EB09E425A88585873C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30732_C", "OnStop_32ED25EB48556EB09E425A88585873C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30732.Quest_30732_C.OnDlgClosed_E81A764D48AF301A8AB9D4B1D346E7D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30732_C::OnDlgClosed_E81A764D48AF301A8AB9D4B1D346E7D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30732_C", "OnDlgClosed_E81A764D48AF301A8AB9D4B1D346E7D7");

	Params::Quest_30732_C_OnDlgClosed_E81A764D48AF301A8AB9D4B1D346E7D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30732.Quest_30732_C.OnDlgSelectedOption_E81A764D48AF301A8AB9D4B1D346E7D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30732_C::OnDlgSelectedOption_E81A764D48AF301A8AB9D4B1D346E7D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30732_C", "OnDlgSelectedOption_E81A764D48AF301A8AB9D4B1D346E7D7");

	Params::Quest_30732_C_OnDlgSelectedOption_E81A764D48AF301A8AB9D4B1D346E7D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
