#pragma once



// Package: Quest_28427

#include "Basic.hpp"

#include "Quest_28427_classes.hpp"
#include "Quest_28427_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28427.Quest_28427_C.ExecuteUbergraph_Quest_28427
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28427_C::ExecuteUbergraph_Quest_28427(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28427_C", "ExecuteUbergraph_Quest_28427");

	Params::Quest_28427_C_ExecuteUbergraph_Quest_28427 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28427.Quest_28427_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28427_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28427_C", "HandleFinishing");

	Params::Quest_28427_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28427.Quest_28427_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_28427_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28427_C", "End");

	Params::Quest_28427_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28427.Quest_28427_C.OnFinished_0CD512AF424F4F07FDEC27A269354D19
// (BlueprintCallable, BlueprintEvent)

void UQuest_28427_C::OnFinished_0CD512AF424F4F07FDEC27A269354D19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28427_C", "OnFinished_0CD512AF424F4F07FDEC27A269354D19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28427.Quest_28427_C.OnStop_0CD512AF424F4F07FDEC27A269354D19
// (BlueprintCallable, BlueprintEvent)

void UQuest_28427_C::OnStop_0CD512AF424F4F07FDEC27A269354D19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28427_C", "OnStop_0CD512AF424F4F07FDEC27A269354D19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28427.Quest_28427_C.OnDlgClosed_E44578D8487E9D6E78B2BF940A0E8729
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28427_C::OnDlgClosed_E44578D8487E9D6E78B2BF940A0E8729(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28427_C", "OnDlgClosed_E44578D8487E9D6E78B2BF940A0E8729");

	Params::Quest_28427_C_OnDlgClosed_E44578D8487E9D6E78B2BF940A0E8729 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28427.Quest_28427_C.OnDlgSelectedOption_E44578D8487E9D6E78B2BF940A0E8729
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28427_C::OnDlgSelectedOption_E44578D8487E9D6E78B2BF940A0E8729(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28427_C", "OnDlgSelectedOption_E44578D8487E9D6E78B2BF940A0E8729");

	Params::Quest_28427_C_OnDlgSelectedOption_E44578D8487E9D6E78B2BF940A0E8729 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
