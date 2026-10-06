#pragma once



// Package: Quest_28281

#include "Basic.hpp"

#include "Quest_28281_classes.hpp"
#include "Quest_28281_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28281.Quest_28281_C.ExecuteUbergraph_Quest_28281
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28281_C::ExecuteUbergraph_Quest_28281(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28281_C", "ExecuteUbergraph_Quest_28281");

	Params::Quest_28281_C_ExecuteUbergraph_Quest_28281 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28281.Quest_28281_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28281_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28281_C", "HandleFinishing");

	Params::Quest_28281_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28281.Quest_28281_C.OnFinished_83F6D8EA447EB6390900D6989701681B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28281_C::OnFinished_83F6D8EA447EB6390900D6989701681B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28281_C", "OnFinished_83F6D8EA447EB6390900D6989701681B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28281.Quest_28281_C.OnStop_83F6D8EA447EB6390900D6989701681B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28281_C::OnStop_83F6D8EA447EB6390900D6989701681B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28281_C", "OnStop_83F6D8EA447EB6390900D6989701681B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28281.Quest_28281_C.OnDlgClosed_12416BEB4E75B9A7041CD693B0AEF6AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28281_C::OnDlgClosed_12416BEB4E75B9A7041CD693B0AEF6AE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28281_C", "OnDlgClosed_12416BEB4E75B9A7041CD693B0AEF6AE");

	Params::Quest_28281_C_OnDlgClosed_12416BEB4E75B9A7041CD693B0AEF6AE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28281.Quest_28281_C.OnDlgSelectedOption_12416BEB4E75B9A7041CD693B0AEF6AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28281_C::OnDlgSelectedOption_12416BEB4E75B9A7041CD693B0AEF6AE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28281_C", "OnDlgSelectedOption_12416BEB4E75B9A7041CD693B0AEF6AE");

	Params::Quest_28281_C_OnDlgSelectedOption_12416BEB4E75B9A7041CD693B0AEF6AE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
