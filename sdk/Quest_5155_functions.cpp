#pragma once



// Package: Quest_5155

#include "Basic.hpp"

#include "Quest_5155_classes.hpp"
#include "Quest_5155_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5155.Quest_5155_C.ExecuteUbergraph_Quest_5155
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5155_C::ExecuteUbergraph_Quest_5155(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5155_C", "ExecuteUbergraph_Quest_5155");

	Params::Quest_5155_C_ExecuteUbergraph_Quest_5155 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5155.Quest_5155_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5155_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5155_C", "HandleFinishing");

	Params::Quest_5155_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5155.Quest_5155_C.OnSuccess_ACA260484D0AFDCE3B3E47AC4DCA1A77
// (BlueprintCallable, BlueprintEvent)

void UQuest_5155_C::OnSuccess_ACA260484D0AFDCE3B3E47AC4DCA1A77()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5155_C", "OnSuccess_ACA260484D0AFDCE3B3E47AC4DCA1A77");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5155.Quest_5155_C.OnFinished_B22163FE42AAF3D8AAD6A5A0AA2CD787
// (BlueprintCallable, BlueprintEvent)

void UQuest_5155_C::OnFinished_B22163FE42AAF3D8AAD6A5A0AA2CD787()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5155_C", "OnFinished_B22163FE42AAF3D8AAD6A5A0AA2CD787");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5155.Quest_5155_C.OnStop_B22163FE42AAF3D8AAD6A5A0AA2CD787
// (BlueprintCallable, BlueprintEvent)

void UQuest_5155_C::OnStop_B22163FE42AAF3D8AAD6A5A0AA2CD787()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5155_C", "OnStop_B22163FE42AAF3D8AAD6A5A0AA2CD787");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5155.Quest_5155_C.OnDlgClosed_7D8B6C4B40D4AC58ACDFEC928D481288
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5155_C::OnDlgClosed_7D8B6C4B40D4AC58ACDFEC928D481288(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5155_C", "OnDlgClosed_7D8B6C4B40D4AC58ACDFEC928D481288");

	Params::Quest_5155_C_OnDlgClosed_7D8B6C4B40D4AC58ACDFEC928D481288 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5155.Quest_5155_C.OnDlgSelectedOption_7D8B6C4B40D4AC58ACDFEC928D481288
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5155_C::OnDlgSelectedOption_7D8B6C4B40D4AC58ACDFEC928D481288(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5155_C", "OnDlgSelectedOption_7D8B6C4B40D4AC58ACDFEC928D481288");

	Params::Quest_5155_C_OnDlgSelectedOption_7D8B6C4B40D4AC58ACDFEC928D481288 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
