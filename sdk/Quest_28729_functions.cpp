#pragma once



// Package: Quest_28729

#include "Basic.hpp"

#include "Quest_28729_classes.hpp"
#include "Quest_28729_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28729.Quest_28729_C.ExecuteUbergraph_Quest_28729
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28729_C::ExecuteUbergraph_Quest_28729(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "ExecuteUbergraph_Quest_28729");

	Params::Quest_28729_C_ExecuteUbergraph_Quest_28729 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28729.Quest_28729_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28729_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "HandleFinishing");

	Params::Quest_28729_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28729.Quest_28729_C.OnSuccess_FA6F5BBF45668496EE925F8CD9093E8F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28729_C::OnSuccess_FA6F5BBF45668496EE925F8CD9093E8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "OnSuccess_FA6F5BBF45668496EE925F8CD9093E8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28729.Quest_28729_C.OnSuccess_7000E5C54C25340CD87FB3B32E346CB4
// (BlueprintCallable, BlueprintEvent)

void UQuest_28729_C::OnSuccess_7000E5C54C25340CD87FB3B32E346CB4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "OnSuccess_7000E5C54C25340CD87FB3B32E346CB4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28729.Quest_28729_C.OnFinished_442D86EA4A741C892510A5943DDC900B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28729_C::OnFinished_442D86EA4A741C892510A5943DDC900B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "OnFinished_442D86EA4A741C892510A5943DDC900B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28729.Quest_28729_C.OnStop_442D86EA4A741C892510A5943DDC900B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28729_C::OnStop_442D86EA4A741C892510A5943DDC900B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "OnStop_442D86EA4A741C892510A5943DDC900B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28729.Quest_28729_C.OnDlgClosed_8D74D499499BA9C5E5563BB30269EFC9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28729_C::OnDlgClosed_8D74D499499BA9C5E5563BB30269EFC9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "OnDlgClosed_8D74D499499BA9C5E5563BB30269EFC9");

	Params::Quest_28729_C_OnDlgClosed_8D74D499499BA9C5E5563BB30269EFC9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28729.Quest_28729_C.OnDlgSelectedOption_8D74D499499BA9C5E5563BB30269EFC9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28729_C::OnDlgSelectedOption_8D74D499499BA9C5E5563BB30269EFC9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28729_C", "OnDlgSelectedOption_8D74D499499BA9C5E5563BB30269EFC9");

	Params::Quest_28729_C_OnDlgSelectedOption_8D74D499499BA9C5E5563BB30269EFC9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
