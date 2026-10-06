#pragma once



// Package: Quest_28224

#include "Basic.hpp"

#include "Quest_28224_classes.hpp"
#include "Quest_28224_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28224.Quest_28224_C.ExecuteUbergraph_Quest_28224
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28224_C::ExecuteUbergraph_Quest_28224(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28224_C", "ExecuteUbergraph_Quest_28224");

	Params::Quest_28224_C_ExecuteUbergraph_Quest_28224 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28224.Quest_28224_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28224_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28224_C", "HandleFinishing");

	Params::Quest_28224_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28224.Quest_28224_C.OnFinished_18A6408D48368AA2D976AB828FF56886
// (BlueprintCallable, BlueprintEvent)

void UQuest_28224_C::OnFinished_18A6408D48368AA2D976AB828FF56886()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28224_C", "OnFinished_18A6408D48368AA2D976AB828FF56886");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28224.Quest_28224_C.OnStop_18A6408D48368AA2D976AB828FF56886
// (BlueprintCallable, BlueprintEvent)

void UQuest_28224_C::OnStop_18A6408D48368AA2D976AB828FF56886()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28224_C", "OnStop_18A6408D48368AA2D976AB828FF56886");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28224.Quest_28224_C.OnDlgClosed_611D1C3943D9C0A3496979BA3278A8A5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28224_C::OnDlgClosed_611D1C3943D9C0A3496979BA3278A8A5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28224_C", "OnDlgClosed_611D1C3943D9C0A3496979BA3278A8A5");

	Params::Quest_28224_C_OnDlgClosed_611D1C3943D9C0A3496979BA3278A8A5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28224.Quest_28224_C.OnDlgSelectedOption_611D1C3943D9C0A3496979BA3278A8A5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28224_C::OnDlgSelectedOption_611D1C3943D9C0A3496979BA3278A8A5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28224_C", "OnDlgSelectedOption_611D1C3943D9C0A3496979BA3278A8A5");

	Params::Quest_28224_C_OnDlgSelectedOption_611D1C3943D9C0A3496979BA3278A8A5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
