#pragma once



// Package: Quest_30702

#include "Basic.hpp"

#include "Quest_30702_classes.hpp"
#include "Quest_30702_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30702.Quest_30702_C.ExecuteUbergraph_Quest_30702
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30702_C::ExecuteUbergraph_Quest_30702(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30702_C", "ExecuteUbergraph_Quest_30702");

	Params::Quest_30702_C_ExecuteUbergraph_Quest_30702 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30702.Quest_30702_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30702_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30702_C", "HandleFinishing");

	Params::Quest_30702_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30702.Quest_30702_C.OnDlgClosed_0D8E397E47C1F8F80B42119BA25398F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30702_C::OnDlgClosed_0D8E397E47C1F8F80B42119BA25398F8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30702_C", "OnDlgClosed_0D8E397E47C1F8F80B42119BA25398F8");

	Params::Quest_30702_C_OnDlgClosed_0D8E397E47C1F8F80B42119BA25398F8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30702.Quest_30702_C.OnDlgSelectedOption_0D8E397E47C1F8F80B42119BA25398F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30702_C::OnDlgSelectedOption_0D8E397E47C1F8F80B42119BA25398F8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30702_C", "OnDlgSelectedOption_0D8E397E47C1F8F80B42119BA25398F8");

	Params::Quest_30702_C_OnDlgSelectedOption_0D8E397E47C1F8F80B42119BA25398F8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30702.Quest_30702_C.OnFinished_1AD02ED246B21B7A651B4EBC405C9A41
// (BlueprintCallable, BlueprintEvent)

void UQuest_30702_C::OnFinished_1AD02ED246B21B7A651B4EBC405C9A41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30702_C", "OnFinished_1AD02ED246B21B7A651B4EBC405C9A41");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30702.Quest_30702_C.OnStop_1AD02ED246B21B7A651B4EBC405C9A41
// (BlueprintCallable, BlueprintEvent)

void UQuest_30702_C::OnStop_1AD02ED246B21B7A651B4EBC405C9A41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30702_C", "OnStop_1AD02ED246B21B7A651B4EBC405C9A41");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
