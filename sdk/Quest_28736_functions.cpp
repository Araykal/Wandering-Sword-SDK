#pragma once



// Package: Quest_28736

#include "Basic.hpp"

#include "Quest_28736_classes.hpp"
#include "Quest_28736_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28736.Quest_28736_C.ExecuteUbergraph_Quest_28736
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28736_C::ExecuteUbergraph_Quest_28736(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28736_C", "ExecuteUbergraph_Quest_28736");

	Params::Quest_28736_C_ExecuteUbergraph_Quest_28736 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28736.Quest_28736_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28736_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28736_C", "HandleFinishing");

	Params::Quest_28736_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28736.Quest_28736_C.OnFinished_824ECA0D42709AC2FB0B13B3F24BD756
// (BlueprintCallable, BlueprintEvent)

void UQuest_28736_C::OnFinished_824ECA0D42709AC2FB0B13B3F24BD756()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28736_C", "OnFinished_824ECA0D42709AC2FB0B13B3F24BD756");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28736.Quest_28736_C.OnStop_824ECA0D42709AC2FB0B13B3F24BD756
// (BlueprintCallable, BlueprintEvent)

void UQuest_28736_C::OnStop_824ECA0D42709AC2FB0B13B3F24BD756()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28736_C", "OnStop_824ECA0D42709AC2FB0B13B3F24BD756");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28736.Quest_28736_C.OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28736_C::OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28736_C", "OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E");

	Params::Quest_28736_C_OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28736.Quest_28736_C.OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28736_C::OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28736_C", "OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E");

	Params::Quest_28736_C_OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
