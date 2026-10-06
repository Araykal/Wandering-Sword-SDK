#pragma once



// Package: Quest_5280

#include "Basic.hpp"

#include "Quest_5280_classes.hpp"
#include "Quest_5280_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5280.Quest_5280_C.ExecuteUbergraph_Quest_5280
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5280_C::ExecuteUbergraph_Quest_5280(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5280_C", "ExecuteUbergraph_Quest_5280");

	Params::Quest_5280_C_ExecuteUbergraph_Quest_5280 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5280.Quest_5280_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5280_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5280_C", "HandleFinishing");

	Params::Quest_5280_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5280.Quest_5280_C.OnFinished_C983EDEC457B9B192816599C9EC01494
// (BlueprintCallable, BlueprintEvent)

void UQuest_5280_C::OnFinished_C983EDEC457B9B192816599C9EC01494()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5280_C", "OnFinished_C983EDEC457B9B192816599C9EC01494");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5280.Quest_5280_C.OnStop_C983EDEC457B9B192816599C9EC01494
// (BlueprintCallable, BlueprintEvent)

void UQuest_5280_C::OnStop_C983EDEC457B9B192816599C9EC01494()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5280_C", "OnStop_C983EDEC457B9B192816599C9EC01494");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5280.Quest_5280_C.OnDlgClosed_9544B904485106B332BB0EB82C73E4F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5280_C::OnDlgClosed_9544B904485106B332BB0EB82C73E4F5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5280_C", "OnDlgClosed_9544B904485106B332BB0EB82C73E4F5");

	Params::Quest_5280_C_OnDlgClosed_9544B904485106B332BB0EB82C73E4F5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5280.Quest_5280_C.OnDlgSelectedOption_9544B904485106B332BB0EB82C73E4F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5280_C::OnDlgSelectedOption_9544B904485106B332BB0EB82C73E4F5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5280_C", "OnDlgSelectedOption_9544B904485106B332BB0EB82C73E4F5");

	Params::Quest_5280_C_OnDlgSelectedOption_9544B904485106B332BB0EB82C73E4F5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
