#pragma once



// Package: Quest_28447

#include "Basic.hpp"

#include "Quest_28447_classes.hpp"
#include "Quest_28447_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28447.Quest_28447_C.ExecuteUbergraph_Quest_28447
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28447_C::ExecuteUbergraph_Quest_28447(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28447_C", "ExecuteUbergraph_Quest_28447");

	Params::Quest_28447_C_ExecuteUbergraph_Quest_28447 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28447.Quest_28447_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28447_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28447_C", "HandleFinishing");

	Params::Quest_28447_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28447.Quest_28447_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_28447_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28447_C", "End");

	Params::Quest_28447_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28447.Quest_28447_C.OnFinished_0D4D05074D1131895AE7D187C9CCCDC3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28447_C::OnFinished_0D4D05074D1131895AE7D187C9CCCDC3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28447_C", "OnFinished_0D4D05074D1131895AE7D187C9CCCDC3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28447.Quest_28447_C.OnStop_0D4D05074D1131895AE7D187C9CCCDC3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28447_C::OnStop_0D4D05074D1131895AE7D187C9CCCDC3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28447_C", "OnStop_0D4D05074D1131895AE7D187C9CCCDC3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28447.Quest_28447_C.OnDlgClosed_C5FFFF9B40AC7066331EE89A05BF4664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28447_C::OnDlgClosed_C5FFFF9B40AC7066331EE89A05BF4664(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28447_C", "OnDlgClosed_C5FFFF9B40AC7066331EE89A05BF4664");

	Params::Quest_28447_C_OnDlgClosed_C5FFFF9B40AC7066331EE89A05BF4664 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28447.Quest_28447_C.OnDlgSelectedOption_C5FFFF9B40AC7066331EE89A05BF4664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28447_C::OnDlgSelectedOption_C5FFFF9B40AC7066331EE89A05BF4664(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28447_C", "OnDlgSelectedOption_C5FFFF9B40AC7066331EE89A05BF4664");

	Params::Quest_28447_C_OnDlgSelectedOption_C5FFFF9B40AC7066331EE89A05BF4664 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
