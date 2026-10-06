#pragma once



// Package: Quest_7010

#include "Basic.hpp"

#include "Quest_7010_classes.hpp"
#include "Quest_7010_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7010.Quest_7010_C.ExecuteUbergraph_Quest_7010
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7010_C::ExecuteUbergraph_Quest_7010(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7010_C", "ExecuteUbergraph_Quest_7010");

	Params::Quest_7010_C_ExecuteUbergraph_Quest_7010 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7010.Quest_7010_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7010_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7010_C", "HandleFinishing");

	Params::Quest_7010_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7010.Quest_7010_C.OnFinished_2DC28ED84E3859A8BF3FABB71EA1C720
// (BlueprintCallable, BlueprintEvent)

void UQuest_7010_C::OnFinished_2DC28ED84E3859A8BF3FABB71EA1C720()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7010_C", "OnFinished_2DC28ED84E3859A8BF3FABB71EA1C720");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7010.Quest_7010_C.OnStop_2DC28ED84E3859A8BF3FABB71EA1C720
// (BlueprintCallable, BlueprintEvent)

void UQuest_7010_C::OnStop_2DC28ED84E3859A8BF3FABB71EA1C720()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7010_C", "OnStop_2DC28ED84E3859A8BF3FABB71EA1C720");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7010.Quest_7010_C.OnDlgClosed_2D4A81A84BCE4F8D8A273F8822BE7893
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7010_C::OnDlgClosed_2D4A81A84BCE4F8D8A273F8822BE7893(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7010_C", "OnDlgClosed_2D4A81A84BCE4F8D8A273F8822BE7893");

	Params::Quest_7010_C_OnDlgClosed_2D4A81A84BCE4F8D8A273F8822BE7893 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7010.Quest_7010_C.OnDlgSelectedOption_2D4A81A84BCE4F8D8A273F8822BE7893
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7010_C::OnDlgSelectedOption_2D4A81A84BCE4F8D8A273F8822BE7893(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7010_C", "OnDlgSelectedOption_2D4A81A84BCE4F8D8A273F8822BE7893");

	Params::Quest_7010_C_OnDlgSelectedOption_2D4A81A84BCE4F8D8A273F8822BE7893 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
