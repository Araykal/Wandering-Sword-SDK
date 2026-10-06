#pragma once



// Package: Quest_11844

#include "Basic.hpp"

#include "Quest_11844_classes.hpp"
#include "Quest_11844_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11844.Quest_11844_C.ExecuteUbergraph_Quest_11844
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11844_C::ExecuteUbergraph_Quest_11844(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11844_C", "ExecuteUbergraph_Quest_11844");

	Params::Quest_11844_C_ExecuteUbergraph_Quest_11844 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11844.Quest_11844_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11844_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11844_C", "HandleFinishing");

	Params::Quest_11844_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11844.Quest_11844_C.OnFinished_D686D82C4108C2CCEDE570A8508A9210
// (BlueprintCallable, BlueprintEvent)

void UQuest_11844_C::OnFinished_D686D82C4108C2CCEDE570A8508A9210()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11844_C", "OnFinished_D686D82C4108C2CCEDE570A8508A9210");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11844.Quest_11844_C.OnStop_D686D82C4108C2CCEDE570A8508A9210
// (BlueprintCallable, BlueprintEvent)

void UQuest_11844_C::OnStop_D686D82C4108C2CCEDE570A8508A9210()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11844_C", "OnStop_D686D82C4108C2CCEDE570A8508A9210");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11844.Quest_11844_C.OnDlgClosed_9BB88CCD4E2F99DCC4C08AA913E0833D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11844_C::OnDlgClosed_9BB88CCD4E2F99DCC4C08AA913E0833D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11844_C", "OnDlgClosed_9BB88CCD4E2F99DCC4C08AA913E0833D");

	Params::Quest_11844_C_OnDlgClosed_9BB88CCD4E2F99DCC4C08AA913E0833D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11844.Quest_11844_C.OnDlgSelectedOption_9BB88CCD4E2F99DCC4C08AA913E0833D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11844_C::OnDlgSelectedOption_9BB88CCD4E2F99DCC4C08AA913E0833D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11844_C", "OnDlgSelectedOption_9BB88CCD4E2F99DCC4C08AA913E0833D");

	Params::Quest_11844_C_OnDlgSelectedOption_9BB88CCD4E2F99DCC4C08AA913E0833D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11844.Quest_11844_C.OnSuccess_51ECCDAF4A3FB0492D74CE9A0C731B18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11844_C::OnSuccess_51ECCDAF4A3FB0492D74CE9A0C731B18(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11844_C", "OnSuccess_51ECCDAF4A3FB0492D74CE9A0C731B18");

	Params::Quest_11844_C_OnSuccess_51ECCDAF4A3FB0492D74CE9A0C731B18 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
