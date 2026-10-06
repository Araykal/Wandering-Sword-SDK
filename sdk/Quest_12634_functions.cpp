#pragma once



// Package: Quest_12634

#include "Basic.hpp"

#include "Quest_12634_classes.hpp"
#include "Quest_12634_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12634.Quest_12634_C.ExecuteUbergraph_Quest_12634
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12634_C::ExecuteUbergraph_Quest_12634(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12634_C", "ExecuteUbergraph_Quest_12634");

	Params::Quest_12634_C_ExecuteUbergraph_Quest_12634 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12634.Quest_12634_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12634_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12634_C", "HandleFinishing");

	Params::Quest_12634_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12634.Quest_12634_C.OnFinished_D3DAAFB643318F71C88F838DCF9C44FF
// (BlueprintCallable, BlueprintEvent)

void UQuest_12634_C::OnFinished_D3DAAFB643318F71C88F838DCF9C44FF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12634_C", "OnFinished_D3DAAFB643318F71C88F838DCF9C44FF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12634.Quest_12634_C.OnStop_D3DAAFB643318F71C88F838DCF9C44FF
// (BlueprintCallable, BlueprintEvent)

void UQuest_12634_C::OnStop_D3DAAFB643318F71C88F838DCF9C44FF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12634_C", "OnStop_D3DAAFB643318F71C88F838DCF9C44FF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12634.Quest_12634_C.OnDlgClosed_12E4EF3C4EBEF9CF63DCECA79280E36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12634_C::OnDlgClosed_12E4EF3C4EBEF9CF63DCECA79280E36E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12634_C", "OnDlgClosed_12E4EF3C4EBEF9CF63DCECA79280E36E");

	Params::Quest_12634_C_OnDlgClosed_12E4EF3C4EBEF9CF63DCECA79280E36E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12634.Quest_12634_C.OnDlgSelectedOption_12E4EF3C4EBEF9CF63DCECA79280E36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12634_C::OnDlgSelectedOption_12E4EF3C4EBEF9CF63DCECA79280E36E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12634_C", "OnDlgSelectedOption_12E4EF3C4EBEF9CF63DCECA79280E36E");

	Params::Quest_12634_C_OnDlgSelectedOption_12E4EF3C4EBEF9CF63DCECA79280E36E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
