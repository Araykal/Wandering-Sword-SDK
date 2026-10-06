#pragma once



// Package: Quest_11812

#include "Basic.hpp"

#include "Quest_11812_classes.hpp"
#include "Quest_11812_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11812.Quest_11812_C.ExecuteUbergraph_Quest_11812
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11812_C::ExecuteUbergraph_Quest_11812(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11812_C", "ExecuteUbergraph_Quest_11812");

	Params::Quest_11812_C_ExecuteUbergraph_Quest_11812 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11812.Quest_11812_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_11812_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11812_C", "End");

	Params::Quest_11812_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11812.Quest_11812_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11812_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11812_C", "HandleFinishing");

	Params::Quest_11812_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11812.Quest_11812_C.OnFinished_AD0ADB9B4577D236BAC4D9931CAFFD2A
// (BlueprintCallable, BlueprintEvent)

void UQuest_11812_C::OnFinished_AD0ADB9B4577D236BAC4D9931CAFFD2A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11812_C", "OnFinished_AD0ADB9B4577D236BAC4D9931CAFFD2A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11812.Quest_11812_C.OnStop_AD0ADB9B4577D236BAC4D9931CAFFD2A
// (BlueprintCallable, BlueprintEvent)

void UQuest_11812_C::OnStop_AD0ADB9B4577D236BAC4D9931CAFFD2A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11812_C", "OnStop_AD0ADB9B4577D236BAC4D9931CAFFD2A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11812.Quest_11812_C.OnDlgClosed_C0BF21144029E158AA4BA492E8CF6BFA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11812_C::OnDlgClosed_C0BF21144029E158AA4BA492E8CF6BFA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11812_C", "OnDlgClosed_C0BF21144029E158AA4BA492E8CF6BFA");

	Params::Quest_11812_C_OnDlgClosed_C0BF21144029E158AA4BA492E8CF6BFA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11812.Quest_11812_C.OnDlgSelectedOption_C0BF21144029E158AA4BA492E8CF6BFA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11812_C::OnDlgSelectedOption_C0BF21144029E158AA4BA492E8CF6BFA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11812_C", "OnDlgSelectedOption_C0BF21144029E158AA4BA492E8CF6BFA");

	Params::Quest_11812_C_OnDlgSelectedOption_C0BF21144029E158AA4BA492E8CF6BFA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
