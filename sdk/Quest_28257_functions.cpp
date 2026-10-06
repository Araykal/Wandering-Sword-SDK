#pragma once



// Package: Quest_28257

#include "Basic.hpp"

#include "Quest_28257_classes.hpp"
#include "Quest_28257_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28257.Quest_28257_C.ExecuteUbergraph_Quest_28257
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28257_C::ExecuteUbergraph_Quest_28257(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28257_C", "ExecuteUbergraph_Quest_28257");

	Params::Quest_28257_C_ExecuteUbergraph_Quest_28257 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28257.Quest_28257_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28257_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28257_C", "HandleFinishing");

	Params::Quest_28257_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28257.Quest_28257_C.OnFinished_69DE544D4AC7D1AADE7FCCA215F286CE
// (BlueprintCallable, BlueprintEvent)

void UQuest_28257_C::OnFinished_69DE544D4AC7D1AADE7FCCA215F286CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28257_C", "OnFinished_69DE544D4AC7D1AADE7FCCA215F286CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28257.Quest_28257_C.OnStop_69DE544D4AC7D1AADE7FCCA215F286CE
// (BlueprintCallable, BlueprintEvent)

void UQuest_28257_C::OnStop_69DE544D4AC7D1AADE7FCCA215F286CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28257_C", "OnStop_69DE544D4AC7D1AADE7FCCA215F286CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28257.Quest_28257_C.OnDlgClosed_28208883464A5EC9C663418F98392B80
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28257_C::OnDlgClosed_28208883464A5EC9C663418F98392B80(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28257_C", "OnDlgClosed_28208883464A5EC9C663418F98392B80");

	Params::Quest_28257_C_OnDlgClosed_28208883464A5EC9C663418F98392B80 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28257.Quest_28257_C.OnDlgSelectedOption_28208883464A5EC9C663418F98392B80
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28257_C::OnDlgSelectedOption_28208883464A5EC9C663418F98392B80(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28257_C", "OnDlgSelectedOption_28208883464A5EC9C663418F98392B80");

	Params::Quest_28257_C_OnDlgSelectedOption_28208883464A5EC9C663418F98392B80 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
