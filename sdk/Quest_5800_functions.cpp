#pragma once



// Package: Quest_5800

#include "Basic.hpp"

#include "Quest_5800_classes.hpp"
#include "Quest_5800_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5800.Quest_5800_C.ExecuteUbergraph_Quest_5800
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5800_C::ExecuteUbergraph_Quest_5800(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5800_C", "ExecuteUbergraph_Quest_5800");

	Params::Quest_5800_C_ExecuteUbergraph_Quest_5800 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5800.Quest_5800_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5800_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5800_C", "HandleFinishing");

	Params::Quest_5800_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5800.Quest_5800_C.OnFinished_49F10E534B5BC603E9641F8EB360B199
// (BlueprintCallable, BlueprintEvent)

void UQuest_5800_C::OnFinished_49F10E534B5BC603E9641F8EB360B199()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5800_C", "OnFinished_49F10E534B5BC603E9641F8EB360B199");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5800.Quest_5800_C.OnStop_49F10E534B5BC603E9641F8EB360B199
// (BlueprintCallable, BlueprintEvent)

void UQuest_5800_C::OnStop_49F10E534B5BC603E9641F8EB360B199()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5800_C", "OnStop_49F10E534B5BC603E9641F8EB360B199");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5800.Quest_5800_C.OnDlgClosed_F68A107A478AA0A742F4EF847396FA13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5800_C::OnDlgClosed_F68A107A478AA0A742F4EF847396FA13(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5800_C", "OnDlgClosed_F68A107A478AA0A742F4EF847396FA13");

	Params::Quest_5800_C_OnDlgClosed_F68A107A478AA0A742F4EF847396FA13 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5800.Quest_5800_C.OnDlgSelectedOption_F68A107A478AA0A742F4EF847396FA13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5800_C::OnDlgSelectedOption_F68A107A478AA0A742F4EF847396FA13(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5800_C", "OnDlgSelectedOption_F68A107A478AA0A742F4EF847396FA13");

	Params::Quest_5800_C_OnDlgSelectedOption_F68A107A478AA0A742F4EF847396FA13 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
