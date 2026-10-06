#pragma once



// Package: Quest_30062

#include "Basic.hpp"

#include "Quest_30062_classes.hpp"
#include "Quest_30062_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30062.Quest_30062_C.ExecuteUbergraph_Quest_30062
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30062_C::ExecuteUbergraph_Quest_30062(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30062_C", "ExecuteUbergraph_Quest_30062");

	Params::Quest_30062_C_ExecuteUbergraph_Quest_30062 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30062.Quest_30062_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30062_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30062_C", "HandleFinishing");

	Params::Quest_30062_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30062.Quest_30062_C.OnSuccess_633D26294AFB0D752FE558A1C2B0DC1C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30062_C::OnSuccess_633D26294AFB0D752FE558A1C2B0DC1C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30062_C", "OnSuccess_633D26294AFB0D752FE558A1C2B0DC1C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30062.Quest_30062_C.OnFinished_ED8A0A204AF06F4192C192B9BB9EB5CA
// (BlueprintCallable, BlueprintEvent)

void UQuest_30062_C::OnFinished_ED8A0A204AF06F4192C192B9BB9EB5CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30062_C", "OnFinished_ED8A0A204AF06F4192C192B9BB9EB5CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30062.Quest_30062_C.OnStop_ED8A0A204AF06F4192C192B9BB9EB5CA
// (BlueprintCallable, BlueprintEvent)

void UQuest_30062_C::OnStop_ED8A0A204AF06F4192C192B9BB9EB5CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30062_C", "OnStop_ED8A0A204AF06F4192C192B9BB9EB5CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30062.Quest_30062_C.OnDlgClosed_687C88CE4D3989F49CEBD294E8CE70BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30062_C::OnDlgClosed_687C88CE4D3989F49CEBD294E8CE70BB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30062_C", "OnDlgClosed_687C88CE4D3989F49CEBD294E8CE70BB");

	Params::Quest_30062_C_OnDlgClosed_687C88CE4D3989F49CEBD294E8CE70BB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30062.Quest_30062_C.OnDlgSelectedOption_687C88CE4D3989F49CEBD294E8CE70BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30062_C::OnDlgSelectedOption_687C88CE4D3989F49CEBD294E8CE70BB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30062_C", "OnDlgSelectedOption_687C88CE4D3989F49CEBD294E8CE70BB");

	Params::Quest_30062_C_OnDlgSelectedOption_687C88CE4D3989F49CEBD294E8CE70BB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
