#pragma once



// Package: Quest_16122

#include "Basic.hpp"

#include "Quest_16122_classes.hpp"
#include "Quest_16122_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16122.Quest_16122_C.ExecuteUbergraph_Quest_16122
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16122_C::ExecuteUbergraph_Quest_16122(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16122_C", "ExecuteUbergraph_Quest_16122");

	Params::Quest_16122_C_ExecuteUbergraph_Quest_16122 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16122.Quest_16122_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16122_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16122_C", "HandleFinishing");

	Params::Quest_16122_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16122.Quest_16122_C.OnFinished_4B267A2A43E20FB9524372938B35A9CC
// (BlueprintCallable, BlueprintEvent)

void UQuest_16122_C::OnFinished_4B267A2A43E20FB9524372938B35A9CC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16122_C", "OnFinished_4B267A2A43E20FB9524372938B35A9CC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16122.Quest_16122_C.OnStop_4B267A2A43E20FB9524372938B35A9CC
// (BlueprintCallable, BlueprintEvent)

void UQuest_16122_C::OnStop_4B267A2A43E20FB9524372938B35A9CC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16122_C", "OnStop_4B267A2A43E20FB9524372938B35A9CC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16122.Quest_16122_C.OnDlgClosed_096711834ECA61C0DF91BDA9BE747038
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16122_C::OnDlgClosed_096711834ECA61C0DF91BDA9BE747038(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16122_C", "OnDlgClosed_096711834ECA61C0DF91BDA9BE747038");

	Params::Quest_16122_C_OnDlgClosed_096711834ECA61C0DF91BDA9BE747038 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16122.Quest_16122_C.OnDlgSelectedOption_096711834ECA61C0DF91BDA9BE747038
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16122_C::OnDlgSelectedOption_096711834ECA61C0DF91BDA9BE747038(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16122_C", "OnDlgSelectedOption_096711834ECA61C0DF91BDA9BE747038");

	Params::Quest_16122_C_OnDlgSelectedOption_096711834ECA61C0DF91BDA9BE747038 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
