#pragma once



// Package: Quest_12053

#include "Basic.hpp"

#include "Quest_12053_classes.hpp"
#include "Quest_12053_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12053.Quest_12053_C.ExecuteUbergraph_Quest_12053
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12053_C::ExecuteUbergraph_Quest_12053(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12053_C", "ExecuteUbergraph_Quest_12053");

	Params::Quest_12053_C_ExecuteUbergraph_Quest_12053 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12053.Quest_12053_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12053_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12053_C", "HandleFinishing");

	Params::Quest_12053_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12053.Quest_12053_C.OnFinished_6EEB553B426EEF3EFAEC23B59FBD1919
// (BlueprintCallable, BlueprintEvent)

void UQuest_12053_C::OnFinished_6EEB553B426EEF3EFAEC23B59FBD1919()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12053_C", "OnFinished_6EEB553B426EEF3EFAEC23B59FBD1919");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12053.Quest_12053_C.OnStop_6EEB553B426EEF3EFAEC23B59FBD1919
// (BlueprintCallable, BlueprintEvent)

void UQuest_12053_C::OnStop_6EEB553B426EEF3EFAEC23B59FBD1919()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12053_C", "OnStop_6EEB553B426EEF3EFAEC23B59FBD1919");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12053.Quest_12053_C.OnDlgClosed_AC39AE0C4FF365AE0E46BA9CD6937678
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12053_C::OnDlgClosed_AC39AE0C4FF365AE0E46BA9CD6937678(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12053_C", "OnDlgClosed_AC39AE0C4FF365AE0E46BA9CD6937678");

	Params::Quest_12053_C_OnDlgClosed_AC39AE0C4FF365AE0E46BA9CD6937678 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12053.Quest_12053_C.OnDlgSelectedOption_AC39AE0C4FF365AE0E46BA9CD6937678
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12053_C::OnDlgSelectedOption_AC39AE0C4FF365AE0E46BA9CD6937678(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12053_C", "OnDlgSelectedOption_AC39AE0C4FF365AE0E46BA9CD6937678");

	Params::Quest_12053_C_OnDlgSelectedOption_AC39AE0C4FF365AE0E46BA9CD6937678 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
