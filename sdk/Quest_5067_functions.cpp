#pragma once



// Package: Quest_5067

#include "Basic.hpp"

#include "Quest_5067_classes.hpp"
#include "Quest_5067_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5067.Quest_5067_C.ExecuteUbergraph_Quest_5067
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5067_C::ExecuteUbergraph_Quest_5067(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5067_C", "ExecuteUbergraph_Quest_5067");

	Params::Quest_5067_C_ExecuteUbergraph_Quest_5067 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5067.Quest_5067_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5067_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5067_C", "End");

	Params::Quest_5067_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5067.Quest_5067_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5067_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5067_C", "HandleFinishing");

	Params::Quest_5067_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5067.Quest_5067_C.OnFinished_E250298F4457BF602BD0A0A9D4C0CE40
// (BlueprintCallable, BlueprintEvent)

void UQuest_5067_C::OnFinished_E250298F4457BF602BD0A0A9D4C0CE40()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5067_C", "OnFinished_E250298F4457BF602BD0A0A9D4C0CE40");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5067.Quest_5067_C.OnStop_E250298F4457BF602BD0A0A9D4C0CE40
// (BlueprintCallable, BlueprintEvent)

void UQuest_5067_C::OnStop_E250298F4457BF602BD0A0A9D4C0CE40()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5067_C", "OnStop_E250298F4457BF602BD0A0A9D4C0CE40");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5067.Quest_5067_C.OnDlgClosed_C69459E842D0AF1485CE09BDF40E2699
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5067_C::OnDlgClosed_C69459E842D0AF1485CE09BDF40E2699(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5067_C", "OnDlgClosed_C69459E842D0AF1485CE09BDF40E2699");

	Params::Quest_5067_C_OnDlgClosed_C69459E842D0AF1485CE09BDF40E2699 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5067.Quest_5067_C.OnDlgSelectedOption_C69459E842D0AF1485CE09BDF40E2699
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5067_C::OnDlgSelectedOption_C69459E842D0AF1485CE09BDF40E2699(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5067_C", "OnDlgSelectedOption_C69459E842D0AF1485CE09BDF40E2699");

	Params::Quest_5067_C_OnDlgSelectedOption_C69459E842D0AF1485CE09BDF40E2699 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
