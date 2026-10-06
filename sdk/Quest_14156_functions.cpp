#pragma once



// Package: Quest_14156

#include "Basic.hpp"

#include "Quest_14156_classes.hpp"
#include "Quest_14156_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14156.Quest_14156_C.ExecuteUbergraph_Quest_14156
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14156_C::ExecuteUbergraph_Quest_14156(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14156_C", "ExecuteUbergraph_Quest_14156");

	Params::Quest_14156_C_ExecuteUbergraph_Quest_14156 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14156.Quest_14156_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14156_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14156_C", "HandleFinishing");

	Params::Quest_14156_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14156.Quest_14156_C.OnFinished_4780A5154FA61C72EB1D2292BA158C53
// (BlueprintCallable, BlueprintEvent)

void UQuest_14156_C::OnFinished_4780A5154FA61C72EB1D2292BA158C53()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14156_C", "OnFinished_4780A5154FA61C72EB1D2292BA158C53");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14156.Quest_14156_C.OnStop_4780A5154FA61C72EB1D2292BA158C53
// (BlueprintCallable, BlueprintEvent)

void UQuest_14156_C::OnStop_4780A5154FA61C72EB1D2292BA158C53()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14156_C", "OnStop_4780A5154FA61C72EB1D2292BA158C53");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14156.Quest_14156_C.OnDlgClosed_C82DA0934F1ABFBBFA365DA1E4CE7FCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14156_C::OnDlgClosed_C82DA0934F1ABFBBFA365DA1E4CE7FCE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14156_C", "OnDlgClosed_C82DA0934F1ABFBBFA365DA1E4CE7FCE");

	Params::Quest_14156_C_OnDlgClosed_C82DA0934F1ABFBBFA365DA1E4CE7FCE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14156.Quest_14156_C.OnDlgSelectedOption_C82DA0934F1ABFBBFA365DA1E4CE7FCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14156_C::OnDlgSelectedOption_C82DA0934F1ABFBBFA365DA1E4CE7FCE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14156_C", "OnDlgSelectedOption_C82DA0934F1ABFBBFA365DA1E4CE7FCE");

	Params::Quest_14156_C_OnDlgSelectedOption_C82DA0934F1ABFBBFA365DA1E4CE7FCE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14156.Quest_14156_C.OnSuccess_7312FD764A05FE7FBE6D2FB2C3186715
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_14156_C::OnSuccess_7312FD764A05FE7FBE6D2FB2C3186715(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14156_C", "OnSuccess_7312FD764A05FE7FBE6D2FB2C3186715");

	Params::Quest_14156_C_OnSuccess_7312FD764A05FE7FBE6D2FB2C3186715 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
