#pragma once



// Package: Quest_28019

#include "Basic.hpp"

#include "Quest_28019_classes.hpp"
#include "Quest_28019_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28019.Quest_28019_C.ExecuteUbergraph_Quest_28019
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28019_C::ExecuteUbergraph_Quest_28019(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28019_C", "ExecuteUbergraph_Quest_28019");

	Params::Quest_28019_C_ExecuteUbergraph_Quest_28019 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28019.Quest_28019_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28019_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28019_C", "HandleFinishing");

	Params::Quest_28019_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28019.Quest_28019_C.OnSuccess_77DD02234A8D47C16B2C17ADBED69E78
// (BlueprintCallable, BlueprintEvent)

void UQuest_28019_C::OnSuccess_77DD02234A8D47C16B2C17ADBED69E78()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28019_C", "OnSuccess_77DD02234A8D47C16B2C17ADBED69E78");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28019.Quest_28019_C.OnFinished_923E128C4CC2812E8A8BE781FD569AF0
// (BlueprintCallable, BlueprintEvent)

void UQuest_28019_C::OnFinished_923E128C4CC2812E8A8BE781FD569AF0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28019_C", "OnFinished_923E128C4CC2812E8A8BE781FD569AF0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28019.Quest_28019_C.OnStop_923E128C4CC2812E8A8BE781FD569AF0
// (BlueprintCallable, BlueprintEvent)

void UQuest_28019_C::OnStop_923E128C4CC2812E8A8BE781FD569AF0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28019_C", "OnStop_923E128C4CC2812E8A8BE781FD569AF0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28019.Quest_28019_C.OnDlgClosed_F7E7C51E4C29A0D7703AF09420CAFFEE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28019_C::OnDlgClosed_F7E7C51E4C29A0D7703AF09420CAFFEE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28019_C", "OnDlgClosed_F7E7C51E4C29A0D7703AF09420CAFFEE");

	Params::Quest_28019_C_OnDlgClosed_F7E7C51E4C29A0D7703AF09420CAFFEE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28019.Quest_28019_C.OnDlgSelectedOption_F7E7C51E4C29A0D7703AF09420CAFFEE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28019_C::OnDlgSelectedOption_F7E7C51E4C29A0D7703AF09420CAFFEE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28019_C", "OnDlgSelectedOption_F7E7C51E4C29A0D7703AF09420CAFFEE");

	Params::Quest_28019_C_OnDlgSelectedOption_F7E7C51E4C29A0D7703AF09420CAFFEE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
