#pragma once



// Package: Quest_12238

#include "Basic.hpp"

#include "Quest_12238_classes.hpp"
#include "Quest_12238_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12238.Quest_12238_C.ExecuteUbergraph_Quest_12238
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12238_C::ExecuteUbergraph_Quest_12238(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12238_C", "ExecuteUbergraph_Quest_12238");

	Params::Quest_12238_C_ExecuteUbergraph_Quest_12238 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12238.Quest_12238_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12238_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12238_C", "HandleFinishing");

	Params::Quest_12238_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12238.Quest_12238_C.OnFinished_6A72F37E4FC1D482E772CE951BA5B2A8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12238_C::OnFinished_6A72F37E4FC1D482E772CE951BA5B2A8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12238_C", "OnFinished_6A72F37E4FC1D482E772CE951BA5B2A8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12238.Quest_12238_C.OnStop_6A72F37E4FC1D482E772CE951BA5B2A8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12238_C::OnStop_6A72F37E4FC1D482E772CE951BA5B2A8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12238_C", "OnStop_6A72F37E4FC1D482E772CE951BA5B2A8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12238.Quest_12238_C.OnDlgClosed_8D94841B43AF48E33F1F2B967DC4566D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12238_C::OnDlgClosed_8D94841B43AF48E33F1F2B967DC4566D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12238_C", "OnDlgClosed_8D94841B43AF48E33F1F2B967DC4566D");

	Params::Quest_12238_C_OnDlgClosed_8D94841B43AF48E33F1F2B967DC4566D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12238.Quest_12238_C.OnDlgSelectedOption_8D94841B43AF48E33F1F2B967DC4566D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12238_C::OnDlgSelectedOption_8D94841B43AF48E33F1F2B967DC4566D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12238_C", "OnDlgSelectedOption_8D94841B43AF48E33F1F2B967DC4566D");

	Params::Quest_12238_C_OnDlgSelectedOption_8D94841B43AF48E33F1F2B967DC4566D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
