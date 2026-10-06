#pragma once



// Package: Quest_5229

#include "Basic.hpp"

#include "Quest_5229_classes.hpp"
#include "Quest_5229_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5229.Quest_5229_C.ExecuteUbergraph_Quest_5229
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5229_C::ExecuteUbergraph_Quest_5229(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5229_C", "ExecuteUbergraph_Quest_5229");

	Params::Quest_5229_C_ExecuteUbergraph_Quest_5229 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5229.Quest_5229_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5229_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5229_C", "HandleFinishing");

	Params::Quest_5229_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5229.Quest_5229_C.OnFinished_D08215EA49BABD778FEB7DAD8D159682
// (BlueprintCallable, BlueprintEvent)

void UQuest_5229_C::OnFinished_D08215EA49BABD778FEB7DAD8D159682()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5229_C", "OnFinished_D08215EA49BABD778FEB7DAD8D159682");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5229.Quest_5229_C.OnStop_D08215EA49BABD778FEB7DAD8D159682
// (BlueprintCallable, BlueprintEvent)

void UQuest_5229_C::OnStop_D08215EA49BABD778FEB7DAD8D159682()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5229_C", "OnStop_D08215EA49BABD778FEB7DAD8D159682");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5229.Quest_5229_C.OnDlgClosed_A80973C64346A9A544509FB8B4339663
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5229_C::OnDlgClosed_A80973C64346A9A544509FB8B4339663(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5229_C", "OnDlgClosed_A80973C64346A9A544509FB8B4339663");

	Params::Quest_5229_C_OnDlgClosed_A80973C64346A9A544509FB8B4339663 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5229.Quest_5229_C.OnDlgSelectedOption_A80973C64346A9A544509FB8B4339663
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5229_C::OnDlgSelectedOption_A80973C64346A9A544509FB8B4339663(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5229_C", "OnDlgSelectedOption_A80973C64346A9A544509FB8B4339663");

	Params::Quest_5229_C_OnDlgSelectedOption_A80973C64346A9A544509FB8B4339663 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5229.Quest_5229_C.OnSuccess_84DF96E4421557E1CE00F68AD872F24F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5229_C::OnSuccess_84DF96E4421557E1CE00F68AD872F24F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5229_C", "OnSuccess_84DF96E4421557E1CE00F68AD872F24F");

	Params::Quest_5229_C_OnSuccess_84DF96E4421557E1CE00F68AD872F24F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
