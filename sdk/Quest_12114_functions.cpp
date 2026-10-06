#pragma once



// Package: Quest_12114

#include "Basic.hpp"

#include "Quest_12114_classes.hpp"
#include "Quest_12114_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12114.Quest_12114_C.ExecuteUbergraph_Quest_12114
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12114_C::ExecuteUbergraph_Quest_12114(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12114_C", "ExecuteUbergraph_Quest_12114");

	Params::Quest_12114_C_ExecuteUbergraph_Quest_12114 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12114.Quest_12114_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12114_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12114_C", "HandleFinishing");

	Params::Quest_12114_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12114.Quest_12114_C.OnSuccess_4295C4FB4BCE05CD6020F8AF599019D8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12114_C::OnSuccess_4295C4FB4BCE05CD6020F8AF599019D8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12114_C", "OnSuccess_4295C4FB4BCE05CD6020F8AF599019D8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12114.Quest_12114_C.OnFinished_59911DBE409BA7533A226E99492D5AB4
// (BlueprintCallable, BlueprintEvent)

void UQuest_12114_C::OnFinished_59911DBE409BA7533A226E99492D5AB4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12114_C", "OnFinished_59911DBE409BA7533A226E99492D5AB4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12114.Quest_12114_C.OnStop_59911DBE409BA7533A226E99492D5AB4
// (BlueprintCallable, BlueprintEvent)

void UQuest_12114_C::OnStop_59911DBE409BA7533A226E99492D5AB4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12114_C", "OnStop_59911DBE409BA7533A226E99492D5AB4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12114.Quest_12114_C.OnDlgClosed_5B0BCA244CE258C9A3DBE9A2AF2D26A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12114_C::OnDlgClosed_5B0BCA244CE258C9A3DBE9A2AF2D26A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12114_C", "OnDlgClosed_5B0BCA244CE258C9A3DBE9A2AF2D26A3");

	Params::Quest_12114_C_OnDlgClosed_5B0BCA244CE258C9A3DBE9A2AF2D26A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12114.Quest_12114_C.OnDlgSelectedOption_5B0BCA244CE258C9A3DBE9A2AF2D26A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12114_C::OnDlgSelectedOption_5B0BCA244CE258C9A3DBE9A2AF2D26A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12114_C", "OnDlgSelectedOption_5B0BCA244CE258C9A3DBE9A2AF2D26A3");

	Params::Quest_12114_C_OnDlgSelectedOption_5B0BCA244CE258C9A3DBE9A2AF2D26A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
