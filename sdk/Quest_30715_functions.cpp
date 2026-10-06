#pragma once



// Package: Quest_30715

#include "Basic.hpp"

#include "Quest_30715_classes.hpp"
#include "Quest_30715_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30715.Quest_30715_C.ExecuteUbergraph_Quest_30715
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30715_C::ExecuteUbergraph_Quest_30715(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30715_C", "ExecuteUbergraph_Quest_30715");

	Params::Quest_30715_C_ExecuteUbergraph_Quest_30715 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30715.Quest_30715_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30715_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30715_C", "HandleFinishing");

	Params::Quest_30715_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30715.Quest_30715_C.OnFinished_223D848F478F62EEB12E0196448D0959
// (BlueprintCallable, BlueprintEvent)

void UQuest_30715_C::OnFinished_223D848F478F62EEB12E0196448D0959()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30715_C", "OnFinished_223D848F478F62EEB12E0196448D0959");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30715.Quest_30715_C.OnStop_223D848F478F62EEB12E0196448D0959
// (BlueprintCallable, BlueprintEvent)

void UQuest_30715_C::OnStop_223D848F478F62EEB12E0196448D0959()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30715_C", "OnStop_223D848F478F62EEB12E0196448D0959");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30715.Quest_30715_C.OnDlgClosed_FFE9F408458440AEB3193F86B72BD35B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30715_C::OnDlgClosed_FFE9F408458440AEB3193F86B72BD35B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30715_C", "OnDlgClosed_FFE9F408458440AEB3193F86B72BD35B");

	Params::Quest_30715_C_OnDlgClosed_FFE9F408458440AEB3193F86B72BD35B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30715.Quest_30715_C.OnDlgSelectedOption_FFE9F408458440AEB3193F86B72BD35B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30715_C::OnDlgSelectedOption_FFE9F408458440AEB3193F86B72BD35B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30715_C", "OnDlgSelectedOption_FFE9F408458440AEB3193F86B72BD35B");

	Params::Quest_30715_C_OnDlgSelectedOption_FFE9F408458440AEB3193F86B72BD35B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
