#pragma once



// Package: Quest_28420

#include "Basic.hpp"

#include "Quest_28420_classes.hpp"
#include "Quest_28420_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28420.Quest_28420_C.ExecuteUbergraph_Quest_28420
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28420_C::ExecuteUbergraph_Quest_28420(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28420_C", "ExecuteUbergraph_Quest_28420");

	Params::Quest_28420_C_ExecuteUbergraph_Quest_28420 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28420.Quest_28420_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28420_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28420_C", "HandleFinishing");

	Params::Quest_28420_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28420.Quest_28420_C.OnDlgClosed_F4FC95CE4392A41177DD6FBC9202F8A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28420_C::OnDlgClosed_F4FC95CE4392A41177DD6FBC9202F8A4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28420_C", "OnDlgClosed_F4FC95CE4392A41177DD6FBC9202F8A4");

	Params::Quest_28420_C_OnDlgClosed_F4FC95CE4392A41177DD6FBC9202F8A4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28420.Quest_28420_C.OnDlgSelectedOption_F4FC95CE4392A41177DD6FBC9202F8A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28420_C::OnDlgSelectedOption_F4FC95CE4392A41177DD6FBC9202F8A4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28420_C", "OnDlgSelectedOption_F4FC95CE4392A41177DD6FBC9202F8A4");

	Params::Quest_28420_C_OnDlgSelectedOption_F4FC95CE4392A41177DD6FBC9202F8A4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28420.Quest_28420_C.OnFinished_2943CE084CB44B792BF29A95C3326B50
// (BlueprintCallable, BlueprintEvent)

void UQuest_28420_C::OnFinished_2943CE084CB44B792BF29A95C3326B50()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28420_C", "OnFinished_2943CE084CB44B792BF29A95C3326B50");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28420.Quest_28420_C.OnStop_2943CE084CB44B792BF29A95C3326B50
// (BlueprintCallable, BlueprintEvent)

void UQuest_28420_C::OnStop_2943CE084CB44B792BF29A95C3326B50()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28420_C", "OnStop_2943CE084CB44B792BF29A95C3326B50");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
