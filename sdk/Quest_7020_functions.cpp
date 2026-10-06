#pragma once



// Package: Quest_7020

#include "Basic.hpp"

#include "Quest_7020_classes.hpp"
#include "Quest_7020_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7020.Quest_7020_C.ExecuteUbergraph_Quest_7020
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7020_C::ExecuteUbergraph_Quest_7020(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7020_C", "ExecuteUbergraph_Quest_7020");

	Params::Quest_7020_C_ExecuteUbergraph_Quest_7020 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7020.Quest_7020_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7020_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7020_C", "HandleFinishing");

	Params::Quest_7020_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7020.Quest_7020_C.OnSuccess_C082276640A75E688C38B1BB220524E5
// (BlueprintCallable, BlueprintEvent)

void UQuest_7020_C::OnSuccess_C082276640A75E688C38B1BB220524E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7020_C", "OnSuccess_C082276640A75E688C38B1BB220524E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7020.Quest_7020_C.OnFinished_55E3529D48101F59CFF1E6BB31AF6B2A
// (BlueprintCallable, BlueprintEvent)

void UQuest_7020_C::OnFinished_55E3529D48101F59CFF1E6BB31AF6B2A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7020_C", "OnFinished_55E3529D48101F59CFF1E6BB31AF6B2A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7020.Quest_7020_C.OnStop_55E3529D48101F59CFF1E6BB31AF6B2A
// (BlueprintCallable, BlueprintEvent)

void UQuest_7020_C::OnStop_55E3529D48101F59CFF1E6BB31AF6B2A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7020_C", "OnStop_55E3529D48101F59CFF1E6BB31AF6B2A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7020.Quest_7020_C.OnDlgClosed_5A8E33B84D81EE889CAE55866C75B2B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7020_C::OnDlgClosed_5A8E33B84D81EE889CAE55866C75B2B6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7020_C", "OnDlgClosed_5A8E33B84D81EE889CAE55866C75B2B6");

	Params::Quest_7020_C_OnDlgClosed_5A8E33B84D81EE889CAE55866C75B2B6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7020.Quest_7020_C.OnDlgSelectedOption_5A8E33B84D81EE889CAE55866C75B2B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7020_C::OnDlgSelectedOption_5A8E33B84D81EE889CAE55866C75B2B6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7020_C", "OnDlgSelectedOption_5A8E33B84D81EE889CAE55866C75B2B6");

	Params::Quest_7020_C_OnDlgSelectedOption_5A8E33B84D81EE889CAE55866C75B2B6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
