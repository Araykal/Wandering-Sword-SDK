#pragma once



// Package: Quest_5203

#include "Basic.hpp"

#include "Quest_5203_classes.hpp"
#include "Quest_5203_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5203.Quest_5203_C.ExecuteUbergraph_Quest_5203
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5203_C::ExecuteUbergraph_Quest_5203(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5203_C", "ExecuteUbergraph_Quest_5203");

	Params::Quest_5203_C_ExecuteUbergraph_Quest_5203 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5203.Quest_5203_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5203_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5203_C", "HandleFinishing");

	Params::Quest_5203_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5203.Quest_5203_C.OnFinished_A690CF59499EACD05DA70EA30B7075E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_5203_C::OnFinished_A690CF59499EACD05DA70EA30B7075E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5203_C", "OnFinished_A690CF59499EACD05DA70EA30B7075E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5203.Quest_5203_C.OnStop_A690CF59499EACD05DA70EA30B7075E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_5203_C::OnStop_A690CF59499EACD05DA70EA30B7075E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5203_C", "OnStop_A690CF59499EACD05DA70EA30B7075E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5203.Quest_5203_C.OnDlgClosed_FBB2262D41678977E21B7C95A93D3AD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5203_C::OnDlgClosed_FBB2262D41678977E21B7C95A93D3AD9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5203_C", "OnDlgClosed_FBB2262D41678977E21B7C95A93D3AD9");

	Params::Quest_5203_C_OnDlgClosed_FBB2262D41678977E21B7C95A93D3AD9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5203.Quest_5203_C.OnDlgSelectedOption_FBB2262D41678977E21B7C95A93D3AD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5203_C::OnDlgSelectedOption_FBB2262D41678977E21B7C95A93D3AD9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5203_C", "OnDlgSelectedOption_FBB2262D41678977E21B7C95A93D3AD9");

	Params::Quest_5203_C_OnDlgSelectedOption_FBB2262D41678977E21B7C95A93D3AD9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5203.Quest_5203_C.OnSuccess_4F4949D144D0616E4EB39BB79ACF50EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5203_C::OnSuccess_4F4949D144D0616E4EB39BB79ACF50EF(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5203_C", "OnSuccess_4F4949D144D0616E4EB39BB79ACF50EF");

	Params::Quest_5203_C_OnSuccess_4F4949D144D0616E4EB39BB79ACF50EF Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
