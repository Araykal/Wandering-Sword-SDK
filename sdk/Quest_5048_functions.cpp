#pragma once



// Package: Quest_5048

#include "Basic.hpp"

#include "Quest_5048_classes.hpp"
#include "Quest_5048_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5048.Quest_5048_C.ExecuteUbergraph_Quest_5048
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5048_C::ExecuteUbergraph_Quest_5048(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5048_C", "ExecuteUbergraph_Quest_5048");

	Params::Quest_5048_C_ExecuteUbergraph_Quest_5048 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5048.Quest_5048_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5048_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5048_C", "End");

	Params::Quest_5048_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5048.Quest_5048_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5048_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5048_C", "HandleFinishing");

	Params::Quest_5048_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5048.Quest_5048_C.OnFinished_328BB33E43FAF013232D9EAE6668A866
// (BlueprintCallable, BlueprintEvent)

void UQuest_5048_C::OnFinished_328BB33E43FAF013232D9EAE6668A866()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5048_C", "OnFinished_328BB33E43FAF013232D9EAE6668A866");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5048.Quest_5048_C.OnStop_328BB33E43FAF013232D9EAE6668A866
// (BlueprintCallable, BlueprintEvent)

void UQuest_5048_C::OnStop_328BB33E43FAF013232D9EAE6668A866()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5048_C", "OnStop_328BB33E43FAF013232D9EAE6668A866");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5048.Quest_5048_C.OnDlgClosed_691B98AD4A34DC0CCA9A8B807C9FE21E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5048_C::OnDlgClosed_691B98AD4A34DC0CCA9A8B807C9FE21E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5048_C", "OnDlgClosed_691B98AD4A34DC0CCA9A8B807C9FE21E");

	Params::Quest_5048_C_OnDlgClosed_691B98AD4A34DC0CCA9A8B807C9FE21E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5048.Quest_5048_C.OnDlgSelectedOption_691B98AD4A34DC0CCA9A8B807C9FE21E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5048_C::OnDlgSelectedOption_691B98AD4A34DC0CCA9A8B807C9FE21E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5048_C", "OnDlgSelectedOption_691B98AD4A34DC0CCA9A8B807C9FE21E");

	Params::Quest_5048_C_OnDlgSelectedOption_691B98AD4A34DC0CCA9A8B807C9FE21E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
