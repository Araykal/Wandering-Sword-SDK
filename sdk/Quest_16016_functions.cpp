#pragma once



// Package: Quest_16016

#include "Basic.hpp"

#include "Quest_16016_classes.hpp"
#include "Quest_16016_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16016.Quest_16016_C.ExecuteUbergraph_Quest_16016
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16016_C::ExecuteUbergraph_Quest_16016(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16016_C", "ExecuteUbergraph_Quest_16016");

	Params::Quest_16016_C_ExecuteUbergraph_Quest_16016 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16016.Quest_16016_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16016_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16016_C", "HandleFinishing");

	Params::Quest_16016_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16016.Quest_16016_C.OnFinished_F911EAD242B226CB51B322A039B0836F
// (BlueprintCallable, BlueprintEvent)

void UQuest_16016_C::OnFinished_F911EAD242B226CB51B322A039B0836F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16016_C", "OnFinished_F911EAD242B226CB51B322A039B0836F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16016.Quest_16016_C.OnStop_F911EAD242B226CB51B322A039B0836F
// (BlueprintCallable, BlueprintEvent)

void UQuest_16016_C::OnStop_F911EAD242B226CB51B322A039B0836F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16016_C", "OnStop_F911EAD242B226CB51B322A039B0836F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16016.Quest_16016_C.OnDlgClosed_8FC2FB1148CB4C954C3EBB90D426A22A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16016_C::OnDlgClosed_8FC2FB1148CB4C954C3EBB90D426A22A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16016_C", "OnDlgClosed_8FC2FB1148CB4C954C3EBB90D426A22A");

	Params::Quest_16016_C_OnDlgClosed_8FC2FB1148CB4C954C3EBB90D426A22A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16016.Quest_16016_C.OnDlgSelectedOption_8FC2FB1148CB4C954C3EBB90D426A22A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16016_C::OnDlgSelectedOption_8FC2FB1148CB4C954C3EBB90D426A22A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16016_C", "OnDlgSelectedOption_8FC2FB1148CB4C954C3EBB90D426A22A");

	Params::Quest_16016_C_OnDlgSelectedOption_8FC2FB1148CB4C954C3EBB90D426A22A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
