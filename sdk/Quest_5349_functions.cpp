#pragma once



// Package: Quest_5349

#include "Basic.hpp"

#include "Quest_5349_classes.hpp"
#include "Quest_5349_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5349.Quest_5349_C.ExecuteUbergraph_Quest_5349
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5349_C::ExecuteUbergraph_Quest_5349(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5349_C", "ExecuteUbergraph_Quest_5349");

	Params::Quest_5349_C_ExecuteUbergraph_Quest_5349 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5349.Quest_5349_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5349_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5349_C", "HandleFinishing");

	Params::Quest_5349_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5349.Quest_5349_C.OnSuccess_DDAD3452491D4F4AA658E09DBBF3CAE6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5349_C::OnSuccess_DDAD3452491D4F4AA658E09DBBF3CAE6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5349_C", "OnSuccess_DDAD3452491D4F4AA658E09DBBF3CAE6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5349.Quest_5349_C.OnFinished_8025B4C8407B5340A4953385B620B80C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5349_C::OnFinished_8025B4C8407B5340A4953385B620B80C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5349_C", "OnFinished_8025B4C8407B5340A4953385B620B80C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5349.Quest_5349_C.OnStop_8025B4C8407B5340A4953385B620B80C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5349_C::OnStop_8025B4C8407B5340A4953385B620B80C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5349_C", "OnStop_8025B4C8407B5340A4953385B620B80C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5349.Quest_5349_C.OnDlgClosed_0A986873481BE6D6EC1ACE965DC3B017
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5349_C::OnDlgClosed_0A986873481BE6D6EC1ACE965DC3B017(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5349_C", "OnDlgClosed_0A986873481BE6D6EC1ACE965DC3B017");

	Params::Quest_5349_C_OnDlgClosed_0A986873481BE6D6EC1ACE965DC3B017 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5349.Quest_5349_C.OnDlgSelectedOption_0A986873481BE6D6EC1ACE965DC3B017
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5349_C::OnDlgSelectedOption_0A986873481BE6D6EC1ACE965DC3B017(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5349_C", "OnDlgSelectedOption_0A986873481BE6D6EC1ACE965DC3B017");

	Params::Quest_5349_C_OnDlgSelectedOption_0A986873481BE6D6EC1ACE965DC3B017 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
