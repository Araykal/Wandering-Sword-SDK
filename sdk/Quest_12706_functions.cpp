#pragma once



// Package: Quest_12706

#include "Basic.hpp"

#include "Quest_12706_classes.hpp"
#include "Quest_12706_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12706.Quest_12706_C.ExecuteUbergraph_Quest_12706
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12706_C::ExecuteUbergraph_Quest_12706(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12706_C", "ExecuteUbergraph_Quest_12706");

	Params::Quest_12706_C_ExecuteUbergraph_Quest_12706 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12706.Quest_12706_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12706_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12706_C", "HandleFinishing");

	Params::Quest_12706_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12706.Quest_12706_C.OnFinished_611D0CC745EC16345B68A7BC66ED796C
// (BlueprintCallable, BlueprintEvent)

void UQuest_12706_C::OnFinished_611D0CC745EC16345B68A7BC66ED796C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12706_C", "OnFinished_611D0CC745EC16345B68A7BC66ED796C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12706.Quest_12706_C.OnStop_611D0CC745EC16345B68A7BC66ED796C
// (BlueprintCallable, BlueprintEvent)

void UQuest_12706_C::OnStop_611D0CC745EC16345B68A7BC66ED796C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12706_C", "OnStop_611D0CC745EC16345B68A7BC66ED796C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12706.Quest_12706_C.OnDlgClosed_C76B8FD547F64B8ACE47A485A093FDD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12706_C::OnDlgClosed_C76B8FD547F64B8ACE47A485A093FDD3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12706_C", "OnDlgClosed_C76B8FD547F64B8ACE47A485A093FDD3");

	Params::Quest_12706_C_OnDlgClosed_C76B8FD547F64B8ACE47A485A093FDD3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12706.Quest_12706_C.OnDlgSelectedOption_C76B8FD547F64B8ACE47A485A093FDD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12706_C::OnDlgSelectedOption_C76B8FD547F64B8ACE47A485A093FDD3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12706_C", "OnDlgSelectedOption_C76B8FD547F64B8ACE47A485A093FDD3");

	Params::Quest_12706_C_OnDlgSelectedOption_C76B8FD547F64B8ACE47A485A093FDD3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
