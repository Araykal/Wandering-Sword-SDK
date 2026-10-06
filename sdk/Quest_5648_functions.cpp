#pragma once



// Package: Quest_5648

#include "Basic.hpp"

#include "Quest_5648_classes.hpp"
#include "Quest_5648_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5648.Quest_5648_C.ExecuteUbergraph_Quest_5648
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5648_C::ExecuteUbergraph_Quest_5648(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5648_C", "ExecuteUbergraph_Quest_5648");

	Params::Quest_5648_C_ExecuteUbergraph_Quest_5648 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5648.Quest_5648_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5648_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5648_C", "HandleFinishing");

	Params::Quest_5648_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5648.Quest_5648_C.OnFinished_187063994971873B229DAB900DD1B578
// (BlueprintCallable, BlueprintEvent)

void UQuest_5648_C::OnFinished_187063994971873B229DAB900DD1B578()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5648_C", "OnFinished_187063994971873B229DAB900DD1B578");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5648.Quest_5648_C.OnStop_187063994971873B229DAB900DD1B578
// (BlueprintCallable, BlueprintEvent)

void UQuest_5648_C::OnStop_187063994971873B229DAB900DD1B578()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5648_C", "OnStop_187063994971873B229DAB900DD1B578");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5648.Quest_5648_C.OnDlgClosed_2E5694C74F635DFD49B67DB076179C20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5648_C::OnDlgClosed_2E5694C74F635DFD49B67DB076179C20(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5648_C", "OnDlgClosed_2E5694C74F635DFD49B67DB076179C20");

	Params::Quest_5648_C_OnDlgClosed_2E5694C74F635DFD49B67DB076179C20 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5648.Quest_5648_C.OnDlgSelectedOption_2E5694C74F635DFD49B67DB076179C20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5648_C::OnDlgSelectedOption_2E5694C74F635DFD49B67DB076179C20(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5648_C", "OnDlgSelectedOption_2E5694C74F635DFD49B67DB076179C20");

	Params::Quest_5648_C_OnDlgSelectedOption_2E5694C74F635DFD49B67DB076179C20 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5648.Quest_5648_C.OnSuccess_F54447DB4483CC8B9192AE97049E5724
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5648_C::OnSuccess_F54447DB4483CC8B9192AE97049E5724(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5648_C", "OnSuccess_F54447DB4483CC8B9192AE97049E5724");

	Params::Quest_5648_C_OnSuccess_F54447DB4483CC8B9192AE97049E5724 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
