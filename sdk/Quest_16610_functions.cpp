#pragma once



// Package: Quest_16610

#include "Basic.hpp"

#include "Quest_16610_classes.hpp"
#include "Quest_16610_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16610.Quest_16610_C.ExecuteUbergraph_Quest_16610
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16610_C::ExecuteUbergraph_Quest_16610(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16610_C", "ExecuteUbergraph_Quest_16610");

	Params::Quest_16610_C_ExecuteUbergraph_Quest_16610 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16610.Quest_16610_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16610_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16610_C", "HandleFinishing");

	Params::Quest_16610_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16610.Quest_16610_C.OnFinished_0B4098E649BF31041E2BD2B50ACB9C76
// (BlueprintCallable, BlueprintEvent)

void UQuest_16610_C::OnFinished_0B4098E649BF31041E2BD2B50ACB9C76()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16610_C", "OnFinished_0B4098E649BF31041E2BD2B50ACB9C76");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16610.Quest_16610_C.OnStop_0B4098E649BF31041E2BD2B50ACB9C76
// (BlueprintCallable, BlueprintEvent)

void UQuest_16610_C::OnStop_0B4098E649BF31041E2BD2B50ACB9C76()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16610_C", "OnStop_0B4098E649BF31041E2BD2B50ACB9C76");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16610.Quest_16610_C.OnDlgClosed_C7ACA48A4E607B051578DEAF0ADEAC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16610_C::OnDlgClosed_C7ACA48A4E607B051578DEAF0ADEAC3D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16610_C", "OnDlgClosed_C7ACA48A4E607B051578DEAF0ADEAC3D");

	Params::Quest_16610_C_OnDlgClosed_C7ACA48A4E607B051578DEAF0ADEAC3D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16610.Quest_16610_C.OnDlgSelectedOption_C7ACA48A4E607B051578DEAF0ADEAC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16610_C::OnDlgSelectedOption_C7ACA48A4E607B051578DEAF0ADEAC3D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16610_C", "OnDlgSelectedOption_C7ACA48A4E607B051578DEAF0ADEAC3D");

	Params::Quest_16610_C_OnDlgSelectedOption_C7ACA48A4E607B051578DEAF0ADEAC3D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
