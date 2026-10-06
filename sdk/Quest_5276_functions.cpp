#pragma once



// Package: Quest_5276

#include "Basic.hpp"

#include "Quest_5276_classes.hpp"
#include "Quest_5276_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5276.Quest_5276_C.ExecuteUbergraph_Quest_5276
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5276_C::ExecuteUbergraph_Quest_5276(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5276_C", "ExecuteUbergraph_Quest_5276");

	Params::Quest_5276_C_ExecuteUbergraph_Quest_5276 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5276.Quest_5276_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5276_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5276_C", "HandleFinishing");

	Params::Quest_5276_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5276.Quest_5276_C.OnFinished_8F392A0445695DAB35727788DB4DEFDF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5276_C::OnFinished_8F392A0445695DAB35727788DB4DEFDF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5276_C", "OnFinished_8F392A0445695DAB35727788DB4DEFDF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5276.Quest_5276_C.OnStop_8F392A0445695DAB35727788DB4DEFDF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5276_C::OnStop_8F392A0445695DAB35727788DB4DEFDF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5276_C", "OnStop_8F392A0445695DAB35727788DB4DEFDF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5276.Quest_5276_C.OnDlgClosed_7B56607346D66DF0DAA4D8BB3FAF9821
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5276_C::OnDlgClosed_7B56607346D66DF0DAA4D8BB3FAF9821(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5276_C", "OnDlgClosed_7B56607346D66DF0DAA4D8BB3FAF9821");

	Params::Quest_5276_C_OnDlgClosed_7B56607346D66DF0DAA4D8BB3FAF9821 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5276.Quest_5276_C.OnDlgSelectedOption_7B56607346D66DF0DAA4D8BB3FAF9821
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5276_C::OnDlgSelectedOption_7B56607346D66DF0DAA4D8BB3FAF9821(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5276_C", "OnDlgSelectedOption_7B56607346D66DF0DAA4D8BB3FAF9821");

	Params::Quest_5276_C_OnDlgSelectedOption_7B56607346D66DF0DAA4D8BB3FAF9821 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
