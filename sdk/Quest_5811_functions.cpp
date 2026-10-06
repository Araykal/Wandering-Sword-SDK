#pragma once



// Package: Quest_5811

#include "Basic.hpp"

#include "Quest_5811_classes.hpp"
#include "Quest_5811_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5811.Quest_5811_C.ExecuteUbergraph_Quest_5811
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5811_C::ExecuteUbergraph_Quest_5811(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5811_C", "ExecuteUbergraph_Quest_5811");

	Params::Quest_5811_C_ExecuteUbergraph_Quest_5811 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5811.Quest_5811_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5811_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5811_C", "HandleFinishing");

	Params::Quest_5811_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5811.Quest_5811_C.OnFinished_664272594155294B75AFA6BA88FEE72C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5811_C::OnFinished_664272594155294B75AFA6BA88FEE72C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5811_C", "OnFinished_664272594155294B75AFA6BA88FEE72C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5811.Quest_5811_C.OnStop_664272594155294B75AFA6BA88FEE72C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5811_C::OnStop_664272594155294B75AFA6BA88FEE72C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5811_C", "OnStop_664272594155294B75AFA6BA88FEE72C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5811.Quest_5811_C.OnDlgClosed_443FAF7945F0FEDF194980930BE216DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5811_C::OnDlgClosed_443FAF7945F0FEDF194980930BE216DE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5811_C", "OnDlgClosed_443FAF7945F0FEDF194980930BE216DE");

	Params::Quest_5811_C_OnDlgClosed_443FAF7945F0FEDF194980930BE216DE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5811.Quest_5811_C.OnDlgSelectedOption_443FAF7945F0FEDF194980930BE216DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5811_C::OnDlgSelectedOption_443FAF7945F0FEDF194980930BE216DE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5811_C", "OnDlgSelectedOption_443FAF7945F0FEDF194980930BE216DE");

	Params::Quest_5811_C_OnDlgSelectedOption_443FAF7945F0FEDF194980930BE216DE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
