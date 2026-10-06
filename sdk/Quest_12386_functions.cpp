#pragma once



// Package: Quest_12386

#include "Basic.hpp"

#include "Quest_12386_classes.hpp"
#include "Quest_12386_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12386.Quest_12386_C.ExecuteUbergraph_Quest_12386
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12386_C::ExecuteUbergraph_Quest_12386(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12386_C", "ExecuteUbergraph_Quest_12386");

	Params::Quest_12386_C_ExecuteUbergraph_Quest_12386 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12386.Quest_12386_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12386_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12386_C", "HandleFinishing");

	Params::Quest_12386_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12386.Quest_12386_C.OnFinished_CE300D254BB492FDBD9DA0BA45A6488D
// (BlueprintCallable, BlueprintEvent)

void UQuest_12386_C::OnFinished_CE300D254BB492FDBD9DA0BA45A6488D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12386_C", "OnFinished_CE300D254BB492FDBD9DA0BA45A6488D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12386.Quest_12386_C.OnStop_CE300D254BB492FDBD9DA0BA45A6488D
// (BlueprintCallable, BlueprintEvent)

void UQuest_12386_C::OnStop_CE300D254BB492FDBD9DA0BA45A6488D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12386_C", "OnStop_CE300D254BB492FDBD9DA0BA45A6488D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12386.Quest_12386_C.OnDlgClosed_48691457455DA66671F8A7AD88E6DD3A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12386_C::OnDlgClosed_48691457455DA66671F8A7AD88E6DD3A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12386_C", "OnDlgClosed_48691457455DA66671F8A7AD88E6DD3A");

	Params::Quest_12386_C_OnDlgClosed_48691457455DA66671F8A7AD88E6DD3A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12386.Quest_12386_C.OnDlgSelectedOption_48691457455DA66671F8A7AD88E6DD3A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12386_C::OnDlgSelectedOption_48691457455DA66671F8A7AD88E6DD3A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12386_C", "OnDlgSelectedOption_48691457455DA66671F8A7AD88E6DD3A");

	Params::Quest_12386_C_OnDlgSelectedOption_48691457455DA66671F8A7AD88E6DD3A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
