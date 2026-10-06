#pragma once



// Package: Quest_5445

#include "Basic.hpp"

#include "Quest_5445_classes.hpp"
#include "Quest_5445_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5445.Quest_5445_C.ExecuteUbergraph_Quest_5445
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5445_C::ExecuteUbergraph_Quest_5445(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5445_C", "ExecuteUbergraph_Quest_5445");

	Params::Quest_5445_C_ExecuteUbergraph_Quest_5445 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5445.Quest_5445_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5445_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5445_C", "HandleFinishing");

	Params::Quest_5445_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5445.Quest_5445_C.OnFinished_7706BDDB41DCF48D39216EB1DD6EC1F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5445_C::OnFinished_7706BDDB41DCF48D39216EB1DD6EC1F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5445_C", "OnFinished_7706BDDB41DCF48D39216EB1DD6EC1F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5445.Quest_5445_C.OnStop_7706BDDB41DCF48D39216EB1DD6EC1F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5445_C::OnStop_7706BDDB41DCF48D39216EB1DD6EC1F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5445_C", "OnStop_7706BDDB41DCF48D39216EB1DD6EC1F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5445.Quest_5445_C.OnDlgClosed_05AE21F448F0C8C3C844C8882E4D9A74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5445_C::OnDlgClosed_05AE21F448F0C8C3C844C8882E4D9A74(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5445_C", "OnDlgClosed_05AE21F448F0C8C3C844C8882E4D9A74");

	Params::Quest_5445_C_OnDlgClosed_05AE21F448F0C8C3C844C8882E4D9A74 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5445.Quest_5445_C.OnDlgSelectedOption_05AE21F448F0C8C3C844C8882E4D9A74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5445_C::OnDlgSelectedOption_05AE21F448F0C8C3C844C8882E4D9A74(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5445_C", "OnDlgSelectedOption_05AE21F448F0C8C3C844C8882E4D9A74");

	Params::Quest_5445_C_OnDlgSelectedOption_05AE21F448F0C8C3C844C8882E4D9A74 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
