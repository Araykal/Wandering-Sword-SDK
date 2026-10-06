#pragma once



// Package: Quest_5083

#include "Basic.hpp"

#include "Quest_5083_classes.hpp"
#include "Quest_5083_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5083.Quest_5083_C.ExecuteUbergraph_Quest_5083
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5083_C::ExecuteUbergraph_Quest_5083(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5083_C", "ExecuteUbergraph_Quest_5083");

	Params::Quest_5083_C_ExecuteUbergraph_Quest_5083 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5083.Quest_5083_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5083_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5083_C", "HandleFinishing");

	Params::Quest_5083_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5083.Quest_5083_C.OnFinished_E0E2192E4E084DAA859AC6BD8237341C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5083_C::OnFinished_E0E2192E4E084DAA859AC6BD8237341C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5083_C", "OnFinished_E0E2192E4E084DAA859AC6BD8237341C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5083.Quest_5083_C.OnStop_E0E2192E4E084DAA859AC6BD8237341C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5083_C::OnStop_E0E2192E4E084DAA859AC6BD8237341C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5083_C", "OnStop_E0E2192E4E084DAA859AC6BD8237341C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5083.Quest_5083_C.OnDlgClosed_207A814548A570519C9F07AC47F82DD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5083_C::OnDlgClosed_207A814548A570519C9F07AC47F82DD2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5083_C", "OnDlgClosed_207A814548A570519C9F07AC47F82DD2");

	Params::Quest_5083_C_OnDlgClosed_207A814548A570519C9F07AC47F82DD2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5083.Quest_5083_C.OnDlgSelectedOption_207A814548A570519C9F07AC47F82DD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5083_C::OnDlgSelectedOption_207A814548A570519C9F07AC47F82DD2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5083_C", "OnDlgSelectedOption_207A814548A570519C9F07AC47F82DD2");

	Params::Quest_5083_C_OnDlgSelectedOption_207A814548A570519C9F07AC47F82DD2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
