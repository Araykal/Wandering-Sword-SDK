#pragma once



// Package: Quest_12372

#include "Basic.hpp"

#include "Quest_12372_classes.hpp"
#include "Quest_12372_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12372.Quest_12372_C.ExecuteUbergraph_Quest_12372
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12372_C::ExecuteUbergraph_Quest_12372(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12372_C", "ExecuteUbergraph_Quest_12372");

	Params::Quest_12372_C_ExecuteUbergraph_Quest_12372 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12372.Quest_12372_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12372_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12372_C", "HandleFinishing");

	Params::Quest_12372_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12372.Quest_12372_C.OnFinished_3C5B30364B1A58099E699B8D4FDAF486
// (BlueprintCallable, BlueprintEvent)

void UQuest_12372_C::OnFinished_3C5B30364B1A58099E699B8D4FDAF486()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12372_C", "OnFinished_3C5B30364B1A58099E699B8D4FDAF486");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12372.Quest_12372_C.OnStop_3C5B30364B1A58099E699B8D4FDAF486
// (BlueprintCallable, BlueprintEvent)

void UQuest_12372_C::OnStop_3C5B30364B1A58099E699B8D4FDAF486()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12372_C", "OnStop_3C5B30364B1A58099E699B8D4FDAF486");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12372.Quest_12372_C.OnDlgClosed_C5BB0FA547DFED8E967799996B29D344
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12372_C::OnDlgClosed_C5BB0FA547DFED8E967799996B29D344(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12372_C", "OnDlgClosed_C5BB0FA547DFED8E967799996B29D344");

	Params::Quest_12372_C_OnDlgClosed_C5BB0FA547DFED8E967799996B29D344 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12372.Quest_12372_C.OnDlgSelectedOption_C5BB0FA547DFED8E967799996B29D344
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12372_C::OnDlgSelectedOption_C5BB0FA547DFED8E967799996B29D344(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12372_C", "OnDlgSelectedOption_C5BB0FA547DFED8E967799996B29D344");

	Params::Quest_12372_C_OnDlgSelectedOption_C5BB0FA547DFED8E967799996B29D344 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
