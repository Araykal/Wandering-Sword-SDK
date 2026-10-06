#pragma once



// Package: Quest_12637

#include "Basic.hpp"

#include "Quest_12637_classes.hpp"
#include "Quest_12637_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12637.Quest_12637_C.ExecuteUbergraph_Quest_12637
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12637_C::ExecuteUbergraph_Quest_12637(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12637_C", "ExecuteUbergraph_Quest_12637");

	Params::Quest_12637_C_ExecuteUbergraph_Quest_12637 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12637.Quest_12637_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12637_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12637_C", "HandleFinishing");

	Params::Quest_12637_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12637.Quest_12637_C.OnFinished_7842418945E3FB209AED688AE5792536
// (BlueprintCallable, BlueprintEvent)

void UQuest_12637_C::OnFinished_7842418945E3FB209AED688AE5792536()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12637_C", "OnFinished_7842418945E3FB209AED688AE5792536");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12637.Quest_12637_C.OnStop_7842418945E3FB209AED688AE5792536
// (BlueprintCallable, BlueprintEvent)

void UQuest_12637_C::OnStop_7842418945E3FB209AED688AE5792536()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12637_C", "OnStop_7842418945E3FB209AED688AE5792536");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12637.Quest_12637_C.OnDlgClosed_A38994B440AA9E43E15116A34ABD88AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12637_C::OnDlgClosed_A38994B440AA9E43E15116A34ABD88AD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12637_C", "OnDlgClosed_A38994B440AA9E43E15116A34ABD88AD");

	Params::Quest_12637_C_OnDlgClosed_A38994B440AA9E43E15116A34ABD88AD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12637.Quest_12637_C.OnDlgSelectedOption_A38994B440AA9E43E15116A34ABD88AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12637_C::OnDlgSelectedOption_A38994B440AA9E43E15116A34ABD88AD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12637_C", "OnDlgSelectedOption_A38994B440AA9E43E15116A34ABD88AD");

	Params::Quest_12637_C_OnDlgSelectedOption_A38994B440AA9E43E15116A34ABD88AD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
