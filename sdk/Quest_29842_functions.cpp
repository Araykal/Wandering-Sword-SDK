#pragma once



// Package: Quest_29842

#include "Basic.hpp"

#include "Quest_29842_classes.hpp"
#include "Quest_29842_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29842.Quest_29842_C.ExecuteUbergraph_Quest_29842
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29842_C::ExecuteUbergraph_Quest_29842(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29842_C", "ExecuteUbergraph_Quest_29842");

	Params::Quest_29842_C_ExecuteUbergraph_Quest_29842 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29842.Quest_29842_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29842_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29842_C", "HandleFinishing");

	Params::Quest_29842_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29842.Quest_29842_C.OnSuccess_694B61CE4814A5D2112BC98081FFC782
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29842_C::OnSuccess_694B61CE4814A5D2112BC98081FFC782(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29842_C", "OnSuccess_694B61CE4814A5D2112BC98081FFC782");

	Params::Quest_29842_C_OnSuccess_694B61CE4814A5D2112BC98081FFC782 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29842.Quest_29842_C.OnFinished_D60A71F045CD12B7D58C33BF513330ED
// (BlueprintCallable, BlueprintEvent)

void UQuest_29842_C::OnFinished_D60A71F045CD12B7D58C33BF513330ED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29842_C", "OnFinished_D60A71F045CD12B7D58C33BF513330ED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29842.Quest_29842_C.OnStop_D60A71F045CD12B7D58C33BF513330ED
// (BlueprintCallable, BlueprintEvent)

void UQuest_29842_C::OnStop_D60A71F045CD12B7D58C33BF513330ED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29842_C", "OnStop_D60A71F045CD12B7D58C33BF513330ED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29842.Quest_29842_C.OnDlgClosed_32E5E5A242531233E91B3BBDBFF51805
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29842_C::OnDlgClosed_32E5E5A242531233E91B3BBDBFF51805(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29842_C", "OnDlgClosed_32E5E5A242531233E91B3BBDBFF51805");

	Params::Quest_29842_C_OnDlgClosed_32E5E5A242531233E91B3BBDBFF51805 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29842.Quest_29842_C.OnDlgSelectedOption_32E5E5A242531233E91B3BBDBFF51805
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29842_C::OnDlgSelectedOption_32E5E5A242531233E91B3BBDBFF51805(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29842_C", "OnDlgSelectedOption_32E5E5A242531233E91B3BBDBFF51805");

	Params::Quest_29842_C_OnDlgSelectedOption_32E5E5A242531233E91B3BBDBFF51805 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
