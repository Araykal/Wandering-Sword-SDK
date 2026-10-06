#pragma once



// Package: Quest_28402

#include "Basic.hpp"

#include "Quest_28402_classes.hpp"
#include "Quest_28402_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28402.Quest_28402_C.ExecuteUbergraph_Quest_28402
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28402_C::ExecuteUbergraph_Quest_28402(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28402_C", "ExecuteUbergraph_Quest_28402");

	Params::Quest_28402_C_ExecuteUbergraph_Quest_28402 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28402.Quest_28402_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28402_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28402_C", "HandleFinishing");

	Params::Quest_28402_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28402.Quest_28402_C.OnFinished_09F18C414DD6683DF97AF091D81ED9D9
// (BlueprintCallable, BlueprintEvent)

void UQuest_28402_C::OnFinished_09F18C414DD6683DF97AF091D81ED9D9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28402_C", "OnFinished_09F18C414DD6683DF97AF091D81ED9D9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28402.Quest_28402_C.OnStop_09F18C414DD6683DF97AF091D81ED9D9
// (BlueprintCallable, BlueprintEvent)

void UQuest_28402_C::OnStop_09F18C414DD6683DF97AF091D81ED9D9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28402_C", "OnStop_09F18C414DD6683DF97AF091D81ED9D9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28402.Quest_28402_C.OnDlgClosed_B515819546D4B560D7901D8A302FBBC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28402_C::OnDlgClosed_B515819546D4B560D7901D8A302FBBC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28402_C", "OnDlgClosed_B515819546D4B560D7901D8A302FBBC7");

	Params::Quest_28402_C_OnDlgClosed_B515819546D4B560D7901D8A302FBBC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28402.Quest_28402_C.OnDlgSelectedOption_B515819546D4B560D7901D8A302FBBC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28402_C::OnDlgSelectedOption_B515819546D4B560D7901D8A302FBBC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28402_C", "OnDlgSelectedOption_B515819546D4B560D7901D8A302FBBC7");

	Params::Quest_28402_C_OnDlgSelectedOption_B515819546D4B560D7901D8A302FBBC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
