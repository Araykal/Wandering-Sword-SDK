#pragma once



// Package: Quest_30336

#include "Basic.hpp"

#include "Quest_30336_classes.hpp"
#include "Quest_30336_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30336.Quest_30336_C.ExecuteUbergraph_Quest_30336
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30336_C::ExecuteUbergraph_Quest_30336(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30336_C", "ExecuteUbergraph_Quest_30336");

	Params::Quest_30336_C_ExecuteUbergraph_Quest_30336 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30336.Quest_30336_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30336_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30336_C", "HandleFinishing");

	Params::Quest_30336_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30336.Quest_30336_C.OnFinished_B3281D064D8B0DE63B0361ACC3B3DD6C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30336_C::OnFinished_B3281D064D8B0DE63B0361ACC3B3DD6C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30336_C", "OnFinished_B3281D064D8B0DE63B0361ACC3B3DD6C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30336.Quest_30336_C.OnStop_B3281D064D8B0DE63B0361ACC3B3DD6C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30336_C::OnStop_B3281D064D8B0DE63B0361ACC3B3DD6C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30336_C", "OnStop_B3281D064D8B0DE63B0361ACC3B3DD6C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30336.Quest_30336_C.OnDlgClosed_0FDF075546476B553D84AABD7D0BBCD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30336_C::OnDlgClosed_0FDF075546476B553D84AABD7D0BBCD3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30336_C", "OnDlgClosed_0FDF075546476B553D84AABD7D0BBCD3");

	Params::Quest_30336_C_OnDlgClosed_0FDF075546476B553D84AABD7D0BBCD3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30336.Quest_30336_C.OnDlgSelectedOption_0FDF075546476B553D84AABD7D0BBCD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30336_C::OnDlgSelectedOption_0FDF075546476B553D84AABD7D0BBCD3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30336_C", "OnDlgSelectedOption_0FDF075546476B553D84AABD7D0BBCD3");

	Params::Quest_30336_C_OnDlgSelectedOption_0FDF075546476B553D84AABD7D0BBCD3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
