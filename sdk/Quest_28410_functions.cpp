#pragma once



// Package: Quest_28410

#include "Basic.hpp"

#include "Quest_28410_classes.hpp"
#include "Quest_28410_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28410.Quest_28410_C.ExecuteUbergraph_Quest_28410
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28410_C::ExecuteUbergraph_Quest_28410(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28410_C", "ExecuteUbergraph_Quest_28410");

	Params::Quest_28410_C_ExecuteUbergraph_Quest_28410 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28410.Quest_28410_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28410_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28410_C", "HandleFinishing");

	Params::Quest_28410_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28410.Quest_28410_C.OnFinished_112DDC2443E443DB46C78CB74A4243FB
// (BlueprintCallable, BlueprintEvent)

void UQuest_28410_C::OnFinished_112DDC2443E443DB46C78CB74A4243FB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28410_C", "OnFinished_112DDC2443E443DB46C78CB74A4243FB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28410.Quest_28410_C.OnStop_112DDC2443E443DB46C78CB74A4243FB
// (BlueprintCallable, BlueprintEvent)

void UQuest_28410_C::OnStop_112DDC2443E443DB46C78CB74A4243FB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28410_C", "OnStop_112DDC2443E443DB46C78CB74A4243FB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28410.Quest_28410_C.OnDlgClosed_49E48BB14F551D66415513B516633F47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28410_C::OnDlgClosed_49E48BB14F551D66415513B516633F47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28410_C", "OnDlgClosed_49E48BB14F551D66415513B516633F47");

	Params::Quest_28410_C_OnDlgClosed_49E48BB14F551D66415513B516633F47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28410.Quest_28410_C.OnDlgSelectedOption_49E48BB14F551D66415513B516633F47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28410_C::OnDlgSelectedOption_49E48BB14F551D66415513B516633F47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28410_C", "OnDlgSelectedOption_49E48BB14F551D66415513B516633F47");

	Params::Quest_28410_C_OnDlgSelectedOption_49E48BB14F551D66415513B516633F47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
