#pragma once



// Package: Quest_28931

#include "Basic.hpp"

#include "Quest_28931_classes.hpp"
#include "Quest_28931_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28931.Quest_28931_C.ExecuteUbergraph_Quest_28931
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28931_C::ExecuteUbergraph_Quest_28931(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28931_C", "ExecuteUbergraph_Quest_28931");

	Params::Quest_28931_C_ExecuteUbergraph_Quest_28931 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28931.Quest_28931_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28931_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28931_C", "HandleFinishing");

	Params::Quest_28931_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28931.Quest_28931_C.OnFinished_4C055969498A6B4D77E35CAE9959E403
// (BlueprintCallable, BlueprintEvent)

void UQuest_28931_C::OnFinished_4C055969498A6B4D77E35CAE9959E403()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28931_C", "OnFinished_4C055969498A6B4D77E35CAE9959E403");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28931.Quest_28931_C.OnStop_4C055969498A6B4D77E35CAE9959E403
// (BlueprintCallable, BlueprintEvent)

void UQuest_28931_C::OnStop_4C055969498A6B4D77E35CAE9959E403()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28931_C", "OnStop_4C055969498A6B4D77E35CAE9959E403");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28931.Quest_28931_C.OnDlgClosed_5B5059354F04D0374A80A5B62D74802B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28931_C::OnDlgClosed_5B5059354F04D0374A80A5B62D74802B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28931_C", "OnDlgClosed_5B5059354F04D0374A80A5B62D74802B");

	Params::Quest_28931_C_OnDlgClosed_5B5059354F04D0374A80A5B62D74802B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28931.Quest_28931_C.OnDlgSelectedOption_5B5059354F04D0374A80A5B62D74802B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28931_C::OnDlgSelectedOption_5B5059354F04D0374A80A5B62D74802B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28931_C", "OnDlgSelectedOption_5B5059354F04D0374A80A5B62D74802B");

	Params::Quest_28931_C_OnDlgSelectedOption_5B5059354F04D0374A80A5B62D74802B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
