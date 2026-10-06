#pragma once



// Package: Quest_5558

#include "Basic.hpp"

#include "Quest_5558_classes.hpp"
#include "Quest_5558_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5558.Quest_5558_C.ExecuteUbergraph_Quest_5558
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5558_C::ExecuteUbergraph_Quest_5558(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5558_C", "ExecuteUbergraph_Quest_5558");

	Params::Quest_5558_C_ExecuteUbergraph_Quest_5558 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5558.Quest_5558_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5558_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5558_C", "HandleFinishing");

	Params::Quest_5558_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5558.Quest_5558_C.OnSuccess_CA03630A47DAB1E2504CD29998B70866
// (BlueprintCallable, BlueprintEvent)

void UQuest_5558_C::OnSuccess_CA03630A47DAB1E2504CD29998B70866()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5558_C", "OnSuccess_CA03630A47DAB1E2504CD29998B70866");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5558.Quest_5558_C.OnFinished_128F39F948FBDE9CD58289AEB2DF39A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5558_C::OnFinished_128F39F948FBDE9CD58289AEB2DF39A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5558_C", "OnFinished_128F39F948FBDE9CD58289AEB2DF39A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5558.Quest_5558_C.OnStop_128F39F948FBDE9CD58289AEB2DF39A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5558_C::OnStop_128F39F948FBDE9CD58289AEB2DF39A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5558_C", "OnStop_128F39F948FBDE9CD58289AEB2DF39A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5558.Quest_5558_C.OnDlgClosed_618E0EC2495F5826A2EFFE874884E83F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5558_C::OnDlgClosed_618E0EC2495F5826A2EFFE874884E83F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5558_C", "OnDlgClosed_618E0EC2495F5826A2EFFE874884E83F");

	Params::Quest_5558_C_OnDlgClosed_618E0EC2495F5826A2EFFE874884E83F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5558.Quest_5558_C.OnDlgSelectedOption_618E0EC2495F5826A2EFFE874884E83F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5558_C::OnDlgSelectedOption_618E0EC2495F5826A2EFFE874884E83F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5558_C", "OnDlgSelectedOption_618E0EC2495F5826A2EFFE874884E83F");

	Params::Quest_5558_C_OnDlgSelectedOption_618E0EC2495F5826A2EFFE874884E83F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
