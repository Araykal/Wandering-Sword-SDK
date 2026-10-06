#pragma once



// Package: Quest_7044

#include "Basic.hpp"

#include "Quest_7044_classes.hpp"
#include "Quest_7044_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7044.Quest_7044_C.ExecuteUbergraph_Quest_7044
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7044_C::ExecuteUbergraph_Quest_7044(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7044_C", "ExecuteUbergraph_Quest_7044");

	Params::Quest_7044_C_ExecuteUbergraph_Quest_7044 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7044.Quest_7044_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7044_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7044_C", "HandleFinishing");

	Params::Quest_7044_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7044.Quest_7044_C.OnFinished_9AD34FF74AABFA04D3DF72B0F81D3EA5
// (BlueprintCallable, BlueprintEvent)

void UQuest_7044_C::OnFinished_9AD34FF74AABFA04D3DF72B0F81D3EA5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7044_C", "OnFinished_9AD34FF74AABFA04D3DF72B0F81D3EA5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7044.Quest_7044_C.OnStop_9AD34FF74AABFA04D3DF72B0F81D3EA5
// (BlueprintCallable, BlueprintEvent)

void UQuest_7044_C::OnStop_9AD34FF74AABFA04D3DF72B0F81D3EA5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7044_C", "OnStop_9AD34FF74AABFA04D3DF72B0F81D3EA5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7044.Quest_7044_C.OnDlgClosed_85882F6A42859EC9E8D159ABDE435721
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7044_C::OnDlgClosed_85882F6A42859EC9E8D159ABDE435721(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7044_C", "OnDlgClosed_85882F6A42859EC9E8D159ABDE435721");

	Params::Quest_7044_C_OnDlgClosed_85882F6A42859EC9E8D159ABDE435721 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7044.Quest_7044_C.OnDlgSelectedOption_85882F6A42859EC9E8D159ABDE435721
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7044_C::OnDlgSelectedOption_85882F6A42859EC9E8D159ABDE435721(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7044_C", "OnDlgSelectedOption_85882F6A42859EC9E8D159ABDE435721");

	Params::Quest_7044_C_OnDlgSelectedOption_85882F6A42859EC9E8D159ABDE435721 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
