#pragma once



// Package: Quest_28035

#include "Basic.hpp"

#include "Quest_28035_classes.hpp"
#include "Quest_28035_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28035.Quest_28035_C.ExecuteUbergraph_Quest_28035
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28035_C::ExecuteUbergraph_Quest_28035(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28035_C", "ExecuteUbergraph_Quest_28035");

	Params::Quest_28035_C_ExecuteUbergraph_Quest_28035 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28035.Quest_28035_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28035_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28035_C", "HandleFinishing");

	Params::Quest_28035_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28035.Quest_28035_C.OnDlgClosed_6E3FFA9240FFCA5D773C2D87837A849A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28035_C::OnDlgClosed_6E3FFA9240FFCA5D773C2D87837A849A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28035_C", "OnDlgClosed_6E3FFA9240FFCA5D773C2D87837A849A");

	Params::Quest_28035_C_OnDlgClosed_6E3FFA9240FFCA5D773C2D87837A849A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28035.Quest_28035_C.OnDlgSelectedOption_6E3FFA9240FFCA5D773C2D87837A849A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28035_C::OnDlgSelectedOption_6E3FFA9240FFCA5D773C2D87837A849A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28035_C", "OnDlgSelectedOption_6E3FFA9240FFCA5D773C2D87837A849A");

	Params::Quest_28035_C_OnDlgSelectedOption_6E3FFA9240FFCA5D773C2D87837A849A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28035.Quest_28035_C.OnFinished_C075FD4641182508756EE486611D8EA5
// (BlueprintCallable, BlueprintEvent)

void UQuest_28035_C::OnFinished_C075FD4641182508756EE486611D8EA5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28035_C", "OnFinished_C075FD4641182508756EE486611D8EA5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28035.Quest_28035_C.OnStop_C075FD4641182508756EE486611D8EA5
// (BlueprintCallable, BlueprintEvent)

void UQuest_28035_C::OnStop_C075FD4641182508756EE486611D8EA5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28035_C", "OnStop_C075FD4641182508756EE486611D8EA5");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
