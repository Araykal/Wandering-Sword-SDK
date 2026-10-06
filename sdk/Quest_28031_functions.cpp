#pragma once



// Package: Quest_28031

#include "Basic.hpp"

#include "Quest_28031_classes.hpp"
#include "Quest_28031_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28031.Quest_28031_C.ExecuteUbergraph_Quest_28031
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28031_C::ExecuteUbergraph_Quest_28031(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28031_C", "ExecuteUbergraph_Quest_28031");

	Params::Quest_28031_C_ExecuteUbergraph_Quest_28031 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28031.Quest_28031_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28031_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28031_C", "HandleFinishing");

	Params::Quest_28031_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28031.Quest_28031_C.OnFinished_AB63FC174915ACAEFC918194A58853E8
// (BlueprintCallable, BlueprintEvent)

void UQuest_28031_C::OnFinished_AB63FC174915ACAEFC918194A58853E8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28031_C", "OnFinished_AB63FC174915ACAEFC918194A58853E8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28031.Quest_28031_C.OnStop_AB63FC174915ACAEFC918194A58853E8
// (BlueprintCallable, BlueprintEvent)

void UQuest_28031_C::OnStop_AB63FC174915ACAEFC918194A58853E8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28031_C", "OnStop_AB63FC174915ACAEFC918194A58853E8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28031.Quest_28031_C.OnDlgClosed_F1235A8140361B09BB55F8AE01AFD1E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28031_C::OnDlgClosed_F1235A8140361B09BB55F8AE01AFD1E2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28031_C", "OnDlgClosed_F1235A8140361B09BB55F8AE01AFD1E2");

	Params::Quest_28031_C_OnDlgClosed_F1235A8140361B09BB55F8AE01AFD1E2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28031.Quest_28031_C.OnDlgSelectedOption_F1235A8140361B09BB55F8AE01AFD1E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28031_C::OnDlgSelectedOption_F1235A8140361B09BB55F8AE01AFD1E2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28031_C", "OnDlgSelectedOption_F1235A8140361B09BB55F8AE01AFD1E2");

	Params::Quest_28031_C_OnDlgSelectedOption_F1235A8140361B09BB55F8AE01AFD1E2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
