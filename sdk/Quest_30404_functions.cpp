#pragma once



// Package: Quest_30404

#include "Basic.hpp"

#include "Quest_30404_classes.hpp"
#include "Quest_30404_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30404.Quest_30404_C.ExecuteUbergraph_Quest_30404
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30404_C::ExecuteUbergraph_Quest_30404(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30404_C", "ExecuteUbergraph_Quest_30404");

	Params::Quest_30404_C_ExecuteUbergraph_Quest_30404 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30404.Quest_30404_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30404_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30404_C", "HandleFinishing");

	Params::Quest_30404_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30404.Quest_30404_C.OnFinished_AC05B19442DAA48CCB952891F1A6E144
// (BlueprintCallable, BlueprintEvent)

void UQuest_30404_C::OnFinished_AC05B19442DAA48CCB952891F1A6E144()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30404_C", "OnFinished_AC05B19442DAA48CCB952891F1A6E144");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30404.Quest_30404_C.OnStop_AC05B19442DAA48CCB952891F1A6E144
// (BlueprintCallable, BlueprintEvent)

void UQuest_30404_C::OnStop_AC05B19442DAA48CCB952891F1A6E144()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30404_C", "OnStop_AC05B19442DAA48CCB952891F1A6E144");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30404.Quest_30404_C.OnDlgClosed_80D0027545061D329EA6B0A3017C96F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30404_C::OnDlgClosed_80D0027545061D329EA6B0A3017C96F3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30404_C", "OnDlgClosed_80D0027545061D329EA6B0A3017C96F3");

	Params::Quest_30404_C_OnDlgClosed_80D0027545061D329EA6B0A3017C96F3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30404.Quest_30404_C.OnDlgSelectedOption_80D0027545061D329EA6B0A3017C96F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30404_C::OnDlgSelectedOption_80D0027545061D329EA6B0A3017C96F3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30404_C", "OnDlgSelectedOption_80D0027545061D329EA6B0A3017C96F3");

	Params::Quest_30404_C_OnDlgSelectedOption_80D0027545061D329EA6B0A3017C96F3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
