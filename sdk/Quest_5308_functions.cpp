#pragma once



// Package: Quest_5308

#include "Basic.hpp"

#include "Quest_5308_classes.hpp"
#include "Quest_5308_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5308.Quest_5308_C.ExecuteUbergraph_Quest_5308
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5308_C::ExecuteUbergraph_Quest_5308(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5308_C", "ExecuteUbergraph_Quest_5308");

	Params::Quest_5308_C_ExecuteUbergraph_Quest_5308 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5308.Quest_5308_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5308_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5308_C", "HandleFinishing");

	Params::Quest_5308_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5308.Quest_5308_C.OnSuccess_AE87911F4C06A8E33AB23FAD766A0A4B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5308_C::OnSuccess_AE87911F4C06A8E33AB23FAD766A0A4B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5308_C", "OnSuccess_AE87911F4C06A8E33AB23FAD766A0A4B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5308.Quest_5308_C.OnFinished_9858B4774C363495409A139DB1A19A30
// (BlueprintCallable, BlueprintEvent)

void UQuest_5308_C::OnFinished_9858B4774C363495409A139DB1A19A30()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5308_C", "OnFinished_9858B4774C363495409A139DB1A19A30");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5308.Quest_5308_C.OnStop_9858B4774C363495409A139DB1A19A30
// (BlueprintCallable, BlueprintEvent)

void UQuest_5308_C::OnStop_9858B4774C363495409A139DB1A19A30()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5308_C", "OnStop_9858B4774C363495409A139DB1A19A30");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5308.Quest_5308_C.OnDlgClosed_FB192BA840200E9B1C1D9B8013BF1001
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5308_C::OnDlgClosed_FB192BA840200E9B1C1D9B8013BF1001(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5308_C", "OnDlgClosed_FB192BA840200E9B1C1D9B8013BF1001");

	Params::Quest_5308_C_OnDlgClosed_FB192BA840200E9B1C1D9B8013BF1001 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5308.Quest_5308_C.OnDlgSelectedOption_FB192BA840200E9B1C1D9B8013BF1001
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5308_C::OnDlgSelectedOption_FB192BA840200E9B1C1D9B8013BF1001(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5308_C", "OnDlgSelectedOption_FB192BA840200E9B1C1D9B8013BF1001");

	Params::Quest_5308_C_OnDlgSelectedOption_FB192BA840200E9B1C1D9B8013BF1001 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
