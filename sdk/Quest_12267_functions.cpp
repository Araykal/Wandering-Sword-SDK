#pragma once



// Package: Quest_12267

#include "Basic.hpp"

#include "Quest_12267_classes.hpp"
#include "Quest_12267_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12267.Quest_12267_C.ExecuteUbergraph_Quest_12267
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12267_C::ExecuteUbergraph_Quest_12267(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12267_C", "ExecuteUbergraph_Quest_12267");

	Params::Quest_12267_C_ExecuteUbergraph_Quest_12267 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12267.Quest_12267_C.好感度
// (BlueprintCallable, BlueprintEvent)

void UQuest_12267_C::好感度()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12267_C", "好感度");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12267.Quest_12267_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12267_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12267_C", "HandleFinishing");

	Params::Quest_12267_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12267.Quest_12267_C.OnFinished_C613A21A40E8C239825549AFE5F1B9A0
// (BlueprintCallable, BlueprintEvent)

void UQuest_12267_C::OnFinished_C613A21A40E8C239825549AFE5F1B9A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12267_C", "OnFinished_C613A21A40E8C239825549AFE5F1B9A0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12267.Quest_12267_C.OnStop_C613A21A40E8C239825549AFE5F1B9A0
// (BlueprintCallable, BlueprintEvent)

void UQuest_12267_C::OnStop_C613A21A40E8C239825549AFE5F1B9A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12267_C", "OnStop_C613A21A40E8C239825549AFE5F1B9A0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12267.Quest_12267_C.OnDlgClosed_C24254C14E113D67A8B34CAF2E7A9A6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12267_C::OnDlgClosed_C24254C14E113D67A8B34CAF2E7A9A6E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12267_C", "OnDlgClosed_C24254C14E113D67A8B34CAF2E7A9A6E");

	Params::Quest_12267_C_OnDlgClosed_C24254C14E113D67A8B34CAF2E7A9A6E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12267.Quest_12267_C.OnDlgSelectedOption_C24254C14E113D67A8B34CAF2E7A9A6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12267_C::OnDlgSelectedOption_C24254C14E113D67A8B34CAF2E7A9A6E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12267_C", "OnDlgSelectedOption_C24254C14E113D67A8B34CAF2E7A9A6E");

	Params::Quest_12267_C_OnDlgSelectedOption_C24254C14E113D67A8B34CAF2E7A9A6E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
