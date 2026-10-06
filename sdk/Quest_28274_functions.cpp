#pragma once



// Package: Quest_28274

#include "Basic.hpp"

#include "Quest_28274_classes.hpp"
#include "Quest_28274_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28274.Quest_28274_C.ExecuteUbergraph_Quest_28274
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28274_C::ExecuteUbergraph_Quest_28274(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28274_C", "ExecuteUbergraph_Quest_28274");

	Params::Quest_28274_C_ExecuteUbergraph_Quest_28274 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28274.Quest_28274_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28274_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28274_C", "HandleFinishing");

	Params::Quest_28274_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28274.Quest_28274_C.OnFinished_6D73FA46402F9E0FF71BC3AFCAB6D84B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28274_C::OnFinished_6D73FA46402F9E0FF71BC3AFCAB6D84B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28274_C", "OnFinished_6D73FA46402F9E0FF71BC3AFCAB6D84B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28274.Quest_28274_C.OnStop_6D73FA46402F9E0FF71BC3AFCAB6D84B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28274_C::OnStop_6D73FA46402F9E0FF71BC3AFCAB6D84B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28274_C", "OnStop_6D73FA46402F9E0FF71BC3AFCAB6D84B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28274.Quest_28274_C.OnDlgClosed_40BD0FB741F6CBEEE97E03A19B6CCEE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28274_C::OnDlgClosed_40BD0FB741F6CBEEE97E03A19B6CCEE4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28274_C", "OnDlgClosed_40BD0FB741F6CBEEE97E03A19B6CCEE4");

	Params::Quest_28274_C_OnDlgClosed_40BD0FB741F6CBEEE97E03A19B6CCEE4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28274.Quest_28274_C.OnDlgSelectedOption_40BD0FB741F6CBEEE97E03A19B6CCEE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28274_C::OnDlgSelectedOption_40BD0FB741F6CBEEE97E03A19B6CCEE4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28274_C", "OnDlgSelectedOption_40BD0FB741F6CBEEE97E03A19B6CCEE4");

	Params::Quest_28274_C_OnDlgSelectedOption_40BD0FB741F6CBEEE97E03A19B6CCEE4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
