#pragma once



// Package: Quest_5601

#include "Basic.hpp"

#include "Quest_5601_classes.hpp"
#include "Quest_5601_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5601.Quest_5601_C.ExecuteUbergraph_Quest_5601
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5601_C::ExecuteUbergraph_Quest_5601(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5601_C", "ExecuteUbergraph_Quest_5601");

	Params::Quest_5601_C_ExecuteUbergraph_Quest_5601 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5601.Quest_5601_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5601_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5601_C", "HandleFinishing");

	Params::Quest_5601_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5601.Quest_5601_C.OnFinished_E64492194F2827B0096EFF9230714520
// (BlueprintCallable, BlueprintEvent)

void UQuest_5601_C::OnFinished_E64492194F2827B0096EFF9230714520()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5601_C", "OnFinished_E64492194F2827B0096EFF9230714520");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5601.Quest_5601_C.OnStop_E64492194F2827B0096EFF9230714520
// (BlueprintCallable, BlueprintEvent)

void UQuest_5601_C::OnStop_E64492194F2827B0096EFF9230714520()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5601_C", "OnStop_E64492194F2827B0096EFF9230714520");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5601.Quest_5601_C.OnDlgClosed_60F10441468EB34005E53AB34206F6E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5601_C::OnDlgClosed_60F10441468EB34005E53AB34206F6E7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5601_C", "OnDlgClosed_60F10441468EB34005E53AB34206F6E7");

	Params::Quest_5601_C_OnDlgClosed_60F10441468EB34005E53AB34206F6E7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5601.Quest_5601_C.OnDlgSelectedOption_60F10441468EB34005E53AB34206F6E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5601_C::OnDlgSelectedOption_60F10441468EB34005E53AB34206F6E7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5601_C", "OnDlgSelectedOption_60F10441468EB34005E53AB34206F6E7");

	Params::Quest_5601_C_OnDlgSelectedOption_60F10441468EB34005E53AB34206F6E7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5601.Quest_5601_C.OnSuccess_575613964040337C4017AB9F19D54772
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5601_C::OnSuccess_575613964040337C4017AB9F19D54772(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5601_C", "OnSuccess_575613964040337C4017AB9F19D54772");

	Params::Quest_5601_C_OnSuccess_575613964040337C4017AB9F19D54772 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
