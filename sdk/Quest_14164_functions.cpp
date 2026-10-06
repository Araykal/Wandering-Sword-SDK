#pragma once



// Package: Quest_14164

#include "Basic.hpp"

#include "Quest_14164_classes.hpp"
#include "Quest_14164_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14164.Quest_14164_C.ExecuteUbergraph_Quest_14164
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14164_C::ExecuteUbergraph_Quest_14164(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14164_C", "ExecuteUbergraph_Quest_14164");

	Params::Quest_14164_C_ExecuteUbergraph_Quest_14164 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14164.Quest_14164_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14164_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14164_C", "HandleFinishing");

	Params::Quest_14164_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14164.Quest_14164_C.OnFinished_42CC4855498C9074FA79B1B4746689C7
// (BlueprintCallable, BlueprintEvent)

void UQuest_14164_C::OnFinished_42CC4855498C9074FA79B1B4746689C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14164_C", "OnFinished_42CC4855498C9074FA79B1B4746689C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14164.Quest_14164_C.OnStop_42CC4855498C9074FA79B1B4746689C7
// (BlueprintCallable, BlueprintEvent)

void UQuest_14164_C::OnStop_42CC4855498C9074FA79B1B4746689C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14164_C", "OnStop_42CC4855498C9074FA79B1B4746689C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14164.Quest_14164_C.OnDlgClosed_554E122743D919C7C6F3FFA76413AF03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14164_C::OnDlgClosed_554E122743D919C7C6F3FFA76413AF03(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14164_C", "OnDlgClosed_554E122743D919C7C6F3FFA76413AF03");

	Params::Quest_14164_C_OnDlgClosed_554E122743D919C7C6F3FFA76413AF03 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14164.Quest_14164_C.OnDlgSelectedOption_554E122743D919C7C6F3FFA76413AF03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14164_C::OnDlgSelectedOption_554E122743D919C7C6F3FFA76413AF03(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14164_C", "OnDlgSelectedOption_554E122743D919C7C6F3FFA76413AF03");

	Params::Quest_14164_C_OnDlgSelectedOption_554E122743D919C7C6F3FFA76413AF03 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
