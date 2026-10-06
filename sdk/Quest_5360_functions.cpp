#pragma once



// Package: Quest_5360

#include "Basic.hpp"

#include "Quest_5360_classes.hpp"
#include "Quest_5360_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5360.Quest_5360_C.ExecuteUbergraph_Quest_5360
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5360_C::ExecuteUbergraph_Quest_5360(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5360_C", "ExecuteUbergraph_Quest_5360");

	Params::Quest_5360_C_ExecuteUbergraph_Quest_5360 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5360.Quest_5360_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5360_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5360_C", "HandleFinishing");

	Params::Quest_5360_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5360.Quest_5360_C.OnSuccess_8220251641A0DF2A47F38EB63641EE78
// (BlueprintCallable, BlueprintEvent)

void UQuest_5360_C::OnSuccess_8220251641A0DF2A47F38EB63641EE78()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5360_C", "OnSuccess_8220251641A0DF2A47F38EB63641EE78");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5360.Quest_5360_C.OnFinished_7254B3AD4A881BA664371091687ED03E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5360_C::OnFinished_7254B3AD4A881BA664371091687ED03E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5360_C", "OnFinished_7254B3AD4A881BA664371091687ED03E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5360.Quest_5360_C.OnStop_7254B3AD4A881BA664371091687ED03E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5360_C::OnStop_7254B3AD4A881BA664371091687ED03E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5360_C", "OnStop_7254B3AD4A881BA664371091687ED03E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5360.Quest_5360_C.OnDlgClosed_69E57BD44424B5958B42D0AFC69F0B08
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5360_C::OnDlgClosed_69E57BD44424B5958B42D0AFC69F0B08(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5360_C", "OnDlgClosed_69E57BD44424B5958B42D0AFC69F0B08");

	Params::Quest_5360_C_OnDlgClosed_69E57BD44424B5958B42D0AFC69F0B08 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5360.Quest_5360_C.OnDlgSelectedOption_69E57BD44424B5958B42D0AFC69F0B08
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5360_C::OnDlgSelectedOption_69E57BD44424B5958B42D0AFC69F0B08(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5360_C", "OnDlgSelectedOption_69E57BD44424B5958B42D0AFC69F0B08");

	Params::Quest_5360_C_OnDlgSelectedOption_69E57BD44424B5958B42D0AFC69F0B08 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
