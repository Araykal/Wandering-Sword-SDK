#pragma once



// Package: Quest_29001

#include "Basic.hpp"

#include "Quest_29001_classes.hpp"
#include "Quest_29001_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29001.Quest_29001_C.ExecuteUbergraph_Quest_29001
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29001_C::ExecuteUbergraph_Quest_29001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29001_C", "ExecuteUbergraph_Quest_29001");

	Params::Quest_29001_C_ExecuteUbergraph_Quest_29001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29001.Quest_29001_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29001_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29001_C", "HandleFinishing");

	Params::Quest_29001_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29001.Quest_29001_C.OnSuccess_B8059D3C4FC088FF1CE1BD837D9E4235
// (BlueprintCallable, BlueprintEvent)

void UQuest_29001_C::OnSuccess_B8059D3C4FC088FF1CE1BD837D9E4235()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29001_C", "OnSuccess_B8059D3C4FC088FF1CE1BD837D9E4235");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29001.Quest_29001_C.OnFinished_A774528342769BA8FE25E1B9D4E94E14
// (BlueprintCallable, BlueprintEvent)

void UQuest_29001_C::OnFinished_A774528342769BA8FE25E1B9D4E94E14()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29001_C", "OnFinished_A774528342769BA8FE25E1B9D4E94E14");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29001.Quest_29001_C.OnStop_A774528342769BA8FE25E1B9D4E94E14
// (BlueprintCallable, BlueprintEvent)

void UQuest_29001_C::OnStop_A774528342769BA8FE25E1B9D4E94E14()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29001_C", "OnStop_A774528342769BA8FE25E1B9D4E94E14");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29001.Quest_29001_C.OnDlgClosed_7B9744F645D1E8DCE6536FADDC577F87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29001_C::OnDlgClosed_7B9744F645D1E8DCE6536FADDC577F87(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29001_C", "OnDlgClosed_7B9744F645D1E8DCE6536FADDC577F87");

	Params::Quest_29001_C_OnDlgClosed_7B9744F645D1E8DCE6536FADDC577F87 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29001.Quest_29001_C.OnDlgSelectedOption_7B9744F645D1E8DCE6536FADDC577F87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29001_C::OnDlgSelectedOption_7B9744F645D1E8DCE6536FADDC577F87(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29001_C", "OnDlgSelectedOption_7B9744F645D1E8DCE6536FADDC577F87");

	Params::Quest_29001_C_OnDlgSelectedOption_7B9744F645D1E8DCE6536FADDC577F87 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
