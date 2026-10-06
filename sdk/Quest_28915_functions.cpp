#pragma once



// Package: Quest_28915

#include "Basic.hpp"

#include "Quest_28915_classes.hpp"
#include "Quest_28915_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28915.Quest_28915_C.ExecuteUbergraph_Quest_28915
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28915_C::ExecuteUbergraph_Quest_28915(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28915_C", "ExecuteUbergraph_Quest_28915");

	Params::Quest_28915_C_ExecuteUbergraph_Quest_28915 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28915.Quest_28915_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28915_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28915_C", "HandleFinishing");

	Params::Quest_28915_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28915.Quest_28915_C.OnFinished_5F34163045E7375EE4009E983AF41C2D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28915_C::OnFinished_5F34163045E7375EE4009E983AF41C2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28915_C", "OnFinished_5F34163045E7375EE4009E983AF41C2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28915.Quest_28915_C.OnStop_5F34163045E7375EE4009E983AF41C2D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28915_C::OnStop_5F34163045E7375EE4009E983AF41C2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28915_C", "OnStop_5F34163045E7375EE4009E983AF41C2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28915.Quest_28915_C.OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28915_C::OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28915_C", "OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A");

	Params::Quest_28915_C_OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28915.Quest_28915_C.OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28915_C::OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28915_C", "OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A");

	Params::Quest_28915_C_OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
