#pragma once



// Package: Quest_28713

#include "Basic.hpp"

#include "Quest_28713_classes.hpp"
#include "Quest_28713_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28713.Quest_28713_C.ExecuteUbergraph_Quest_28713
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28713_C::ExecuteUbergraph_Quest_28713(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28713_C", "ExecuteUbergraph_Quest_28713");

	Params::Quest_28713_C_ExecuteUbergraph_Quest_28713 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28713.Quest_28713_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28713_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28713_C", "HandleFinishing");

	Params::Quest_28713_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28713.Quest_28713_C.OnFinished_D8636E884D036530F43B168FA47AC64F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28713_C::OnFinished_D8636E884D036530F43B168FA47AC64F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28713_C", "OnFinished_D8636E884D036530F43B168FA47AC64F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28713.Quest_28713_C.OnStop_D8636E884D036530F43B168FA47AC64F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28713_C::OnStop_D8636E884D036530F43B168FA47AC64F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28713_C", "OnStop_D8636E884D036530F43B168FA47AC64F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28713.Quest_28713_C.OnDlgClosed_ABB836AC471B64819AA9B39CFCE7AEB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28713_C::OnDlgClosed_ABB836AC471B64819AA9B39CFCE7AEB3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28713_C", "OnDlgClosed_ABB836AC471B64819AA9B39CFCE7AEB3");

	Params::Quest_28713_C_OnDlgClosed_ABB836AC471B64819AA9B39CFCE7AEB3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28713.Quest_28713_C.OnDlgSelectedOption_ABB836AC471B64819AA9B39CFCE7AEB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28713_C::OnDlgSelectedOption_ABB836AC471B64819AA9B39CFCE7AEB3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28713_C", "OnDlgSelectedOption_ABB836AC471B64819AA9B39CFCE7AEB3");

	Params::Quest_28713_C_OnDlgSelectedOption_ABB836AC471B64819AA9B39CFCE7AEB3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
