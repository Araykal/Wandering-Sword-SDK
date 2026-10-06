#pragma once



// Package: Quest_11957

#include "Basic.hpp"

#include "Quest_11957_classes.hpp"
#include "Quest_11957_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11957.Quest_11957_C.ExecuteUbergraph_Quest_11957
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11957_C::ExecuteUbergraph_Quest_11957(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11957_C", "ExecuteUbergraph_Quest_11957");

	Params::Quest_11957_C_ExecuteUbergraph_Quest_11957 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11957.Quest_11957_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11957_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11957_C", "HandleFinishing");

	Params::Quest_11957_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11957.Quest_11957_C.OnFinished_D779D38A4EC815C70F8E33901878159C
// (BlueprintCallable, BlueprintEvent)

void UQuest_11957_C::OnFinished_D779D38A4EC815C70F8E33901878159C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11957_C", "OnFinished_D779D38A4EC815C70F8E33901878159C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11957.Quest_11957_C.OnStop_D779D38A4EC815C70F8E33901878159C
// (BlueprintCallable, BlueprintEvent)

void UQuest_11957_C::OnStop_D779D38A4EC815C70F8E33901878159C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11957_C", "OnStop_D779D38A4EC815C70F8E33901878159C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11957.Quest_11957_C.OnDlgClosed_7AD10CD7469F89E8C096DBBF35563ED0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11957_C::OnDlgClosed_7AD10CD7469F89E8C096DBBF35563ED0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11957_C", "OnDlgClosed_7AD10CD7469F89E8C096DBBF35563ED0");

	Params::Quest_11957_C_OnDlgClosed_7AD10CD7469F89E8C096DBBF35563ED0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11957.Quest_11957_C.OnDlgSelectedOption_7AD10CD7469F89E8C096DBBF35563ED0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11957_C::OnDlgSelectedOption_7AD10CD7469F89E8C096DBBF35563ED0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11957_C", "OnDlgSelectedOption_7AD10CD7469F89E8C096DBBF35563ED0");

	Params::Quest_11957_C_OnDlgSelectedOption_7AD10CD7469F89E8C096DBBF35563ED0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
