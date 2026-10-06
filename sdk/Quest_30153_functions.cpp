#pragma once



// Package: Quest_30153

#include "Basic.hpp"

#include "Quest_30153_classes.hpp"
#include "Quest_30153_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30153.Quest_30153_C.ExecuteUbergraph_Quest_30153
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30153_C::ExecuteUbergraph_Quest_30153(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30153_C", "ExecuteUbergraph_Quest_30153");

	Params::Quest_30153_C_ExecuteUbergraph_Quest_30153 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30153.Quest_30153_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30153_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30153_C", "HandleFinishing");

	Params::Quest_30153_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30153.Quest_30153_C.OnSuccess_2E58843647B097B75DFEF0A98F7CE5F3
// (BlueprintCallable, BlueprintEvent)

void UQuest_30153_C::OnSuccess_2E58843647B097B75DFEF0A98F7CE5F3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30153_C", "OnSuccess_2E58843647B097B75DFEF0A98F7CE5F3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30153.Quest_30153_C.OnFinished_9F2EA734467079457A4EF4A8A986017F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30153_C::OnFinished_9F2EA734467079457A4EF4A8A986017F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30153_C", "OnFinished_9F2EA734467079457A4EF4A8A986017F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30153.Quest_30153_C.OnStop_9F2EA734467079457A4EF4A8A986017F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30153_C::OnStop_9F2EA734467079457A4EF4A8A986017F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30153_C", "OnStop_9F2EA734467079457A4EF4A8A986017F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30153.Quest_30153_C.OnDlgClosed_B8FC344045AD8CD903655ABE43E13E87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30153_C::OnDlgClosed_B8FC344045AD8CD903655ABE43E13E87(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30153_C", "OnDlgClosed_B8FC344045AD8CD903655ABE43E13E87");

	Params::Quest_30153_C_OnDlgClosed_B8FC344045AD8CD903655ABE43E13E87 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30153.Quest_30153_C.OnDlgSelectedOption_B8FC344045AD8CD903655ABE43E13E87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30153_C::OnDlgSelectedOption_B8FC344045AD8CD903655ABE43E13E87(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30153_C", "OnDlgSelectedOption_B8FC344045AD8CD903655ABE43E13E87");

	Params::Quest_30153_C_OnDlgSelectedOption_B8FC344045AD8CD903655ABE43E13E87 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
