#pragma once



// Package: Quest_12401

#include "Basic.hpp"

#include "Quest_12401_classes.hpp"
#include "Quest_12401_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12401.Quest_12401_C.ExecuteUbergraph_Quest_12401
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12401_C::ExecuteUbergraph_Quest_12401(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12401_C", "ExecuteUbergraph_Quest_12401");

	Params::Quest_12401_C_ExecuteUbergraph_Quest_12401 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12401.Quest_12401_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12401_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12401_C", "HandleFinishing");

	Params::Quest_12401_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12401.Quest_12401_C.OnFinished_B9AFDFC4426FB54C0F8849931AFD8509
// (BlueprintCallable, BlueprintEvent)

void UQuest_12401_C::OnFinished_B9AFDFC4426FB54C0F8849931AFD8509()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12401_C", "OnFinished_B9AFDFC4426FB54C0F8849931AFD8509");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12401.Quest_12401_C.OnStop_B9AFDFC4426FB54C0F8849931AFD8509
// (BlueprintCallable, BlueprintEvent)

void UQuest_12401_C::OnStop_B9AFDFC4426FB54C0F8849931AFD8509()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12401_C", "OnStop_B9AFDFC4426FB54C0F8849931AFD8509");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12401.Quest_12401_C.OnDlgClosed_21F7E5264F179E29EF166A9D7FB7C586
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12401_C::OnDlgClosed_21F7E5264F179E29EF166A9D7FB7C586(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12401_C", "OnDlgClosed_21F7E5264F179E29EF166A9D7FB7C586");

	Params::Quest_12401_C_OnDlgClosed_21F7E5264F179E29EF166A9D7FB7C586 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12401.Quest_12401_C.OnDlgSelectedOption_21F7E5264F179E29EF166A9D7FB7C586
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12401_C::OnDlgSelectedOption_21F7E5264F179E29EF166A9D7FB7C586(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12401_C", "OnDlgSelectedOption_21F7E5264F179E29EF166A9D7FB7C586");

	Params::Quest_12401_C_OnDlgSelectedOption_21F7E5264F179E29EF166A9D7FB7C586 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
