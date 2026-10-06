#pragma once



// Package: Quest_12632

#include "Basic.hpp"

#include "Quest_12632_classes.hpp"
#include "Quest_12632_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12632.Quest_12632_C.ExecuteUbergraph_Quest_12632
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12632_C::ExecuteUbergraph_Quest_12632(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12632_C", "ExecuteUbergraph_Quest_12632");

	Params::Quest_12632_C_ExecuteUbergraph_Quest_12632 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12632.Quest_12632_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12632_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12632_C", "HandleFinishing");

	Params::Quest_12632_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12632.Quest_12632_C.OnFinished_D122B93F45F1C225951B0A9F96B87402
// (BlueprintCallable, BlueprintEvent)

void UQuest_12632_C::OnFinished_D122B93F45F1C225951B0A9F96B87402()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12632_C", "OnFinished_D122B93F45F1C225951B0A9F96B87402");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12632.Quest_12632_C.OnStop_D122B93F45F1C225951B0A9F96B87402
// (BlueprintCallable, BlueprintEvent)

void UQuest_12632_C::OnStop_D122B93F45F1C225951B0A9F96B87402()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12632_C", "OnStop_D122B93F45F1C225951B0A9F96B87402");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12632.Quest_12632_C.OnDlgClosed_9CA688B942853C99786EC6A967371EB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12632_C::OnDlgClosed_9CA688B942853C99786EC6A967371EB9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12632_C", "OnDlgClosed_9CA688B942853C99786EC6A967371EB9");

	Params::Quest_12632_C_OnDlgClosed_9CA688B942853C99786EC6A967371EB9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12632.Quest_12632_C.OnDlgSelectedOption_9CA688B942853C99786EC6A967371EB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12632_C::OnDlgSelectedOption_9CA688B942853C99786EC6A967371EB9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12632_C", "OnDlgSelectedOption_9CA688B942853C99786EC6A967371EB9");

	Params::Quest_12632_C_OnDlgSelectedOption_9CA688B942853C99786EC6A967371EB9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12632.Quest_12632_C.OnSuccess_AFFE1EE1476E861760932AAF45C559A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12632_C::OnSuccess_AFFE1EE1476E861760932AAF45C559A8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12632_C", "OnSuccess_AFFE1EE1476E861760932AAF45C559A8");

	Params::Quest_12632_C_OnSuccess_AFFE1EE1476E861760932AAF45C559A8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
