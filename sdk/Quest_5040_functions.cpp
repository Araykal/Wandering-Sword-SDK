#pragma once



// Package: Quest_5040

#include "Basic.hpp"

#include "Quest_5040_classes.hpp"
#include "Quest_5040_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5040.Quest_5040_C.ExecuteUbergraph_Quest_5040
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5040_C::ExecuteUbergraph_Quest_5040(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5040_C", "ExecuteUbergraph_Quest_5040");

	Params::Quest_5040_C_ExecuteUbergraph_Quest_5040 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5040.Quest_5040_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5040_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5040_C", "End");

	Params::Quest_5040_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5040.Quest_5040_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5040_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5040_C", "HandleFinishing");

	Params::Quest_5040_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5040.Quest_5040_C.OnFinished_22F7B3034600557F7CEFBCBF507D0AD0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5040_C::OnFinished_22F7B3034600557F7CEFBCBF507D0AD0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5040_C", "OnFinished_22F7B3034600557F7CEFBCBF507D0AD0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5040.Quest_5040_C.OnStop_22F7B3034600557F7CEFBCBF507D0AD0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5040_C::OnStop_22F7B3034600557F7CEFBCBF507D0AD0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5040_C", "OnStop_22F7B3034600557F7CEFBCBF507D0AD0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5040.Quest_5040_C.OnDlgClosed_BBB1907E4C2EF7098618AE898D262E47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5040_C::OnDlgClosed_BBB1907E4C2EF7098618AE898D262E47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5040_C", "OnDlgClosed_BBB1907E4C2EF7098618AE898D262E47");

	Params::Quest_5040_C_OnDlgClosed_BBB1907E4C2EF7098618AE898D262E47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5040.Quest_5040_C.OnDlgSelectedOption_BBB1907E4C2EF7098618AE898D262E47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5040_C::OnDlgSelectedOption_BBB1907E4C2EF7098618AE898D262E47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5040_C", "OnDlgSelectedOption_BBB1907E4C2EF7098618AE898D262E47");

	Params::Quest_5040_C_OnDlgSelectedOption_BBB1907E4C2EF7098618AE898D262E47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
