#pragma once



// Package: Quest_5382

#include "Basic.hpp"

#include "Quest_5382_classes.hpp"
#include "Quest_5382_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5382.Quest_5382_C.ExecuteUbergraph_Quest_5382
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5382_C::ExecuteUbergraph_Quest_5382(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5382_C", "ExecuteUbergraph_Quest_5382");

	Params::Quest_5382_C_ExecuteUbergraph_Quest_5382 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5382.Quest_5382_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5382_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5382_C", "HandleFinishing");

	Params::Quest_5382_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5382.Quest_5382_C.OnFinished_03FF942343B54B93DBA759B1DB75EF56
// (BlueprintCallable, BlueprintEvent)

void UQuest_5382_C::OnFinished_03FF942343B54B93DBA759B1DB75EF56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5382_C", "OnFinished_03FF942343B54B93DBA759B1DB75EF56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5382.Quest_5382_C.OnStop_03FF942343B54B93DBA759B1DB75EF56
// (BlueprintCallable, BlueprintEvent)

void UQuest_5382_C::OnStop_03FF942343B54B93DBA759B1DB75EF56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5382_C", "OnStop_03FF942343B54B93DBA759B1DB75EF56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5382.Quest_5382_C.OnDlgClosed_C392090A4B5BFA1E2F76CB8501DEE00D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5382_C::OnDlgClosed_C392090A4B5BFA1E2F76CB8501DEE00D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5382_C", "OnDlgClosed_C392090A4B5BFA1E2F76CB8501DEE00D");

	Params::Quest_5382_C_OnDlgClosed_C392090A4B5BFA1E2F76CB8501DEE00D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5382.Quest_5382_C.OnDlgSelectedOption_C392090A4B5BFA1E2F76CB8501DEE00D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5382_C::OnDlgSelectedOption_C392090A4B5BFA1E2F76CB8501DEE00D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5382_C", "OnDlgSelectedOption_C392090A4B5BFA1E2F76CB8501DEE00D");

	Params::Quest_5382_C_OnDlgSelectedOption_C392090A4B5BFA1E2F76CB8501DEE00D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
