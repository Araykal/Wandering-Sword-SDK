#pragma once



// Package: Quest_16121

#include "Basic.hpp"

#include "Quest_16121_classes.hpp"
#include "Quest_16121_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16121.Quest_16121_C.ExecuteUbergraph_Quest_16121
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16121_C::ExecuteUbergraph_Quest_16121(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16121_C", "ExecuteUbergraph_Quest_16121");

	Params::Quest_16121_C_ExecuteUbergraph_Quest_16121 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16121.Quest_16121_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16121_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16121_C", "HandleFinishing");

	Params::Quest_16121_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16121.Quest_16121_C.OnSuccess_C889BD6349879B72BACE56B9E08745E0
// (BlueprintCallable, BlueprintEvent)

void UQuest_16121_C::OnSuccess_C889BD6349879B72BACE56B9E08745E0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16121_C", "OnSuccess_C889BD6349879B72BACE56B9E08745E0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16121.Quest_16121_C.OnFinished_C0D7D3A641E26FD8D7BC82908D348404
// (BlueprintCallable, BlueprintEvent)

void UQuest_16121_C::OnFinished_C0D7D3A641E26FD8D7BC82908D348404()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16121_C", "OnFinished_C0D7D3A641E26FD8D7BC82908D348404");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16121.Quest_16121_C.OnStop_C0D7D3A641E26FD8D7BC82908D348404
// (BlueprintCallable, BlueprintEvent)

void UQuest_16121_C::OnStop_C0D7D3A641E26FD8D7BC82908D348404()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16121_C", "OnStop_C0D7D3A641E26FD8D7BC82908D348404");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16121.Quest_16121_C.OnDlgClosed_D88E1B0446826DE63E4E11B05795371F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16121_C::OnDlgClosed_D88E1B0446826DE63E4E11B05795371F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16121_C", "OnDlgClosed_D88E1B0446826DE63E4E11B05795371F");

	Params::Quest_16121_C_OnDlgClosed_D88E1B0446826DE63E4E11B05795371F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16121.Quest_16121_C.OnDlgSelectedOption_D88E1B0446826DE63E4E11B05795371F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16121_C::OnDlgSelectedOption_D88E1B0446826DE63E4E11B05795371F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16121_C", "OnDlgSelectedOption_D88E1B0446826DE63E4E11B05795371F");

	Params::Quest_16121_C_OnDlgSelectedOption_D88E1B0446826DE63E4E11B05795371F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
