#pragma once



// Package: Quest_11847

#include "Basic.hpp"

#include "Quest_11847_classes.hpp"
#include "Quest_11847_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11847.Quest_11847_C.ExecuteUbergraph_Quest_11847
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11847_C::ExecuteUbergraph_Quest_11847(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11847_C", "ExecuteUbergraph_Quest_11847");

	Params::Quest_11847_C_ExecuteUbergraph_Quest_11847 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11847.Quest_11847_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11847_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11847_C", "HandleFinishing");

	Params::Quest_11847_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11847.Quest_11847_C.OnFinished_BD80FA814E4ECC7E5D53E8AC6955AC22
// (BlueprintCallable, BlueprintEvent)

void UQuest_11847_C::OnFinished_BD80FA814E4ECC7E5D53E8AC6955AC22()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11847_C", "OnFinished_BD80FA814E4ECC7E5D53E8AC6955AC22");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11847.Quest_11847_C.OnStop_BD80FA814E4ECC7E5D53E8AC6955AC22
// (BlueprintCallable, BlueprintEvent)

void UQuest_11847_C::OnStop_BD80FA814E4ECC7E5D53E8AC6955AC22()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11847_C", "OnStop_BD80FA814E4ECC7E5D53E8AC6955AC22");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11847.Quest_11847_C.OnDlgClosed_202D88BC49C434E4A2A5F292A63EE9F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11847_C::OnDlgClosed_202D88BC49C434E4A2A5F292A63EE9F8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11847_C", "OnDlgClosed_202D88BC49C434E4A2A5F292A63EE9F8");

	Params::Quest_11847_C_OnDlgClosed_202D88BC49C434E4A2A5F292A63EE9F8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11847.Quest_11847_C.OnDlgSelectedOption_202D88BC49C434E4A2A5F292A63EE9F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11847_C::OnDlgSelectedOption_202D88BC49C434E4A2A5F292A63EE9F8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11847_C", "OnDlgSelectedOption_202D88BC49C434E4A2A5F292A63EE9F8");

	Params::Quest_11847_C_OnDlgSelectedOption_202D88BC49C434E4A2A5F292A63EE9F8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
