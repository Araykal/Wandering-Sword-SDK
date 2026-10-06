#pragma once



// Package: Quest_12703

#include "Basic.hpp"

#include "Quest_12703_classes.hpp"
#include "Quest_12703_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12703.Quest_12703_C.ExecuteUbergraph_Quest_12703
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12703_C::ExecuteUbergraph_Quest_12703(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12703_C", "ExecuteUbergraph_Quest_12703");

	Params::Quest_12703_C_ExecuteUbergraph_Quest_12703 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12703.Quest_12703_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12703_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12703_C", "HandleFinishing");

	Params::Quest_12703_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12703.Quest_12703_C.OnSuccess_D3FF81934F3AAF3D3FFE789A04F41F6E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12703_C::OnSuccess_D3FF81934F3AAF3D3FFE789A04F41F6E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12703_C", "OnSuccess_D3FF81934F3AAF3D3FFE789A04F41F6E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12703.Quest_12703_C.OnFinished_4A4848B04D94F8ABAA4FA999B43462A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12703_C::OnFinished_4A4848B04D94F8ABAA4FA999B43462A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12703_C", "OnFinished_4A4848B04D94F8ABAA4FA999B43462A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12703.Quest_12703_C.OnStop_4A4848B04D94F8ABAA4FA999B43462A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12703_C::OnStop_4A4848B04D94F8ABAA4FA999B43462A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12703_C", "OnStop_4A4848B04D94F8ABAA4FA999B43462A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12703.Quest_12703_C.OnDlgClosed_6E2D5BE047424888B82D0EA94FDB9867
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12703_C::OnDlgClosed_6E2D5BE047424888B82D0EA94FDB9867(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12703_C", "OnDlgClosed_6E2D5BE047424888B82D0EA94FDB9867");

	Params::Quest_12703_C_OnDlgClosed_6E2D5BE047424888B82D0EA94FDB9867 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12703.Quest_12703_C.OnDlgSelectedOption_6E2D5BE047424888B82D0EA94FDB9867
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12703_C::OnDlgSelectedOption_6E2D5BE047424888B82D0EA94FDB9867(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12703_C", "OnDlgSelectedOption_6E2D5BE047424888B82D0EA94FDB9867");

	Params::Quest_12703_C_OnDlgSelectedOption_6E2D5BE047424888B82D0EA94FDB9867 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
