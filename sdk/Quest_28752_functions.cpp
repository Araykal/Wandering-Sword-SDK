#pragma once



// Package: Quest_28752

#include "Basic.hpp"

#include "Quest_28752_classes.hpp"
#include "Quest_28752_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28752.Quest_28752_C.ExecuteUbergraph_Quest_28752
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28752_C::ExecuteUbergraph_Quest_28752(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28752_C", "ExecuteUbergraph_Quest_28752");

	Params::Quest_28752_C_ExecuteUbergraph_Quest_28752 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28752.Quest_28752_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28752_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28752_C", "HandleFinishing");

	Params::Quest_28752_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28752.Quest_28752_C.OnFinished_DA536E734B878F4A546DF6A342010704
// (BlueprintCallable, BlueprintEvent)

void UQuest_28752_C::OnFinished_DA536E734B878F4A546DF6A342010704()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28752_C", "OnFinished_DA536E734B878F4A546DF6A342010704");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28752.Quest_28752_C.OnStop_DA536E734B878F4A546DF6A342010704
// (BlueprintCallable, BlueprintEvent)

void UQuest_28752_C::OnStop_DA536E734B878F4A546DF6A342010704()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28752_C", "OnStop_DA536E734B878F4A546DF6A342010704");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28752.Quest_28752_C.OnDlgClosed_4166AA784CBAEA2B27F48BA32CE02AC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28752_C::OnDlgClosed_4166AA784CBAEA2B27F48BA32CE02AC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28752_C", "OnDlgClosed_4166AA784CBAEA2B27F48BA32CE02AC7");

	Params::Quest_28752_C_OnDlgClosed_4166AA784CBAEA2B27F48BA32CE02AC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28752.Quest_28752_C.OnDlgSelectedOption_4166AA784CBAEA2B27F48BA32CE02AC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28752_C::OnDlgSelectedOption_4166AA784CBAEA2B27F48BA32CE02AC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28752_C", "OnDlgSelectedOption_4166AA784CBAEA2B27F48BA32CE02AC7");

	Params::Quest_28752_C_OnDlgSelectedOption_4166AA784CBAEA2B27F48BA32CE02AC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
