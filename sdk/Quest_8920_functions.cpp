#pragma once



// Package: Quest_8920

#include "Basic.hpp"

#include "Quest_8920_classes.hpp"
#include "Quest_8920_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_8920.Quest_8920_C.ExecuteUbergraph_Quest_8920
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_8920_C::ExecuteUbergraph_Quest_8920(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_8920_C", "ExecuteUbergraph_Quest_8920");

	Params::Quest_8920_C_ExecuteUbergraph_Quest_8920 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_8920.Quest_8920_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_8920_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_8920_C", "HandleFinishing");

	Params::Quest_8920_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_8920.Quest_8920_C.OnDlgClosed_7BBBC22C4CA59762B3D064B785008153
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_8920_C::OnDlgClosed_7BBBC22C4CA59762B3D064B785008153(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_8920_C", "OnDlgClosed_7BBBC22C4CA59762B3D064B785008153");

	Params::Quest_8920_C_OnDlgClosed_7BBBC22C4CA59762B3D064B785008153 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_8920.Quest_8920_C.OnDlgSelectedOption_7BBBC22C4CA59762B3D064B785008153
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_8920_C::OnDlgSelectedOption_7BBBC22C4CA59762B3D064B785008153(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_8920_C", "OnDlgSelectedOption_7BBBC22C4CA59762B3D064B785008153");

	Params::Quest_8920_C_OnDlgSelectedOption_7BBBC22C4CA59762B3D064B785008153 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_8920.Quest_8920_C.OnFinished_E033E9854CE65B38F6BDF4A1C29109A9
// (BlueprintCallable, BlueprintEvent)

void UQuest_8920_C::OnFinished_E033E9854CE65B38F6BDF4A1C29109A9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_8920_C", "OnFinished_E033E9854CE65B38F6BDF4A1C29109A9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_8920.Quest_8920_C.OnStop_E033E9854CE65B38F6BDF4A1C29109A9
// (BlueprintCallable, BlueprintEvent)

void UQuest_8920_C::OnStop_E033E9854CE65B38F6BDF4A1C29109A9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_8920_C", "OnStop_E033E9854CE65B38F6BDF4A1C29109A9");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
