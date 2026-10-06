#pragma once



// Package: Quest_5731

#include "Basic.hpp"

#include "Quest_5731_classes.hpp"
#include "Quest_5731_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5731.Quest_5731_C.ExecuteUbergraph_Quest_5731
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5731_C::ExecuteUbergraph_Quest_5731(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5731_C", "ExecuteUbergraph_Quest_5731");

	Params::Quest_5731_C_ExecuteUbergraph_Quest_5731 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5731.Quest_5731_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5731_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5731_C", "HandleFinishing");

	Params::Quest_5731_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5731.Quest_5731_C.OnFinished_396C5E2746338E997521C08EFAAAFBA4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5731_C::OnFinished_396C5E2746338E997521C08EFAAAFBA4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5731_C", "OnFinished_396C5E2746338E997521C08EFAAAFBA4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5731.Quest_5731_C.OnStop_396C5E2746338E997521C08EFAAAFBA4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5731_C::OnStop_396C5E2746338E997521C08EFAAAFBA4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5731_C", "OnStop_396C5E2746338E997521C08EFAAAFBA4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5731.Quest_5731_C.OnDlgClosed_750F68DB466321AE96DC87A4735CF18E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5731_C::OnDlgClosed_750F68DB466321AE96DC87A4735CF18E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5731_C", "OnDlgClosed_750F68DB466321AE96DC87A4735CF18E");

	Params::Quest_5731_C_OnDlgClosed_750F68DB466321AE96DC87A4735CF18E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5731.Quest_5731_C.OnDlgSelectedOption_750F68DB466321AE96DC87A4735CF18E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5731_C::OnDlgSelectedOption_750F68DB466321AE96DC87A4735CF18E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5731_C", "OnDlgSelectedOption_750F68DB466321AE96DC87A4735CF18E");

	Params::Quest_5731_C_OnDlgSelectedOption_750F68DB466321AE96DC87A4735CF18E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
