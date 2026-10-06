#pragma once



// Package: Quest_12291

#include "Basic.hpp"

#include "Quest_12291_classes.hpp"
#include "Quest_12291_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12291.Quest_12291_C.ExecuteUbergraph_Quest_12291
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12291_C::ExecuteUbergraph_Quest_12291(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12291_C", "ExecuteUbergraph_Quest_12291");

	Params::Quest_12291_C_ExecuteUbergraph_Quest_12291 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12291.Quest_12291_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12291_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12291_C", "HandleFinishing");

	Params::Quest_12291_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12291.Quest_12291_C.OnSuccess_21ECA32B417CFE90A3851D978C6EBE09
// (BlueprintCallable, BlueprintEvent)

void UQuest_12291_C::OnSuccess_21ECA32B417CFE90A3851D978C6EBE09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12291_C", "OnSuccess_21ECA32B417CFE90A3851D978C6EBE09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12291.Quest_12291_C.OnFinished_8F923A6D467A96EC5FB0C99060E98CC2
// (BlueprintCallable, BlueprintEvent)

void UQuest_12291_C::OnFinished_8F923A6D467A96EC5FB0C99060E98CC2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12291_C", "OnFinished_8F923A6D467A96EC5FB0C99060E98CC2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12291.Quest_12291_C.OnStop_8F923A6D467A96EC5FB0C99060E98CC2
// (BlueprintCallable, BlueprintEvent)

void UQuest_12291_C::OnStop_8F923A6D467A96EC5FB0C99060E98CC2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12291_C", "OnStop_8F923A6D467A96EC5FB0C99060E98CC2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12291.Quest_12291_C.OnDlgClosed_82F2742447087004682EC1B7FC5ACC26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12291_C::OnDlgClosed_82F2742447087004682EC1B7FC5ACC26(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12291_C", "OnDlgClosed_82F2742447087004682EC1B7FC5ACC26");

	Params::Quest_12291_C_OnDlgClosed_82F2742447087004682EC1B7FC5ACC26 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12291.Quest_12291_C.OnDlgSelectedOption_82F2742447087004682EC1B7FC5ACC26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12291_C::OnDlgSelectedOption_82F2742447087004682EC1B7FC5ACC26(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12291_C", "OnDlgSelectedOption_82F2742447087004682EC1B7FC5ACC26");

	Params::Quest_12291_C_OnDlgSelectedOption_82F2742447087004682EC1B7FC5ACC26 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
