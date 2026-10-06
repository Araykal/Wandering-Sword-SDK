#pragma once



// Package: Quest_28705

#include "Basic.hpp"

#include "Quest_28705_classes.hpp"
#include "Quest_28705_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28705.Quest_28705_C.ExecuteUbergraph_Quest_28705
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28705_C::ExecuteUbergraph_Quest_28705(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28705_C", "ExecuteUbergraph_Quest_28705");

	Params::Quest_28705_C_ExecuteUbergraph_Quest_28705 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28705.Quest_28705_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28705_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28705_C", "HandleFinishing");

	Params::Quest_28705_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28705.Quest_28705_C.OnFinished_058D9A3D48246FD0B30026892910D19F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28705_C::OnFinished_058D9A3D48246FD0B30026892910D19F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28705_C", "OnFinished_058D9A3D48246FD0B30026892910D19F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28705.Quest_28705_C.OnStop_058D9A3D48246FD0B30026892910D19F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28705_C::OnStop_058D9A3D48246FD0B30026892910D19F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28705_C", "OnStop_058D9A3D48246FD0B30026892910D19F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28705.Quest_28705_C.OnDlgClosed_648CFC294BF6EEB34BBF2EA688186A68
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28705_C::OnDlgClosed_648CFC294BF6EEB34BBF2EA688186A68(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28705_C", "OnDlgClosed_648CFC294BF6EEB34BBF2EA688186A68");

	Params::Quest_28705_C_OnDlgClosed_648CFC294BF6EEB34BBF2EA688186A68 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28705.Quest_28705_C.OnDlgSelectedOption_648CFC294BF6EEB34BBF2EA688186A68
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28705_C::OnDlgSelectedOption_648CFC294BF6EEB34BBF2EA688186A68(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28705_C", "OnDlgSelectedOption_648CFC294BF6EEB34BBF2EA688186A68");

	Params::Quest_28705_C_OnDlgSelectedOption_648CFC294BF6EEB34BBF2EA688186A68 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
