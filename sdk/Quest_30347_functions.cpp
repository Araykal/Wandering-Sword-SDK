#pragma once



// Package: Quest_30347

#include "Basic.hpp"

#include "Quest_30347_classes.hpp"
#include "Quest_30347_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30347.Quest_30347_C.ExecuteUbergraph_Quest_30347
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30347_C::ExecuteUbergraph_Quest_30347(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30347_C", "ExecuteUbergraph_Quest_30347");

	Params::Quest_30347_C_ExecuteUbergraph_Quest_30347 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30347.Quest_30347_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30347_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30347_C", "HandleFinishing");

	Params::Quest_30347_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30347.Quest_30347_C.OnFinished_264233164054CCB6C3F5D88D45ED7419
// (BlueprintCallable, BlueprintEvent)

void UQuest_30347_C::OnFinished_264233164054CCB6C3F5D88D45ED7419()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30347_C", "OnFinished_264233164054CCB6C3F5D88D45ED7419");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30347.Quest_30347_C.OnStop_264233164054CCB6C3F5D88D45ED7419
// (BlueprintCallable, BlueprintEvent)

void UQuest_30347_C::OnStop_264233164054CCB6C3F5D88D45ED7419()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30347_C", "OnStop_264233164054CCB6C3F5D88D45ED7419");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30347.Quest_30347_C.OnDlgClosed_6869EB054D913E46CEFFCC8F7B6245CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30347_C::OnDlgClosed_6869EB054D913E46CEFFCC8F7B6245CD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30347_C", "OnDlgClosed_6869EB054D913E46CEFFCC8F7B6245CD");

	Params::Quest_30347_C_OnDlgClosed_6869EB054D913E46CEFFCC8F7B6245CD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30347.Quest_30347_C.OnDlgSelectedOption_6869EB054D913E46CEFFCC8F7B6245CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30347_C::OnDlgSelectedOption_6869EB054D913E46CEFFCC8F7B6245CD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30347_C", "OnDlgSelectedOption_6869EB054D913E46CEFFCC8F7B6245CD");

	Params::Quest_30347_C_OnDlgSelectedOption_6869EB054D913E46CEFFCC8F7B6245CD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
