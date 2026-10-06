#pragma once



// Package: Quest_11391

#include "Basic.hpp"

#include "Quest_11391_classes.hpp"
#include "Quest_11391_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11391.Quest_11391_C.ExecuteUbergraph_Quest_11391
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11391_C::ExecuteUbergraph_Quest_11391(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11391_C", "ExecuteUbergraph_Quest_11391");

	Params::Quest_11391_C_ExecuteUbergraph_Quest_11391 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11391.Quest_11391_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11391_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11391_C", "HandleFinishing");

	Params::Quest_11391_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11391.Quest_11391_C.OnFinished_108BCF5E4477534BD69756A688CB00DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_11391_C::OnFinished_108BCF5E4477534BD69756A688CB00DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11391_C", "OnFinished_108BCF5E4477534BD69756A688CB00DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11391.Quest_11391_C.OnStop_108BCF5E4477534BD69756A688CB00DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_11391_C::OnStop_108BCF5E4477534BD69756A688CB00DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11391_C", "OnStop_108BCF5E4477534BD69756A688CB00DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11391.Quest_11391_C.OnDlgClosed_CB5B738C41E98F09213C53B905F1E0AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11391_C::OnDlgClosed_CB5B738C41E98F09213C53B905F1E0AC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11391_C", "OnDlgClosed_CB5B738C41E98F09213C53B905F1E0AC");

	Params::Quest_11391_C_OnDlgClosed_CB5B738C41E98F09213C53B905F1E0AC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11391.Quest_11391_C.OnDlgSelectedOption_CB5B738C41E98F09213C53B905F1E0AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11391_C::OnDlgSelectedOption_CB5B738C41E98F09213C53B905F1E0AC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11391_C", "OnDlgSelectedOption_CB5B738C41E98F09213C53B905F1E0AC");

	Params::Quest_11391_C_OnDlgSelectedOption_CB5B738C41E98F09213C53B905F1E0AC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11391.Quest_11391_C.OnSuccess_070702DC494F26BBD3ACBFAF77089F0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11391_C::OnSuccess_070702DC494F26BBD3ACBFAF77089F0F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11391_C", "OnSuccess_070702DC494F26BBD3ACBFAF77089F0F");

	Params::Quest_11391_C_OnSuccess_070702DC494F26BBD3ACBFAF77089F0F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
