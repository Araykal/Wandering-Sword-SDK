#pragma once



// Package: Quest_5247

#include "Basic.hpp"

#include "Quest_5247_classes.hpp"
#include "Quest_5247_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5247.Quest_5247_C.ExecuteUbergraph_Quest_5247
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5247_C::ExecuteUbergraph_Quest_5247(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5247_C", "ExecuteUbergraph_Quest_5247");

	Params::Quest_5247_C_ExecuteUbergraph_Quest_5247 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5247.Quest_5247_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5247_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5247_C", "HandleFinishing");

	Params::Quest_5247_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5247.Quest_5247_C.OnFinished_4309194444182D541BDD0D9B4590477B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5247_C::OnFinished_4309194444182D541BDD0D9B4590477B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5247_C", "OnFinished_4309194444182D541BDD0D9B4590477B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5247.Quest_5247_C.OnStop_4309194444182D541BDD0D9B4590477B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5247_C::OnStop_4309194444182D541BDD0D9B4590477B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5247_C", "OnStop_4309194444182D541BDD0D9B4590477B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5247.Quest_5247_C.OnDlgClosed_D399C08B4A18952D27E4FB8E6275A21A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5247_C::OnDlgClosed_D399C08B4A18952D27E4FB8E6275A21A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5247_C", "OnDlgClosed_D399C08B4A18952D27E4FB8E6275A21A");

	Params::Quest_5247_C_OnDlgClosed_D399C08B4A18952D27E4FB8E6275A21A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5247.Quest_5247_C.OnDlgSelectedOption_D399C08B4A18952D27E4FB8E6275A21A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5247_C::OnDlgSelectedOption_D399C08B4A18952D27E4FB8E6275A21A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5247_C", "OnDlgSelectedOption_D399C08B4A18952D27E4FB8E6275A21A");

	Params::Quest_5247_C_OnDlgSelectedOption_D399C08B4A18952D27E4FB8E6275A21A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
