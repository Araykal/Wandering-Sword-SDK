#pragma once



// Package: Quest_5008

#include "Basic.hpp"

#include "Quest_5008_classes.hpp"
#include "Quest_5008_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5008.Quest_5008_C.ExecuteUbergraph_Quest_5008
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5008_C::ExecuteUbergraph_Quest_5008(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5008_C", "ExecuteUbergraph_Quest_5008");

	Params::Quest_5008_C_ExecuteUbergraph_Quest_5008 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5008.Quest_5008_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5008_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5008_C", "HandleFinishing");

	Params::Quest_5008_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5008.Quest_5008_C.OnFinished_3C08796A4CB52751771374BA909934AE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5008_C::OnFinished_3C08796A4CB52751771374BA909934AE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5008_C", "OnFinished_3C08796A4CB52751771374BA909934AE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5008.Quest_5008_C.OnStop_3C08796A4CB52751771374BA909934AE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5008_C::OnStop_3C08796A4CB52751771374BA909934AE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5008_C", "OnStop_3C08796A4CB52751771374BA909934AE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5008.Quest_5008_C.OnDlgClosed_5556CBF64A310D880C44CE8E813766FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5008_C::OnDlgClosed_5556CBF64A310D880C44CE8E813766FE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5008_C", "OnDlgClosed_5556CBF64A310D880C44CE8E813766FE");

	Params::Quest_5008_C_OnDlgClosed_5556CBF64A310D880C44CE8E813766FE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5008.Quest_5008_C.OnDlgSelectedOption_5556CBF64A310D880C44CE8E813766FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5008_C::OnDlgSelectedOption_5556CBF64A310D880C44CE8E813766FE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5008_C", "OnDlgSelectedOption_5556CBF64A310D880C44CE8E813766FE");

	Params::Quest_5008_C_OnDlgSelectedOption_5556CBF64A310D880C44CE8E813766FE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
