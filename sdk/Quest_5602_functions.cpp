#pragma once



// Package: Quest_5602

#include "Basic.hpp"

#include "Quest_5602_classes.hpp"
#include "Quest_5602_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5602.Quest_5602_C.ExecuteUbergraph_Quest_5602
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5602_C::ExecuteUbergraph_Quest_5602(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5602_C", "ExecuteUbergraph_Quest_5602");

	Params::Quest_5602_C_ExecuteUbergraph_Quest_5602 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5602.Quest_5602_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5602_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5602_C", "HandleFinishing");

	Params::Quest_5602_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5602.Quest_5602_C.OnSuccess_B6F9ECB74A7262DA62202C8FF3B3DB10
// (BlueprintCallable, BlueprintEvent)

void UQuest_5602_C::OnSuccess_B6F9ECB74A7262DA62202C8FF3B3DB10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5602_C", "OnSuccess_B6F9ECB74A7262DA62202C8FF3B3DB10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5602.Quest_5602_C.OnFinished_41F6262A44C7FC29C53563B7F6F7CBBF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5602_C::OnFinished_41F6262A44C7FC29C53563B7F6F7CBBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5602_C", "OnFinished_41F6262A44C7FC29C53563B7F6F7CBBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5602.Quest_5602_C.OnStop_41F6262A44C7FC29C53563B7F6F7CBBF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5602_C::OnStop_41F6262A44C7FC29C53563B7F6F7CBBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5602_C", "OnStop_41F6262A44C7FC29C53563B7F6F7CBBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5602.Quest_5602_C.OnDlgClosed_1360D6334E954CEAA5393F9C5E4D2631
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5602_C::OnDlgClosed_1360D6334E954CEAA5393F9C5E4D2631(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5602_C", "OnDlgClosed_1360D6334E954CEAA5393F9C5E4D2631");

	Params::Quest_5602_C_OnDlgClosed_1360D6334E954CEAA5393F9C5E4D2631 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5602.Quest_5602_C.OnDlgSelectedOption_1360D6334E954CEAA5393F9C5E4D2631
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5602_C::OnDlgSelectedOption_1360D6334E954CEAA5393F9C5E4D2631(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5602_C", "OnDlgSelectedOption_1360D6334E954CEAA5393F9C5E4D2631");

	Params::Quest_5602_C_OnDlgSelectedOption_1360D6334E954CEAA5393F9C5E4D2631 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
