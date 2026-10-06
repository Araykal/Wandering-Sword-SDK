#pragma once



// Package: Quest_29801

#include "Basic.hpp"

#include "Quest_29801_classes.hpp"
#include "Quest_29801_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29801.Quest_29801_C.ExecuteUbergraph_Quest_29801
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29801_C::ExecuteUbergraph_Quest_29801(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29801_C", "ExecuteUbergraph_Quest_29801");

	Params::Quest_29801_C_ExecuteUbergraph_Quest_29801 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29801.Quest_29801_C.HandleRequesting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29801_C::HandleRequesting(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29801_C", "HandleRequesting");

	Params::Quest_29801_C_HandleRequesting Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29801.Quest_29801_C.OnFinished_5969932B4C492043B725A7B382A41D80
// (BlueprintCallable, BlueprintEvent)

void UQuest_29801_C::OnFinished_5969932B4C492043B725A7B382A41D80()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29801_C", "OnFinished_5969932B4C492043B725A7B382A41D80");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29801.Quest_29801_C.OnStop_5969932B4C492043B725A7B382A41D80
// (BlueprintCallable, BlueprintEvent)

void UQuest_29801_C::OnStop_5969932B4C492043B725A7B382A41D80()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29801_C", "OnStop_5969932B4C492043B725A7B382A41D80");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29801.Quest_29801_C.OnDlgClosed_6422AE7F483B6A8F879F66ABFE9DF5E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29801_C::OnDlgClosed_6422AE7F483B6A8F879F66ABFE9DF5E8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29801_C", "OnDlgClosed_6422AE7F483B6A8F879F66ABFE9DF5E8");

	Params::Quest_29801_C_OnDlgClosed_6422AE7F483B6A8F879F66ABFE9DF5E8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29801.Quest_29801_C.OnDlgSelectedOption_6422AE7F483B6A8F879F66ABFE9DF5E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29801_C::OnDlgSelectedOption_6422AE7F483B6A8F879F66ABFE9DF5E8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29801_C", "OnDlgSelectedOption_6422AE7F483B6A8F879F66ABFE9DF5E8");

	Params::Quest_29801_C_OnDlgSelectedOption_6422AE7F483B6A8F879F66ABFE9DF5E8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
