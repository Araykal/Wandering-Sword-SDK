#pragma once



// Package: Quest_5417

#include "Basic.hpp"

#include "Quest_5417_classes.hpp"
#include "Quest_5417_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5417.Quest_5417_C.ExecuteUbergraph_Quest_5417
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5417_C::ExecuteUbergraph_Quest_5417(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5417_C", "ExecuteUbergraph_Quest_5417");

	Params::Quest_5417_C_ExecuteUbergraph_Quest_5417 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5417.Quest_5417_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5417_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5417_C", "HandleFinishing");

	Params::Quest_5417_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5417.Quest_5417_C.OnSuccess_78B1B4B14BD0634667984597E5D946C1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5417_C::OnSuccess_78B1B4B14BD0634667984597E5D946C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5417_C", "OnSuccess_78B1B4B14BD0634667984597E5D946C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5417.Quest_5417_C.OnFinished_079A9C5C4892EF6FDDC74986018FC09B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5417_C::OnFinished_079A9C5C4892EF6FDDC74986018FC09B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5417_C", "OnFinished_079A9C5C4892EF6FDDC74986018FC09B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5417.Quest_5417_C.OnStop_079A9C5C4892EF6FDDC74986018FC09B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5417_C::OnStop_079A9C5C4892EF6FDDC74986018FC09B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5417_C", "OnStop_079A9C5C4892EF6FDDC74986018FC09B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5417.Quest_5417_C.OnDlgClosed_9A052DAE47BF771FAF8B8B90E08A33F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5417_C::OnDlgClosed_9A052DAE47BF771FAF8B8B90E08A33F5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5417_C", "OnDlgClosed_9A052DAE47BF771FAF8B8B90E08A33F5");

	Params::Quest_5417_C_OnDlgClosed_9A052DAE47BF771FAF8B8B90E08A33F5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5417.Quest_5417_C.OnDlgSelectedOption_9A052DAE47BF771FAF8B8B90E08A33F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5417_C::OnDlgSelectedOption_9A052DAE47BF771FAF8B8B90E08A33F5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5417_C", "OnDlgSelectedOption_9A052DAE47BF771FAF8B8B90E08A33F5");

	Params::Quest_5417_C_OnDlgSelectedOption_9A052DAE47BF771FAF8B8B90E08A33F5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
