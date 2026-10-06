#pragma once



// Package: Quest_28268

#include "Basic.hpp"

#include "Quest_28268_classes.hpp"
#include "Quest_28268_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28268.Quest_28268_C.ExecuteUbergraph_Quest_28268
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28268_C::ExecuteUbergraph_Quest_28268(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28268_C", "ExecuteUbergraph_Quest_28268");

	Params::Quest_28268_C_ExecuteUbergraph_Quest_28268 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28268.Quest_28268_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28268_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28268_C", "HandleFinishing");

	Params::Quest_28268_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28268.Quest_28268_C.OnFinished_80A1F8FA44555FCAD171669A981CDD07
// (BlueprintCallable, BlueprintEvent)

void UQuest_28268_C::OnFinished_80A1F8FA44555FCAD171669A981CDD07()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28268_C", "OnFinished_80A1F8FA44555FCAD171669A981CDD07");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28268.Quest_28268_C.OnStop_80A1F8FA44555FCAD171669A981CDD07
// (BlueprintCallable, BlueprintEvent)

void UQuest_28268_C::OnStop_80A1F8FA44555FCAD171669A981CDD07()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28268_C", "OnStop_80A1F8FA44555FCAD171669A981CDD07");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28268.Quest_28268_C.OnDlgClosed_71AD87C44E7738E2B8021091EE96A709
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28268_C::OnDlgClosed_71AD87C44E7738E2B8021091EE96A709(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28268_C", "OnDlgClosed_71AD87C44E7738E2B8021091EE96A709");

	Params::Quest_28268_C_OnDlgClosed_71AD87C44E7738E2B8021091EE96A709 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28268.Quest_28268_C.OnDlgSelectedOption_71AD87C44E7738E2B8021091EE96A709
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28268_C::OnDlgSelectedOption_71AD87C44E7738E2B8021091EE96A709(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28268_C", "OnDlgSelectedOption_71AD87C44E7738E2B8021091EE96A709");

	Params::Quest_28268_C_OnDlgSelectedOption_71AD87C44E7738E2B8021091EE96A709 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
