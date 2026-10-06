#pragma once



// Package: Quest_12266

#include "Basic.hpp"

#include "Quest_12266_classes.hpp"
#include "Quest_12266_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12266.Quest_12266_C.ExecuteUbergraph_Quest_12266
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12266_C::ExecuteUbergraph_Quest_12266(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12266_C", "ExecuteUbergraph_Quest_12266");

	Params::Quest_12266_C_ExecuteUbergraph_Quest_12266 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12266.Quest_12266_C.好感度
// (BlueprintCallable, BlueprintEvent)

void UQuest_12266_C::好感度()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12266_C", "好感度");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12266.Quest_12266_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12266_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12266_C", "HandleFinishing");

	Params::Quest_12266_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12266.Quest_12266_C.OnFinished_B5D261C84D8FB6F84BACA0B3785120BE
// (BlueprintCallable, BlueprintEvent)

void UQuest_12266_C::OnFinished_B5D261C84D8FB6F84BACA0B3785120BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12266_C", "OnFinished_B5D261C84D8FB6F84BACA0B3785120BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12266.Quest_12266_C.OnStop_B5D261C84D8FB6F84BACA0B3785120BE
// (BlueprintCallable, BlueprintEvent)

void UQuest_12266_C::OnStop_B5D261C84D8FB6F84BACA0B3785120BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12266_C", "OnStop_B5D261C84D8FB6F84BACA0B3785120BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12266.Quest_12266_C.OnDlgClosed_09BC868543C341773557078B1559AF91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12266_C::OnDlgClosed_09BC868543C341773557078B1559AF91(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12266_C", "OnDlgClosed_09BC868543C341773557078B1559AF91");

	Params::Quest_12266_C_OnDlgClosed_09BC868543C341773557078B1559AF91 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12266.Quest_12266_C.OnDlgSelectedOption_09BC868543C341773557078B1559AF91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12266_C::OnDlgSelectedOption_09BC868543C341773557078B1559AF91(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12266_C", "OnDlgSelectedOption_09BC868543C341773557078B1559AF91");

	Params::Quest_12266_C_OnDlgSelectedOption_09BC868543C341773557078B1559AF91 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
