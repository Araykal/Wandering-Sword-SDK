#pragma once



// Package: Quest_11868

#include "Basic.hpp"

#include "Quest_11868_classes.hpp"
#include "Quest_11868_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11868.Quest_11868_C.ExecuteUbergraph_Quest_11868
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11868_C::ExecuteUbergraph_Quest_11868(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "ExecuteUbergraph_Quest_11868");

	Params::Quest_11868_C_ExecuteUbergraph_Quest_11868 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11868.Quest_11868_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11868_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "HandleFinishing");

	Params::Quest_11868_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11868.Quest_11868_C.OnSuccess_6CD851384DFD1799575DEFB8D42FEFA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11868_C::OnSuccess_6CD851384DFD1799575DEFB8D42FEFA8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "OnSuccess_6CD851384DFD1799575DEFB8D42FEFA8");

	Params::Quest_11868_C_OnSuccess_6CD851384DFD1799575DEFB8D42FEFA8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11868.Quest_11868_C.OnFinished_5BA1E1DC4AE42516981929811655FFB7
// (BlueprintCallable, BlueprintEvent)

void UQuest_11868_C::OnFinished_5BA1E1DC4AE42516981929811655FFB7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "OnFinished_5BA1E1DC4AE42516981929811655FFB7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11868.Quest_11868_C.OnStop_5BA1E1DC4AE42516981929811655FFB7
// (BlueprintCallable, BlueprintEvent)

void UQuest_11868_C::OnStop_5BA1E1DC4AE42516981929811655FFB7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "OnStop_5BA1E1DC4AE42516981929811655FFB7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11868.Quest_11868_C.OnDlgClosed_7D30E18F49394302E39CF496A3429AED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11868_C::OnDlgClosed_7D30E18F49394302E39CF496A3429AED(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "OnDlgClosed_7D30E18F49394302E39CF496A3429AED");

	Params::Quest_11868_C_OnDlgClosed_7D30E18F49394302E39CF496A3429AED Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11868.Quest_11868_C.OnDlgSelectedOption_7D30E18F49394302E39CF496A3429AED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11868_C::OnDlgSelectedOption_7D30E18F49394302E39CF496A3429AED(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "OnDlgSelectedOption_7D30E18F49394302E39CF496A3429AED");

	Params::Quest_11868_C_OnDlgSelectedOption_7D30E18F49394302E39CF496A3429AED Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11868.Quest_11868_C.OnSuccess_B438F8364D4B20E2AAC86CA9754C4CC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11868_C::OnSuccess_B438F8364D4B20E2AAC86CA9754C4CC1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11868_C", "OnSuccess_B438F8364D4B20E2AAC86CA9754C4CC1");

	Params::Quest_11868_C_OnSuccess_B438F8364D4B20E2AAC86CA9754C4CC1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
