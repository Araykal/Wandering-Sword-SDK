#pragma once



// Package: Quest_29006

#include "Basic.hpp"

#include "Quest_29006_classes.hpp"
#include "Quest_29006_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29006.Quest_29006_C.ExecuteUbergraph_Quest_29006
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29006_C::ExecuteUbergraph_Quest_29006(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29006_C", "ExecuteUbergraph_Quest_29006");

	Params::Quest_29006_C_ExecuteUbergraph_Quest_29006 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29006.Quest_29006_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29006_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29006_C", "HandleFinishing");

	Params::Quest_29006_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29006.Quest_29006_C.OnSuccess_0AD38E3D4DDD41B4D128CB95F2739173
// (BlueprintCallable, BlueprintEvent)

void UQuest_29006_C::OnSuccess_0AD38E3D4DDD41B4D128CB95F2739173()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29006_C", "OnSuccess_0AD38E3D4DDD41B4D128CB95F2739173");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29006.Quest_29006_C.OnFinished_B82251FD41911F31F97A79B7E590ECED
// (BlueprintCallable, BlueprintEvent)

void UQuest_29006_C::OnFinished_B82251FD41911F31F97A79B7E590ECED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29006_C", "OnFinished_B82251FD41911F31F97A79B7E590ECED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29006.Quest_29006_C.OnStop_B82251FD41911F31F97A79B7E590ECED
// (BlueprintCallable, BlueprintEvent)

void UQuest_29006_C::OnStop_B82251FD41911F31F97A79B7E590ECED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29006_C", "OnStop_B82251FD41911F31F97A79B7E590ECED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29006.Quest_29006_C.OnDlgClosed_E75725184058A7663E6BC6AC9EC2BAB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29006_C::OnDlgClosed_E75725184058A7663E6BC6AC9EC2BAB7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29006_C", "OnDlgClosed_E75725184058A7663E6BC6AC9EC2BAB7");

	Params::Quest_29006_C_OnDlgClosed_E75725184058A7663E6BC6AC9EC2BAB7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29006.Quest_29006_C.OnDlgSelectedOption_E75725184058A7663E6BC6AC9EC2BAB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29006_C::OnDlgSelectedOption_E75725184058A7663E6BC6AC9EC2BAB7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29006_C", "OnDlgSelectedOption_E75725184058A7663E6BC6AC9EC2BAB7");

	Params::Quest_29006_C_OnDlgSelectedOption_E75725184058A7663E6BC6AC9EC2BAB7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
