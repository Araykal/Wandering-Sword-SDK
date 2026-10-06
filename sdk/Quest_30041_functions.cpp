#pragma once



// Package: Quest_30041

#include "Basic.hpp"

#include "Quest_30041_classes.hpp"
#include "Quest_30041_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30041.Quest_30041_C.ExecuteUbergraph_Quest_30041
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30041_C::ExecuteUbergraph_Quest_30041(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30041_C", "ExecuteUbergraph_Quest_30041");

	Params::Quest_30041_C_ExecuteUbergraph_Quest_30041 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30041.Quest_30041_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30041_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30041_C", "HandleFinishing");

	Params::Quest_30041_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30041.Quest_30041_C.OnSuccess_AB8C0D59437BE2FD9F2C4E83F6CC5523
// (BlueprintCallable, BlueprintEvent)

void UQuest_30041_C::OnSuccess_AB8C0D59437BE2FD9F2C4E83F6CC5523()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30041_C", "OnSuccess_AB8C0D59437BE2FD9F2C4E83F6CC5523");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30041.Quest_30041_C.OnFinished_A537180042D2B941CA6A0AAC684D00A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_30041_C::OnFinished_A537180042D2B941CA6A0AAC684D00A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30041_C", "OnFinished_A537180042D2B941CA6A0AAC684D00A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30041.Quest_30041_C.OnStop_A537180042D2B941CA6A0AAC684D00A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_30041_C::OnStop_A537180042D2B941CA6A0AAC684D00A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30041_C", "OnStop_A537180042D2B941CA6A0AAC684D00A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30041.Quest_30041_C.OnDlgClosed_BBDB251545DCB09536FAD19C6ED12E58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30041_C::OnDlgClosed_BBDB251545DCB09536FAD19C6ED12E58(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30041_C", "OnDlgClosed_BBDB251545DCB09536FAD19C6ED12E58");

	Params::Quest_30041_C_OnDlgClosed_BBDB251545DCB09536FAD19C6ED12E58 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30041.Quest_30041_C.OnDlgSelectedOption_BBDB251545DCB09536FAD19C6ED12E58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30041_C::OnDlgSelectedOption_BBDB251545DCB09536FAD19C6ED12E58(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30041_C", "OnDlgSelectedOption_BBDB251545DCB09536FAD19C6ED12E58");

	Params::Quest_30041_C_OnDlgSelectedOption_BBDB251545DCB09536FAD19C6ED12E58 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
