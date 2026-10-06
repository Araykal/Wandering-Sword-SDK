#pragma once



// Package: Quest_11371

#include "Basic.hpp"

#include "Quest_11371_classes.hpp"
#include "Quest_11371_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11371.Quest_11371_C.ExecuteUbergraph_Quest_11371
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11371_C::ExecuteUbergraph_Quest_11371(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11371_C", "ExecuteUbergraph_Quest_11371");

	Params::Quest_11371_C_ExecuteUbergraph_Quest_11371 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11371.Quest_11371_C.HandleAcceptRequested
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11371_C::HandleAcceptRequested(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11371_C", "HandleAcceptRequested");

	Params::Quest_11371_C_HandleAcceptRequested Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11371.Quest_11371_C.OnFinished_45D1B1BB4AB453DC6B50B8A60D8A4711
// (BlueprintCallable, BlueprintEvent)

void UQuest_11371_C::OnFinished_45D1B1BB4AB453DC6B50B8A60D8A4711()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11371_C", "OnFinished_45D1B1BB4AB453DC6B50B8A60D8A4711");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11371.Quest_11371_C.OnStop_45D1B1BB4AB453DC6B50B8A60D8A4711
// (BlueprintCallable, BlueprintEvent)

void UQuest_11371_C::OnStop_45D1B1BB4AB453DC6B50B8A60D8A4711()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11371_C", "OnStop_45D1B1BB4AB453DC6B50B8A60D8A4711");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11371.Quest_11371_C.OnDlgClosed_CA94CC9F4CDF5F42EF7B3F86E03BAAAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11371_C::OnDlgClosed_CA94CC9F4CDF5F42EF7B3F86E03BAAAB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11371_C", "OnDlgClosed_CA94CC9F4CDF5F42EF7B3F86E03BAAAB");

	Params::Quest_11371_C_OnDlgClosed_CA94CC9F4CDF5F42EF7B3F86E03BAAAB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11371.Quest_11371_C.OnDlgSelectedOption_CA94CC9F4CDF5F42EF7B3F86E03BAAAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11371_C::OnDlgSelectedOption_CA94CC9F4CDF5F42EF7B3F86E03BAAAB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11371_C", "OnDlgSelectedOption_CA94CC9F4CDF5F42EF7B3F86E03BAAAB");

	Params::Quest_11371_C_OnDlgSelectedOption_CA94CC9F4CDF5F42EF7B3F86E03BAAAB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11371.Quest_11371_C.OnSuccess_97EDD34442F1862E26384B9ABB3A4725
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11371_C::OnSuccess_97EDD34442F1862E26384B9ABB3A4725(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11371_C", "OnSuccess_97EDD34442F1862E26384B9ABB3A4725");

	Params::Quest_11371_C_OnSuccess_97EDD34442F1862E26384B9ABB3A4725 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
