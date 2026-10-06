#pragma once



// Package: Quest_16614

#include "Basic.hpp"

#include "Quest_16614_classes.hpp"
#include "Quest_16614_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16614.Quest_16614_C.ExecuteUbergraph_Quest_16614
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16614_C::ExecuteUbergraph_Quest_16614(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16614_C", "ExecuteUbergraph_Quest_16614");

	Params::Quest_16614_C_ExecuteUbergraph_Quest_16614 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16614.Quest_16614_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16614_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16614_C", "HandleFinishing");

	Params::Quest_16614_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16614.Quest_16614_C.OnSuccess_9017AEB94A84C11F974B6EA0DBD93A15
// (BlueprintCallable, BlueprintEvent)

void UQuest_16614_C::OnSuccess_9017AEB94A84C11F974B6EA0DBD93A15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16614_C", "OnSuccess_9017AEB94A84C11F974B6EA0DBD93A15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16614.Quest_16614_C.OnFinished_0A100DB54647BEDCB240E09170516902
// (BlueprintCallable, BlueprintEvent)

void UQuest_16614_C::OnFinished_0A100DB54647BEDCB240E09170516902()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16614_C", "OnFinished_0A100DB54647BEDCB240E09170516902");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16614.Quest_16614_C.OnStop_0A100DB54647BEDCB240E09170516902
// (BlueprintCallable, BlueprintEvent)

void UQuest_16614_C::OnStop_0A100DB54647BEDCB240E09170516902()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16614_C", "OnStop_0A100DB54647BEDCB240E09170516902");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16614.Quest_16614_C.OnDlgClosed_324FE78A4738EA576A09659C0A2ECD56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16614_C::OnDlgClosed_324FE78A4738EA576A09659C0A2ECD56(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16614_C", "OnDlgClosed_324FE78A4738EA576A09659C0A2ECD56");

	Params::Quest_16614_C_OnDlgClosed_324FE78A4738EA576A09659C0A2ECD56 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16614.Quest_16614_C.OnDlgSelectedOption_324FE78A4738EA576A09659C0A2ECD56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16614_C::OnDlgSelectedOption_324FE78A4738EA576A09659C0A2ECD56(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16614_C", "OnDlgSelectedOption_324FE78A4738EA576A09659C0A2ECD56");

	Params::Quest_16614_C_OnDlgSelectedOption_324FE78A4738EA576A09659C0A2ECD56 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
