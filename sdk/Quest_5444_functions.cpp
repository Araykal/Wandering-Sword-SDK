#pragma once



// Package: Quest_5444

#include "Basic.hpp"

#include "Quest_5444_classes.hpp"
#include "Quest_5444_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5444.Quest_5444_C.ExecuteUbergraph_Quest_5444
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5444_C::ExecuteUbergraph_Quest_5444(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5444_C", "ExecuteUbergraph_Quest_5444");

	Params::Quest_5444_C_ExecuteUbergraph_Quest_5444 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5444.Quest_5444_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5444_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5444_C", "HandleFinishing");

	Params::Quest_5444_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5444.Quest_5444_C.OnFinished_28A336A740A9AA57665360AAE25D3EF4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5444_C::OnFinished_28A336A740A9AA57665360AAE25D3EF4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5444_C", "OnFinished_28A336A740A9AA57665360AAE25D3EF4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5444.Quest_5444_C.OnStop_28A336A740A9AA57665360AAE25D3EF4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5444_C::OnStop_28A336A740A9AA57665360AAE25D3EF4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5444_C", "OnStop_28A336A740A9AA57665360AAE25D3EF4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5444.Quest_5444_C.OnDlgClosed_AE5193CC473B398A1DAB9592CD43A054
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5444_C::OnDlgClosed_AE5193CC473B398A1DAB9592CD43A054(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5444_C", "OnDlgClosed_AE5193CC473B398A1DAB9592CD43A054");

	Params::Quest_5444_C_OnDlgClosed_AE5193CC473B398A1DAB9592CD43A054 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5444.Quest_5444_C.OnDlgSelectedOption_AE5193CC473B398A1DAB9592CD43A054
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5444_C::OnDlgSelectedOption_AE5193CC473B398A1DAB9592CD43A054(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5444_C", "OnDlgSelectedOption_AE5193CC473B398A1DAB9592CD43A054");

	Params::Quest_5444_C_OnDlgSelectedOption_AE5193CC473B398A1DAB9592CD43A054 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
