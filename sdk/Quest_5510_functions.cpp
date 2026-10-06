#pragma once



// Package: Quest_5510

#include "Basic.hpp"

#include "Quest_5510_classes.hpp"
#include "Quest_5510_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5510.Quest_5510_C.ExecuteUbergraph_Quest_5510
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5510_C::ExecuteUbergraph_Quest_5510(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5510_C", "ExecuteUbergraph_Quest_5510");

	Params::Quest_5510_C_ExecuteUbergraph_Quest_5510 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5510.Quest_5510_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5510_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5510_C", "HandleFinishing");

	Params::Quest_5510_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5510.Quest_5510_C.OnFinished_9CE365D74655331AAFA1A58947AD7D1A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5510_C::OnFinished_9CE365D74655331AAFA1A58947AD7D1A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5510_C", "OnFinished_9CE365D74655331AAFA1A58947AD7D1A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5510.Quest_5510_C.OnStop_9CE365D74655331AAFA1A58947AD7D1A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5510_C::OnStop_9CE365D74655331AAFA1A58947AD7D1A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5510_C", "OnStop_9CE365D74655331AAFA1A58947AD7D1A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5510.Quest_5510_C.OnDlgClosed_72BEC2744AC29BD999D23C876B168F2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5510_C::OnDlgClosed_72BEC2744AC29BD999D23C876B168F2D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5510_C", "OnDlgClosed_72BEC2744AC29BD999D23C876B168F2D");

	Params::Quest_5510_C_OnDlgClosed_72BEC2744AC29BD999D23C876B168F2D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5510.Quest_5510_C.OnDlgSelectedOption_72BEC2744AC29BD999D23C876B168F2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5510_C::OnDlgSelectedOption_72BEC2744AC29BD999D23C876B168F2D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5510_C", "OnDlgSelectedOption_72BEC2744AC29BD999D23C876B168F2D");

	Params::Quest_5510_C_OnDlgSelectedOption_72BEC2744AC29BD999D23C876B168F2D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
