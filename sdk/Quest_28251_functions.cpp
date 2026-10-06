#pragma once



// Package: Quest_28251

#include "Basic.hpp"

#include "Quest_28251_classes.hpp"
#include "Quest_28251_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28251.Quest_28251_C.ExecuteUbergraph_Quest_28251
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28251_C::ExecuteUbergraph_Quest_28251(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28251_C", "ExecuteUbergraph_Quest_28251");

	Params::Quest_28251_C_ExecuteUbergraph_Quest_28251 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28251.Quest_28251_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28251_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28251_C", "HandleFinishing");

	Params::Quest_28251_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28251.Quest_28251_C.OnFinished_0C1147C840BC3B7F785F598A96AF4E35
// (BlueprintCallable, BlueprintEvent)

void UQuest_28251_C::OnFinished_0C1147C840BC3B7F785F598A96AF4E35()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28251_C", "OnFinished_0C1147C840BC3B7F785F598A96AF4E35");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28251.Quest_28251_C.OnStop_0C1147C840BC3B7F785F598A96AF4E35
// (BlueprintCallable, BlueprintEvent)

void UQuest_28251_C::OnStop_0C1147C840BC3B7F785F598A96AF4E35()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28251_C", "OnStop_0C1147C840BC3B7F785F598A96AF4E35");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28251.Quest_28251_C.OnDlgClosed_8A72B31D44FD0E8CB66F58AD675AC16D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28251_C::OnDlgClosed_8A72B31D44FD0E8CB66F58AD675AC16D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28251_C", "OnDlgClosed_8A72B31D44FD0E8CB66F58AD675AC16D");

	Params::Quest_28251_C_OnDlgClosed_8A72B31D44FD0E8CB66F58AD675AC16D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28251.Quest_28251_C.OnDlgSelectedOption_8A72B31D44FD0E8CB66F58AD675AC16D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28251_C::OnDlgSelectedOption_8A72B31D44FD0E8CB66F58AD675AC16D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28251_C", "OnDlgSelectedOption_8A72B31D44FD0E8CB66F58AD675AC16D");

	Params::Quest_28251_C_OnDlgSelectedOption_8A72B31D44FD0E8CB66F58AD675AC16D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
