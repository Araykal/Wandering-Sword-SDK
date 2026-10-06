#pragma once



// Package: Quest_14151

#include "Basic.hpp"

#include "Quest_14151_classes.hpp"
#include "Quest_14151_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14151.Quest_14151_C.ExecuteUbergraph_Quest_14151
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14151_C::ExecuteUbergraph_Quest_14151(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14151_C", "ExecuteUbergraph_Quest_14151");

	Params::Quest_14151_C_ExecuteUbergraph_Quest_14151 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14151.Quest_14151_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14151_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14151_C", "HandleFinishing");

	Params::Quest_14151_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14151.Quest_14151_C.OnFinished_12DA74B74BFF815ED04B5F807AA0D4C5
// (BlueprintCallable, BlueprintEvent)

void UQuest_14151_C::OnFinished_12DA74B74BFF815ED04B5F807AA0D4C5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14151_C", "OnFinished_12DA74B74BFF815ED04B5F807AA0D4C5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14151.Quest_14151_C.OnStop_12DA74B74BFF815ED04B5F807AA0D4C5
// (BlueprintCallable, BlueprintEvent)

void UQuest_14151_C::OnStop_12DA74B74BFF815ED04B5F807AA0D4C5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14151_C", "OnStop_12DA74B74BFF815ED04B5F807AA0D4C5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14151.Quest_14151_C.OnDlgClosed_F8323B4447E9436D222F488A88D3A040
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14151_C::OnDlgClosed_F8323B4447E9436D222F488A88D3A040(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14151_C", "OnDlgClosed_F8323B4447E9436D222F488A88D3A040");

	Params::Quest_14151_C_OnDlgClosed_F8323B4447E9436D222F488A88D3A040 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14151.Quest_14151_C.OnDlgSelectedOption_F8323B4447E9436D222F488A88D3A040
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14151_C::OnDlgSelectedOption_F8323B4447E9436D222F488A88D3A040(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14151_C", "OnDlgSelectedOption_F8323B4447E9436D222F488A88D3A040");

	Params::Quest_14151_C_OnDlgSelectedOption_F8323B4447E9436D222F488A88D3A040 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
