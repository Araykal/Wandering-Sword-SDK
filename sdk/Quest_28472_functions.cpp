#pragma once



// Package: Quest_28472

#include "Basic.hpp"

#include "Quest_28472_classes.hpp"
#include "Quest_28472_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28472.Quest_28472_C.ExecuteUbergraph_Quest_28472
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28472_C::ExecuteUbergraph_Quest_28472(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28472_C", "ExecuteUbergraph_Quest_28472");

	Params::Quest_28472_C_ExecuteUbergraph_Quest_28472 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28472.Quest_28472_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28472_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28472_C", "HandleFinishing");

	Params::Quest_28472_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28472.Quest_28472_C.OnFinished_3960C7354D7B22BB3EB2909BD3789267
// (BlueprintCallable, BlueprintEvent)

void UQuest_28472_C::OnFinished_3960C7354D7B22BB3EB2909BD3789267()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28472_C", "OnFinished_3960C7354D7B22BB3EB2909BD3789267");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28472.Quest_28472_C.OnStop_3960C7354D7B22BB3EB2909BD3789267
// (BlueprintCallable, BlueprintEvent)

void UQuest_28472_C::OnStop_3960C7354D7B22BB3EB2909BD3789267()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28472_C", "OnStop_3960C7354D7B22BB3EB2909BD3789267");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28472.Quest_28472_C.OnDlgClosed_8B79606243BE275B51B262ABB49F4220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28472_C::OnDlgClosed_8B79606243BE275B51B262ABB49F4220(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28472_C", "OnDlgClosed_8B79606243BE275B51B262ABB49F4220");

	Params::Quest_28472_C_OnDlgClosed_8B79606243BE275B51B262ABB49F4220 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28472.Quest_28472_C.OnDlgSelectedOption_8B79606243BE275B51B262ABB49F4220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28472_C::OnDlgSelectedOption_8B79606243BE275B51B262ABB49F4220(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28472_C", "OnDlgSelectedOption_8B79606243BE275B51B262ABB49F4220");

	Params::Quest_28472_C_OnDlgSelectedOption_8B79606243BE275B51B262ABB49F4220 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
