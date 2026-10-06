#pragma once



// Package: Quest_28902

#include "Basic.hpp"

#include "Quest_28902_classes.hpp"
#include "Quest_28902_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28902.Quest_28902_C.ExecuteUbergraph_Quest_28902
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28902_C::ExecuteUbergraph_Quest_28902(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28902_C", "ExecuteUbergraph_Quest_28902");

	Params::Quest_28902_C_ExecuteUbergraph_Quest_28902 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28902.Quest_28902_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28902_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28902_C", "HandleFinishing");

	Params::Quest_28902_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28902.Quest_28902_C.OnSuccess_4441AA6F43F3C472D4C29DBC32636613
// (BlueprintCallable, BlueprintEvent)

void UQuest_28902_C::OnSuccess_4441AA6F43F3C472D4C29DBC32636613()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28902_C", "OnSuccess_4441AA6F43F3C472D4C29DBC32636613");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28902.Quest_28902_C.OnFinished_4C7CF862410CE0B738CF75A6EF5A2352
// (BlueprintCallable, BlueprintEvent)

void UQuest_28902_C::OnFinished_4C7CF862410CE0B738CF75A6EF5A2352()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28902_C", "OnFinished_4C7CF862410CE0B738CF75A6EF5A2352");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28902.Quest_28902_C.OnStop_4C7CF862410CE0B738CF75A6EF5A2352
// (BlueprintCallable, BlueprintEvent)

void UQuest_28902_C::OnStop_4C7CF862410CE0B738CF75A6EF5A2352()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28902_C", "OnStop_4C7CF862410CE0B738CF75A6EF5A2352");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28902.Quest_28902_C.OnDlgClosed_7208B5E54D1C3118A7D0F7BCE83ED0DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28902_C::OnDlgClosed_7208B5E54D1C3118A7D0F7BCE83ED0DC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28902_C", "OnDlgClosed_7208B5E54D1C3118A7D0F7BCE83ED0DC");

	Params::Quest_28902_C_OnDlgClosed_7208B5E54D1C3118A7D0F7BCE83ED0DC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28902.Quest_28902_C.OnDlgSelectedOption_7208B5E54D1C3118A7D0F7BCE83ED0DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28902_C::OnDlgSelectedOption_7208B5E54D1C3118A7D0F7BCE83ED0DC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28902_C", "OnDlgSelectedOption_7208B5E54D1C3118A7D0F7BCE83ED0DC");

	Params::Quest_28902_C_OnDlgSelectedOption_7208B5E54D1C3118A7D0F7BCE83ED0DC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
