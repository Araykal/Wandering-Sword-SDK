#pragma once



// Package: Quest_18582

#include "Basic.hpp"

#include "Quest_18582_classes.hpp"
#include "Quest_18582_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_18582.Quest_18582_C.ExecuteUbergraph_Quest_18582
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_18582_C::ExecuteUbergraph_Quest_18582(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_18582_C", "ExecuteUbergraph_Quest_18582");

	Params::Quest_18582_C_ExecuteUbergraph_Quest_18582 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_18582.Quest_18582_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_18582_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_18582_C", "HandleFinishing");

	Params::Quest_18582_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_18582.Quest_18582_C.OnSuccess_DCE1059A44BA96B215EF8AA0142E8B46
// (BlueprintCallable, BlueprintEvent)

void UQuest_18582_C::OnSuccess_DCE1059A44BA96B215EF8AA0142E8B46()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_18582_C", "OnSuccess_DCE1059A44BA96B215EF8AA0142E8B46");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_18582.Quest_18582_C.OnFinished_41E99F1D488E1887B443CA975844D69E
// (BlueprintCallable, BlueprintEvent)

void UQuest_18582_C::OnFinished_41E99F1D488E1887B443CA975844D69E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_18582_C", "OnFinished_41E99F1D488E1887B443CA975844D69E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_18582.Quest_18582_C.OnStop_41E99F1D488E1887B443CA975844D69E
// (BlueprintCallable, BlueprintEvent)

void UQuest_18582_C::OnStop_41E99F1D488E1887B443CA975844D69E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_18582_C", "OnStop_41E99F1D488E1887B443CA975844D69E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_18582.Quest_18582_C.OnDlgClosed_39974A8448E064DE97F45888CBC91A9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_18582_C::OnDlgClosed_39974A8448E064DE97F45888CBC91A9B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_18582_C", "OnDlgClosed_39974A8448E064DE97F45888CBC91A9B");

	Params::Quest_18582_C_OnDlgClosed_39974A8448E064DE97F45888CBC91A9B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_18582.Quest_18582_C.OnDlgSelectedOption_39974A8448E064DE97F45888CBC91A9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_18582_C::OnDlgSelectedOption_39974A8448E064DE97F45888CBC91A9B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_18582_C", "OnDlgSelectedOption_39974A8448E064DE97F45888CBC91A9B");

	Params::Quest_18582_C_OnDlgSelectedOption_39974A8448E064DE97F45888CBC91A9B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
