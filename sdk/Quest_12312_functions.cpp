#pragma once



// Package: Quest_12312

#include "Basic.hpp"

#include "Quest_12312_classes.hpp"
#include "Quest_12312_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12312.Quest_12312_C.ExecuteUbergraph_Quest_12312
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12312_C::ExecuteUbergraph_Quest_12312(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12312_C", "ExecuteUbergraph_Quest_12312");

	Params::Quest_12312_C_ExecuteUbergraph_Quest_12312 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12312.Quest_12312_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12312_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12312_C", "HandleFinishing");

	Params::Quest_12312_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12312.Quest_12312_C.OnFinished_8E3B1ABB495889854EFA7BA20251C110
// (BlueprintCallable, BlueprintEvent)

void UQuest_12312_C::OnFinished_8E3B1ABB495889854EFA7BA20251C110()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12312_C", "OnFinished_8E3B1ABB495889854EFA7BA20251C110");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12312.Quest_12312_C.OnStop_8E3B1ABB495889854EFA7BA20251C110
// (BlueprintCallable, BlueprintEvent)

void UQuest_12312_C::OnStop_8E3B1ABB495889854EFA7BA20251C110()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12312_C", "OnStop_8E3B1ABB495889854EFA7BA20251C110");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12312.Quest_12312_C.OnDlgClosed_A96C2E6746079FC8379B7BBA8A5AEF20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12312_C::OnDlgClosed_A96C2E6746079FC8379B7BBA8A5AEF20(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12312_C", "OnDlgClosed_A96C2E6746079FC8379B7BBA8A5AEF20");

	Params::Quest_12312_C_OnDlgClosed_A96C2E6746079FC8379B7BBA8A5AEF20 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12312.Quest_12312_C.OnDlgSelectedOption_A96C2E6746079FC8379B7BBA8A5AEF20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12312_C::OnDlgSelectedOption_A96C2E6746079FC8379B7BBA8A5AEF20(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12312_C", "OnDlgSelectedOption_A96C2E6746079FC8379B7BBA8A5AEF20");

	Params::Quest_12312_C_OnDlgSelectedOption_A96C2E6746079FC8379B7BBA8A5AEF20 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
