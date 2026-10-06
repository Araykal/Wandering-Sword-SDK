#pragma once



// Package: Quest_11387

#include "Basic.hpp"

#include "Quest_11387_classes.hpp"
#include "Quest_11387_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11387.Quest_11387_C.ExecuteUbergraph_Quest_11387
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11387_C::ExecuteUbergraph_Quest_11387(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11387_C", "ExecuteUbergraph_Quest_11387");

	Params::Quest_11387_C_ExecuteUbergraph_Quest_11387 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11387.Quest_11387_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11387_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11387_C", "HandleFinishing");

	Params::Quest_11387_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11387.Quest_11387_C.OnFinished_C9C69C7A4F6B92109585B69D2C06774B
// (BlueprintCallable, BlueprintEvent)

void UQuest_11387_C::OnFinished_C9C69C7A4F6B92109585B69D2C06774B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11387_C", "OnFinished_C9C69C7A4F6B92109585B69D2C06774B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11387.Quest_11387_C.OnStop_C9C69C7A4F6B92109585B69D2C06774B
// (BlueprintCallable, BlueprintEvent)

void UQuest_11387_C::OnStop_C9C69C7A4F6B92109585B69D2C06774B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11387_C", "OnStop_C9C69C7A4F6B92109585B69D2C06774B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11387.Quest_11387_C.OnDlgClosed_4ACC46914154E81D8FAD52822A76927C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11387_C::OnDlgClosed_4ACC46914154E81D8FAD52822A76927C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11387_C", "OnDlgClosed_4ACC46914154E81D8FAD52822A76927C");

	Params::Quest_11387_C_OnDlgClosed_4ACC46914154E81D8FAD52822A76927C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11387.Quest_11387_C.OnDlgSelectedOption_4ACC46914154E81D8FAD52822A76927C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11387_C::OnDlgSelectedOption_4ACC46914154E81D8FAD52822A76927C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11387_C", "OnDlgSelectedOption_4ACC46914154E81D8FAD52822A76927C");

	Params::Quest_11387_C_OnDlgSelectedOption_4ACC46914154E81D8FAD52822A76927C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
