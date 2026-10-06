#pragma once



// Package: Quest_12391

#include "Basic.hpp"

#include "Quest_12391_classes.hpp"
#include "Quest_12391_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12391.Quest_12391_C.ExecuteUbergraph_Quest_12391
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12391_C::ExecuteUbergraph_Quest_12391(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12391_C", "ExecuteUbergraph_Quest_12391");

	Params::Quest_12391_C_ExecuteUbergraph_Quest_12391 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12391.Quest_12391_C.好感度
// (BlueprintCallable, BlueprintEvent)

void UQuest_12391_C::好感度()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12391_C", "好感度");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12391.Quest_12391_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12391_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12391_C", "HandleFinishing");

	Params::Quest_12391_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12391.Quest_12391_C.OnFinished_6AC545C84624E5E1B905C7A294DC256A
// (BlueprintCallable, BlueprintEvent)

void UQuest_12391_C::OnFinished_6AC545C84624E5E1B905C7A294DC256A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12391_C", "OnFinished_6AC545C84624E5E1B905C7A294DC256A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12391.Quest_12391_C.OnStop_6AC545C84624E5E1B905C7A294DC256A
// (BlueprintCallable, BlueprintEvent)

void UQuest_12391_C::OnStop_6AC545C84624E5E1B905C7A294DC256A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12391_C", "OnStop_6AC545C84624E5E1B905C7A294DC256A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12391.Quest_12391_C.OnDlgClosed_536E16A443CFA91B7EEB49B304393422
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12391_C::OnDlgClosed_536E16A443CFA91B7EEB49B304393422(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12391_C", "OnDlgClosed_536E16A443CFA91B7EEB49B304393422");

	Params::Quest_12391_C_OnDlgClosed_536E16A443CFA91B7EEB49B304393422 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12391.Quest_12391_C.OnDlgSelectedOption_536E16A443CFA91B7EEB49B304393422
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12391_C::OnDlgSelectedOption_536E16A443CFA91B7EEB49B304393422(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12391_C", "OnDlgSelectedOption_536E16A443CFA91B7EEB49B304393422");

	Params::Quest_12391_C_OnDlgSelectedOption_536E16A443CFA91B7EEB49B304393422 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
