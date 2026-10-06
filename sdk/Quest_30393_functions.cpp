#pragma once



// Package: Quest_30393

#include "Basic.hpp"

#include "Quest_30393_classes.hpp"
#include "Quest_30393_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30393.Quest_30393_C.ExecuteUbergraph_Quest_30393
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30393_C::ExecuteUbergraph_Quest_30393(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30393_C", "ExecuteUbergraph_Quest_30393");

	Params::Quest_30393_C_ExecuteUbergraph_Quest_30393 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30393.Quest_30393_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30393_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30393_C", "HandleFinishing");

	Params::Quest_30393_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30393.Quest_30393_C.OnSuccess_6DDD2D494F1BAB8868B98C8C155D6E64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30393_C::OnSuccess_6DDD2D494F1BAB8868B98C8C155D6E64(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30393_C", "OnSuccess_6DDD2D494F1BAB8868B98C8C155D6E64");

	Params::Quest_30393_C_OnSuccess_6DDD2D494F1BAB8868B98C8C155D6E64 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30393.Quest_30393_C.OnFinished_73EBE4A545A558386241599A8AF81BE4
// (BlueprintCallable, BlueprintEvent)

void UQuest_30393_C::OnFinished_73EBE4A545A558386241599A8AF81BE4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30393_C", "OnFinished_73EBE4A545A558386241599A8AF81BE4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30393.Quest_30393_C.OnStop_73EBE4A545A558386241599A8AF81BE4
// (BlueprintCallable, BlueprintEvent)

void UQuest_30393_C::OnStop_73EBE4A545A558386241599A8AF81BE4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30393_C", "OnStop_73EBE4A545A558386241599A8AF81BE4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30393.Quest_30393_C.OnDlgClosed_120A66DE4B3BF651CF73F68B6026A452
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30393_C::OnDlgClosed_120A66DE4B3BF651CF73F68B6026A452(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30393_C", "OnDlgClosed_120A66DE4B3BF651CF73F68B6026A452");

	Params::Quest_30393_C_OnDlgClosed_120A66DE4B3BF651CF73F68B6026A452 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30393.Quest_30393_C.OnDlgSelectedOption_120A66DE4B3BF651CF73F68B6026A452
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30393_C::OnDlgSelectedOption_120A66DE4B3BF651CF73F68B6026A452(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30393_C", "OnDlgSelectedOption_120A66DE4B3BF651CF73F68B6026A452");

	Params::Quest_30393_C_OnDlgSelectedOption_120A66DE4B3BF651CF73F68B6026A452 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
