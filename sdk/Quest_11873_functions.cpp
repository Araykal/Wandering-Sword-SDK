#pragma once



// Package: Quest_11873

#include "Basic.hpp"

#include "Quest_11873_classes.hpp"
#include "Quest_11873_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11873.Quest_11873_C.ExecuteUbergraph_Quest_11873
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11873_C::ExecuteUbergraph_Quest_11873(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11873_C", "ExecuteUbergraph_Quest_11873");

	Params::Quest_11873_C_ExecuteUbergraph_Quest_11873 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11873.Quest_11873_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11873_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11873_C", "HandleFinishing");

	Params::Quest_11873_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11873.Quest_11873_C.OnFinished_856548CB4FEAFCEAA7288EB66B9E3D5E
// (BlueprintCallable, BlueprintEvent)

void UQuest_11873_C::OnFinished_856548CB4FEAFCEAA7288EB66B9E3D5E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11873_C", "OnFinished_856548CB4FEAFCEAA7288EB66B9E3D5E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11873.Quest_11873_C.OnStop_856548CB4FEAFCEAA7288EB66B9E3D5E
// (BlueprintCallable, BlueprintEvent)

void UQuest_11873_C::OnStop_856548CB4FEAFCEAA7288EB66B9E3D5E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11873_C", "OnStop_856548CB4FEAFCEAA7288EB66B9E3D5E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11873.Quest_11873_C.OnDlgClosed_1CFA122640E0D221DB4F359186D09E23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11873_C::OnDlgClosed_1CFA122640E0D221DB4F359186D09E23(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11873_C", "OnDlgClosed_1CFA122640E0D221DB4F359186D09E23");

	Params::Quest_11873_C_OnDlgClosed_1CFA122640E0D221DB4F359186D09E23 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11873.Quest_11873_C.OnDlgSelectedOption_1CFA122640E0D221DB4F359186D09E23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11873_C::OnDlgSelectedOption_1CFA122640E0D221DB4F359186D09E23(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11873_C", "OnDlgSelectedOption_1CFA122640E0D221DB4F359186D09E23");

	Params::Quest_11873_C_OnDlgSelectedOption_1CFA122640E0D221DB4F359186D09E23 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
