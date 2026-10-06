#pragma once



// Package: Quest_29525

#include "Basic.hpp"

#include "Quest_29525_classes.hpp"
#include "Quest_29525_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29525.Quest_29525_C.ExecuteUbergraph_Quest_29525
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29525_C::ExecuteUbergraph_Quest_29525(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29525_C", "ExecuteUbergraph_Quest_29525");

	Params::Quest_29525_C_ExecuteUbergraph_Quest_29525 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29525.Quest_29525_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29525_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29525_C", "HandleFinishing");

	Params::Quest_29525_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29525.Quest_29525_C.OnFinished_51209E5D4FBFCC927D32F29195BACFEA
// (BlueprintCallable, BlueprintEvent)

void UQuest_29525_C::OnFinished_51209E5D4FBFCC927D32F29195BACFEA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29525_C", "OnFinished_51209E5D4FBFCC927D32F29195BACFEA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29525.Quest_29525_C.OnStop_51209E5D4FBFCC927D32F29195BACFEA
// (BlueprintCallable, BlueprintEvent)

void UQuest_29525_C::OnStop_51209E5D4FBFCC927D32F29195BACFEA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29525_C", "OnStop_51209E5D4FBFCC927D32F29195BACFEA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29525.Quest_29525_C.OnDlgClosed_2E17B6854D2B0AFEC04590A0B7EF7029
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29525_C::OnDlgClosed_2E17B6854D2B0AFEC04590A0B7EF7029(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29525_C", "OnDlgClosed_2E17B6854D2B0AFEC04590A0B7EF7029");

	Params::Quest_29525_C_OnDlgClosed_2E17B6854D2B0AFEC04590A0B7EF7029 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29525.Quest_29525_C.OnDlgSelectedOption_2E17B6854D2B0AFEC04590A0B7EF7029
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29525_C::OnDlgSelectedOption_2E17B6854D2B0AFEC04590A0B7EF7029(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29525_C", "OnDlgSelectedOption_2E17B6854D2B0AFEC04590A0B7EF7029");

	Params::Quest_29525_C_OnDlgSelectedOption_2E17B6854D2B0AFEC04590A0B7EF7029 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
