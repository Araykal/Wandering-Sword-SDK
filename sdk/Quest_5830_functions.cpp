#pragma once



// Package: Quest_5830

#include "Basic.hpp"

#include "Quest_5830_classes.hpp"
#include "Quest_5830_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5830.Quest_5830_C.ExecuteUbergraph_Quest_5830
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5830_C::ExecuteUbergraph_Quest_5830(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5830_C", "ExecuteUbergraph_Quest_5830");

	Params::Quest_5830_C_ExecuteUbergraph_Quest_5830 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5830.Quest_5830_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5830_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5830_C", "HandleFinishing");

	Params::Quest_5830_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5830.Quest_5830_C.OnSuccess_59DF7080447A1741C18F23A233E13000
// (BlueprintCallable, BlueprintEvent)

void UQuest_5830_C::OnSuccess_59DF7080447A1741C18F23A233E13000()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5830_C", "OnSuccess_59DF7080447A1741C18F23A233E13000");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5830.Quest_5830_C.OnFinished_6AB9167349D81CE97296948779935F94
// (BlueprintCallable, BlueprintEvent)

void UQuest_5830_C::OnFinished_6AB9167349D81CE97296948779935F94()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5830_C", "OnFinished_6AB9167349D81CE97296948779935F94");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5830.Quest_5830_C.OnStop_6AB9167349D81CE97296948779935F94
// (BlueprintCallable, BlueprintEvent)

void UQuest_5830_C::OnStop_6AB9167349D81CE97296948779935F94()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5830_C", "OnStop_6AB9167349D81CE97296948779935F94");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5830.Quest_5830_C.OnDlgClosed_663337FE400E5FD9E94DE090A5BE64D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5830_C::OnDlgClosed_663337FE400E5FD9E94DE090A5BE64D0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5830_C", "OnDlgClosed_663337FE400E5FD9E94DE090A5BE64D0");

	Params::Quest_5830_C_OnDlgClosed_663337FE400E5FD9E94DE090A5BE64D0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5830.Quest_5830_C.OnDlgSelectedOption_663337FE400E5FD9E94DE090A5BE64D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5830_C::OnDlgSelectedOption_663337FE400E5FD9E94DE090A5BE64D0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5830_C", "OnDlgSelectedOption_663337FE400E5FD9E94DE090A5BE64D0");

	Params::Quest_5830_C_OnDlgSelectedOption_663337FE400E5FD9E94DE090A5BE64D0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
