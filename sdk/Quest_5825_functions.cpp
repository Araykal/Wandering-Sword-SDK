#pragma once



// Package: Quest_5825

#include "Basic.hpp"

#include "Quest_5825_classes.hpp"
#include "Quest_5825_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5825.Quest_5825_C.ExecuteUbergraph_Quest_5825
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5825_C::ExecuteUbergraph_Quest_5825(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5825_C", "ExecuteUbergraph_Quest_5825");

	Params::Quest_5825_C_ExecuteUbergraph_Quest_5825 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5825.Quest_5825_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5825_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5825_C", "HandleFinishing");

	Params::Quest_5825_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5825.Quest_5825_C.OnSuccess_441120234492277989BABAB4CB989490
// (BlueprintCallable, BlueprintEvent)

void UQuest_5825_C::OnSuccess_441120234492277989BABAB4CB989490()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5825_C", "OnSuccess_441120234492277989BABAB4CB989490");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5825.Quest_5825_C.OnFinished_CC84E807490D154F81D0D49F0D5BEC7E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5825_C::OnFinished_CC84E807490D154F81D0D49F0D5BEC7E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5825_C", "OnFinished_CC84E807490D154F81D0D49F0D5BEC7E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5825.Quest_5825_C.OnStop_CC84E807490D154F81D0D49F0D5BEC7E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5825_C::OnStop_CC84E807490D154F81D0D49F0D5BEC7E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5825_C", "OnStop_CC84E807490D154F81D0D49F0D5BEC7E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5825.Quest_5825_C.OnDlgClosed_8E2DC4484B41D0491584CA90DC8DD31A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5825_C::OnDlgClosed_8E2DC4484B41D0491584CA90DC8DD31A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5825_C", "OnDlgClosed_8E2DC4484B41D0491584CA90DC8DD31A");

	Params::Quest_5825_C_OnDlgClosed_8E2DC4484B41D0491584CA90DC8DD31A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5825.Quest_5825_C.OnDlgSelectedOption_8E2DC4484B41D0491584CA90DC8DD31A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5825_C::OnDlgSelectedOption_8E2DC4484B41D0491584CA90DC8DD31A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5825_C", "OnDlgSelectedOption_8E2DC4484B41D0491584CA90DC8DD31A");

	Params::Quest_5825_C_OnDlgSelectedOption_8E2DC4484B41D0491584CA90DC8DD31A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
