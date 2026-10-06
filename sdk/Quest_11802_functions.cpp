#pragma once



// Package: Quest_11802

#include "Basic.hpp"

#include "Quest_11802_classes.hpp"
#include "Quest_11802_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11802.Quest_11802_C.ExecuteUbergraph_Quest_11802
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11802_C::ExecuteUbergraph_Quest_11802(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11802_C", "ExecuteUbergraph_Quest_11802");

	Params::Quest_11802_C_ExecuteUbergraph_Quest_11802 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11802.Quest_11802_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_11802_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11802_C", "End");

	Params::Quest_11802_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11802.Quest_11802_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11802_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11802_C", "HandleFinishing");

	Params::Quest_11802_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11802.Quest_11802_C.OnFinished_45B4DEAB4B3184EC237403AE4F27B490
// (BlueprintCallable, BlueprintEvent)

void UQuest_11802_C::OnFinished_45B4DEAB4B3184EC237403AE4F27B490()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11802_C", "OnFinished_45B4DEAB4B3184EC237403AE4F27B490");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11802.Quest_11802_C.OnStop_45B4DEAB4B3184EC237403AE4F27B490
// (BlueprintCallable, BlueprintEvent)

void UQuest_11802_C::OnStop_45B4DEAB4B3184EC237403AE4F27B490()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11802_C", "OnStop_45B4DEAB4B3184EC237403AE4F27B490");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11802.Quest_11802_C.OnDlgClosed_5A2C915E4ADE994C950D9A93561B0CA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11802_C::OnDlgClosed_5A2C915E4ADE994C950D9A93561B0CA8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11802_C", "OnDlgClosed_5A2C915E4ADE994C950D9A93561B0CA8");

	Params::Quest_11802_C_OnDlgClosed_5A2C915E4ADE994C950D9A93561B0CA8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11802.Quest_11802_C.OnDlgSelectedOption_5A2C915E4ADE994C950D9A93561B0CA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11802_C::OnDlgSelectedOption_5A2C915E4ADE994C950D9A93561B0CA8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11802_C", "OnDlgSelectedOption_5A2C915E4ADE994C950D9A93561B0CA8");

	Params::Quest_11802_C_OnDlgSelectedOption_5A2C915E4ADE994C950D9A93561B0CA8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
