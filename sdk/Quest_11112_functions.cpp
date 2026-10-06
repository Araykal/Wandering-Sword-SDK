#pragma once



// Package: Quest_11112

#include "Basic.hpp"

#include "Quest_11112_classes.hpp"
#include "Quest_11112_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11112.Quest_11112_C.ExecuteUbergraph_Quest_11112
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11112_C::ExecuteUbergraph_Quest_11112(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11112_C", "ExecuteUbergraph_Quest_11112");

	Params::Quest_11112_C_ExecuteUbergraph_Quest_11112 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11112.Quest_11112_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11112_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11112_C", "HandleFinishing");

	Params::Quest_11112_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11112.Quest_11112_C.OnFinished_BD6D3B5F4B99D1AB5465A4999D132721
// (BlueprintCallable, BlueprintEvent)

void UQuest_11112_C::OnFinished_BD6D3B5F4B99D1AB5465A4999D132721()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11112_C", "OnFinished_BD6D3B5F4B99D1AB5465A4999D132721");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11112.Quest_11112_C.OnStop_BD6D3B5F4B99D1AB5465A4999D132721
// (BlueprintCallable, BlueprintEvent)

void UQuest_11112_C::OnStop_BD6D3B5F4B99D1AB5465A4999D132721()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11112_C", "OnStop_BD6D3B5F4B99D1AB5465A4999D132721");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11112.Quest_11112_C.OnDlgClosed_ED0B263443DD75466C4D8F96A141224A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11112_C::OnDlgClosed_ED0B263443DD75466C4D8F96A141224A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11112_C", "OnDlgClosed_ED0B263443DD75466C4D8F96A141224A");

	Params::Quest_11112_C_OnDlgClosed_ED0B263443DD75466C4D8F96A141224A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11112.Quest_11112_C.OnDlgSelectedOption_ED0B263443DD75466C4D8F96A141224A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11112_C::OnDlgSelectedOption_ED0B263443DD75466C4D8F96A141224A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11112_C", "OnDlgSelectedOption_ED0B263443DD75466C4D8F96A141224A");

	Params::Quest_11112_C_OnDlgSelectedOption_ED0B263443DD75466C4D8F96A141224A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11112.Quest_11112_C.OnSuccess_05DB8ADF4BCFB6382539548E3E3DA382
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11112_C::OnSuccess_05DB8ADF4BCFB6382539548E3E3DA382(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11112_C", "OnSuccess_05DB8ADF4BCFB6382539548E3E3DA382");

	Params::Quest_11112_C_OnSuccess_05DB8ADF4BCFB6382539548E3E3DA382 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
