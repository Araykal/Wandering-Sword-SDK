#pragma once



// Package: Quest_30065

#include "Basic.hpp"

#include "Quest_30065_classes.hpp"
#include "Quest_30065_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30065.Quest_30065_C.ExecuteUbergraph_Quest_30065
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30065_C::ExecuteUbergraph_Quest_30065(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30065_C", "ExecuteUbergraph_Quest_30065");

	Params::Quest_30065_C_ExecuteUbergraph_Quest_30065 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30065.Quest_30065_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30065_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30065_C", "HandleFinishing");

	Params::Quest_30065_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30065.Quest_30065_C.OnSuccess_051058274C179615639D27A82D1690E0
// (BlueprintCallable, BlueprintEvent)

void UQuest_30065_C::OnSuccess_051058274C179615639D27A82D1690E0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30065_C", "OnSuccess_051058274C179615639D27A82D1690E0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30065.Quest_30065_C.OnFinished_03D257034EE8AE6C90AF4B93A4CC9E59
// (BlueprintCallable, BlueprintEvent)

void UQuest_30065_C::OnFinished_03D257034EE8AE6C90AF4B93A4CC9E59()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30065_C", "OnFinished_03D257034EE8AE6C90AF4B93A4CC9E59");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30065.Quest_30065_C.OnStop_03D257034EE8AE6C90AF4B93A4CC9E59
// (BlueprintCallable, BlueprintEvent)

void UQuest_30065_C::OnStop_03D257034EE8AE6C90AF4B93A4CC9E59()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30065_C", "OnStop_03D257034EE8AE6C90AF4B93A4CC9E59");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30065.Quest_30065_C.OnDlgClosed_9788C2E34EFC24F4C7B8FEBB6D165E63
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30065_C::OnDlgClosed_9788C2E34EFC24F4C7B8FEBB6D165E63(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30065_C", "OnDlgClosed_9788C2E34EFC24F4C7B8FEBB6D165E63");

	Params::Quest_30065_C_OnDlgClosed_9788C2E34EFC24F4C7B8FEBB6D165E63 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30065.Quest_30065_C.OnDlgSelectedOption_9788C2E34EFC24F4C7B8FEBB6D165E63
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30065_C::OnDlgSelectedOption_9788C2E34EFC24F4C7B8FEBB6D165E63(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30065_C", "OnDlgSelectedOption_9788C2E34EFC24F4C7B8FEBB6D165E63");

	Params::Quest_30065_C_OnDlgSelectedOption_9788C2E34EFC24F4C7B8FEBB6D165E63 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
