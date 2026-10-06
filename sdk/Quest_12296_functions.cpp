#pragma once



// Package: Quest_12296

#include "Basic.hpp"

#include "Quest_12296_classes.hpp"
#include "Quest_12296_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12296.Quest_12296_C.ExecuteUbergraph_Quest_12296
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12296_C::ExecuteUbergraph_Quest_12296(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12296_C", "ExecuteUbergraph_Quest_12296");

	Params::Quest_12296_C_ExecuteUbergraph_Quest_12296 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12296.Quest_12296_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12296_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12296_C", "HandleFinishing");

	Params::Quest_12296_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12296.Quest_12296_C.OnFinished_AED2F5D048C64E29538B128CAFA7E807
// (BlueprintCallable, BlueprintEvent)

void UQuest_12296_C::OnFinished_AED2F5D048C64E29538B128CAFA7E807()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12296_C", "OnFinished_AED2F5D048C64E29538B128CAFA7E807");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12296.Quest_12296_C.OnStop_AED2F5D048C64E29538B128CAFA7E807
// (BlueprintCallable, BlueprintEvent)

void UQuest_12296_C::OnStop_AED2F5D048C64E29538B128CAFA7E807()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12296_C", "OnStop_AED2F5D048C64E29538B128CAFA7E807");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12296.Quest_12296_C.OnDlgClosed_AE476777458E6B0BC83783AA375C0E76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12296_C::OnDlgClosed_AE476777458E6B0BC83783AA375C0E76(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12296_C", "OnDlgClosed_AE476777458E6B0BC83783AA375C0E76");

	Params::Quest_12296_C_OnDlgClosed_AE476777458E6B0BC83783AA375C0E76 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12296.Quest_12296_C.OnDlgSelectedOption_AE476777458E6B0BC83783AA375C0E76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12296_C::OnDlgSelectedOption_AE476777458E6B0BC83783AA375C0E76(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12296_C", "OnDlgSelectedOption_AE476777458E6B0BC83783AA375C0E76");

	Params::Quest_12296_C_OnDlgSelectedOption_AE476777458E6B0BC83783AA375C0E76 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
