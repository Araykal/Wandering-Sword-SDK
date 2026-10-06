#pragma once



// Package: Quest_28487

#include "Basic.hpp"

#include "Quest_28487_classes.hpp"
#include "Quest_28487_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28487.Quest_28487_C.ExecuteUbergraph_Quest_28487
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28487_C::ExecuteUbergraph_Quest_28487(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28487_C", "ExecuteUbergraph_Quest_28487");

	Params::Quest_28487_C_ExecuteUbergraph_Quest_28487 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28487.Quest_28487_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28487_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28487_C", "HandleFinishing");

	Params::Quest_28487_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28487.Quest_28487_C.OnFinished_2F76AF4343887D9DD963598AFA3CCE66
// (BlueprintCallable, BlueprintEvent)

void UQuest_28487_C::OnFinished_2F76AF4343887D9DD963598AFA3CCE66()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28487_C", "OnFinished_2F76AF4343887D9DD963598AFA3CCE66");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28487.Quest_28487_C.OnStop_2F76AF4343887D9DD963598AFA3CCE66
// (BlueprintCallable, BlueprintEvent)

void UQuest_28487_C::OnStop_2F76AF4343887D9DD963598AFA3CCE66()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28487_C", "OnStop_2F76AF4343887D9DD963598AFA3CCE66");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28487.Quest_28487_C.OnDlgClosed_F59095914005C2401846D2AAEEFC4AFB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28487_C::OnDlgClosed_F59095914005C2401846D2AAEEFC4AFB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28487_C", "OnDlgClosed_F59095914005C2401846D2AAEEFC4AFB");

	Params::Quest_28487_C_OnDlgClosed_F59095914005C2401846D2AAEEFC4AFB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28487.Quest_28487_C.OnDlgSelectedOption_F59095914005C2401846D2AAEEFC4AFB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28487_C::OnDlgSelectedOption_F59095914005C2401846D2AAEEFC4AFB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28487_C", "OnDlgSelectedOption_F59095914005C2401846D2AAEEFC4AFB");

	Params::Quest_28487_C_OnDlgSelectedOption_F59095914005C2401846D2AAEEFC4AFB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
