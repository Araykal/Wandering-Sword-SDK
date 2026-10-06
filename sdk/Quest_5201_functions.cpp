#pragma once



// Package: Quest_5201

#include "Basic.hpp"

#include "Quest_5201_classes.hpp"
#include "Quest_5201_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5201.Quest_5201_C.ExecuteUbergraph_Quest_5201
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5201_C::ExecuteUbergraph_Quest_5201(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5201_C", "ExecuteUbergraph_Quest_5201");

	Params::Quest_5201_C_ExecuteUbergraph_Quest_5201 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5201.Quest_5201_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5201_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5201_C", "HandleFinishing");

	Params::Quest_5201_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5201.Quest_5201_C.OnFinished_ACF0AE0C47CA1C272AC5C399D2F13CEA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5201_C::OnFinished_ACF0AE0C47CA1C272AC5C399D2F13CEA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5201_C", "OnFinished_ACF0AE0C47CA1C272AC5C399D2F13CEA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5201.Quest_5201_C.OnStop_ACF0AE0C47CA1C272AC5C399D2F13CEA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5201_C::OnStop_ACF0AE0C47CA1C272AC5C399D2F13CEA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5201_C", "OnStop_ACF0AE0C47CA1C272AC5C399D2F13CEA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5201.Quest_5201_C.OnDlgClosed_9BAB52784321355E27D51FA1F4189985
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5201_C::OnDlgClosed_9BAB52784321355E27D51FA1F4189985(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5201_C", "OnDlgClosed_9BAB52784321355E27D51FA1F4189985");

	Params::Quest_5201_C_OnDlgClosed_9BAB52784321355E27D51FA1F4189985 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5201.Quest_5201_C.OnDlgSelectedOption_9BAB52784321355E27D51FA1F4189985
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5201_C::OnDlgSelectedOption_9BAB52784321355E27D51FA1F4189985(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5201_C", "OnDlgSelectedOption_9BAB52784321355E27D51FA1F4189985");

	Params::Quest_5201_C_OnDlgSelectedOption_9BAB52784321355E27D51FA1F4189985 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
