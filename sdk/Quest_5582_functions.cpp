#pragma once



// Package: Quest_5582

#include "Basic.hpp"

#include "Quest_5582_classes.hpp"
#include "Quest_5582_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5582.Quest_5582_C.ExecuteUbergraph_Quest_5582
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5582_C::ExecuteUbergraph_Quest_5582(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5582_C", "ExecuteUbergraph_Quest_5582");

	Params::Quest_5582_C_ExecuteUbergraph_Quest_5582 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5582.Quest_5582_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5582_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5582_C", "HandleFinishing");

	Params::Quest_5582_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5582.Quest_5582_C.OnSuccess_5FCE8D654A0DE7C9BC354EB92C8D224A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5582_C::OnSuccess_5FCE8D654A0DE7C9BC354EB92C8D224A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5582_C", "OnSuccess_5FCE8D654A0DE7C9BC354EB92C8D224A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5582.Quest_5582_C.OnFinished_32E3F1404E3F01975AE240BDFE3EFD17
// (BlueprintCallable, BlueprintEvent)

void UQuest_5582_C::OnFinished_32E3F1404E3F01975AE240BDFE3EFD17()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5582_C", "OnFinished_32E3F1404E3F01975AE240BDFE3EFD17");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5582.Quest_5582_C.OnStop_32E3F1404E3F01975AE240BDFE3EFD17
// (BlueprintCallable, BlueprintEvent)

void UQuest_5582_C::OnStop_32E3F1404E3F01975AE240BDFE3EFD17()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5582_C", "OnStop_32E3F1404E3F01975AE240BDFE3EFD17");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5582.Quest_5582_C.OnDlgClosed_1ED552B64E5387F8FC01B1A3D4C0597A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5582_C::OnDlgClosed_1ED552B64E5387F8FC01B1A3D4C0597A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5582_C", "OnDlgClosed_1ED552B64E5387F8FC01B1A3D4C0597A");

	Params::Quest_5582_C_OnDlgClosed_1ED552B64E5387F8FC01B1A3D4C0597A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5582.Quest_5582_C.OnDlgSelectedOption_1ED552B64E5387F8FC01B1A3D4C0597A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5582_C::OnDlgSelectedOption_1ED552B64E5387F8FC01B1A3D4C0597A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5582_C", "OnDlgSelectedOption_1ED552B64E5387F8FC01B1A3D4C0597A");

	Params::Quest_5582_C_OnDlgSelectedOption_1ED552B64E5387F8FC01B1A3D4C0597A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
