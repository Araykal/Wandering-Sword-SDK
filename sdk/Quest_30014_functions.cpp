#pragma once



// Package: Quest_30014

#include "Basic.hpp"

#include "Quest_30014_classes.hpp"
#include "Quest_30014_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30014.Quest_30014_C.ExecuteUbergraph_Quest_30014
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30014_C::ExecuteUbergraph_Quest_30014(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30014_C", "ExecuteUbergraph_Quest_30014");

	Params::Quest_30014_C_ExecuteUbergraph_Quest_30014 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30014.Quest_30014_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30014_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30014_C", "HandleFinishing");

	Params::Quest_30014_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30014.Quest_30014_C.OnSuccess_A14D3B7642999019D3C16EB4499120F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30014_C::OnSuccess_A14D3B7642999019D3C16EB4499120F0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30014_C", "OnSuccess_A14D3B7642999019D3C16EB4499120F0");

	Params::Quest_30014_C_OnSuccess_A14D3B7642999019D3C16EB4499120F0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30014.Quest_30014_C.OnFinished_86A8674946EC2A83BE1549B4643F467C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30014_C::OnFinished_86A8674946EC2A83BE1549B4643F467C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30014_C", "OnFinished_86A8674946EC2A83BE1549B4643F467C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30014.Quest_30014_C.OnStop_86A8674946EC2A83BE1549B4643F467C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30014_C::OnStop_86A8674946EC2A83BE1549B4643F467C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30014_C", "OnStop_86A8674946EC2A83BE1549B4643F467C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30014.Quest_30014_C.OnDlgClosed_C74E7E9643B97A39F03327B5EF72F441
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30014_C::OnDlgClosed_C74E7E9643B97A39F03327B5EF72F441(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30014_C", "OnDlgClosed_C74E7E9643B97A39F03327B5EF72F441");

	Params::Quest_30014_C_OnDlgClosed_C74E7E9643B97A39F03327B5EF72F441 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30014.Quest_30014_C.OnDlgSelectedOption_C74E7E9643B97A39F03327B5EF72F441
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30014_C::OnDlgSelectedOption_C74E7E9643B97A39F03327B5EF72F441(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30014_C", "OnDlgSelectedOption_C74E7E9643B97A39F03327B5EF72F441");

	Params::Quest_30014_C_OnDlgSelectedOption_C74E7E9643B97A39F03327B5EF72F441 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
