#pragma once



// Package: Quest_28745

#include "Basic.hpp"

#include "Quest_28745_classes.hpp"
#include "Quest_28745_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28745.Quest_28745_C.ExecuteUbergraph_Quest_28745
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28745_C::ExecuteUbergraph_Quest_28745(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28745_C", "ExecuteUbergraph_Quest_28745");

	Params::Quest_28745_C_ExecuteUbergraph_Quest_28745 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28745.Quest_28745_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28745_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28745_C", "HandleFinishing");

	Params::Quest_28745_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28745.Quest_28745_C.OnSuccess_E13996C24F0DE8AA33CD1280536D34D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28745_C::OnSuccess_E13996C24F0DE8AA33CD1280536D34D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28745_C", "OnSuccess_E13996C24F0DE8AA33CD1280536D34D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28745.Quest_28745_C.OnFinished_EA5A6CB84B144BECB2226B9E0502EE84
// (BlueprintCallable, BlueprintEvent)

void UQuest_28745_C::OnFinished_EA5A6CB84B144BECB2226B9E0502EE84()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28745_C", "OnFinished_EA5A6CB84B144BECB2226B9E0502EE84");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28745.Quest_28745_C.OnStop_EA5A6CB84B144BECB2226B9E0502EE84
// (BlueprintCallable, BlueprintEvent)

void UQuest_28745_C::OnStop_EA5A6CB84B144BECB2226B9E0502EE84()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28745_C", "OnStop_EA5A6CB84B144BECB2226B9E0502EE84");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28745.Quest_28745_C.OnDlgClosed_9E8F455844B461F98128908B77986DB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28745_C::OnDlgClosed_9E8F455844B461F98128908B77986DB9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28745_C", "OnDlgClosed_9E8F455844B461F98128908B77986DB9");

	Params::Quest_28745_C_OnDlgClosed_9E8F455844B461F98128908B77986DB9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28745.Quest_28745_C.OnDlgSelectedOption_9E8F455844B461F98128908B77986DB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28745_C::OnDlgSelectedOption_9E8F455844B461F98128908B77986DB9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28745_C", "OnDlgSelectedOption_9E8F455844B461F98128908B77986DB9");

	Params::Quest_28745_C_OnDlgSelectedOption_9E8F455844B461F98128908B77986DB9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
