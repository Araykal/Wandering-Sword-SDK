#pragma once



// Package: Quest_14163

#include "Basic.hpp"

#include "Quest_14163_classes.hpp"
#include "Quest_14163_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14163.Quest_14163_C.ExecuteUbergraph_Quest_14163
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14163_C::ExecuteUbergraph_Quest_14163(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14163_C", "ExecuteUbergraph_Quest_14163");

	Params::Quest_14163_C_ExecuteUbergraph_Quest_14163 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14163.Quest_14163_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14163_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14163_C", "HandleFinishing");

	Params::Quest_14163_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14163.Quest_14163_C.OnFinished_A45EF466440638282CBCECA7A9105E38
// (BlueprintCallable, BlueprintEvent)

void UQuest_14163_C::OnFinished_A45EF466440638282CBCECA7A9105E38()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14163_C", "OnFinished_A45EF466440638282CBCECA7A9105E38");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14163.Quest_14163_C.OnStop_A45EF466440638282CBCECA7A9105E38
// (BlueprintCallable, BlueprintEvent)

void UQuest_14163_C::OnStop_A45EF466440638282CBCECA7A9105E38()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14163_C", "OnStop_A45EF466440638282CBCECA7A9105E38");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14163.Quest_14163_C.OnDlgClosed_5A3E79EE48646F811E070FB135F69A3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14163_C::OnDlgClosed_5A3E79EE48646F811E070FB135F69A3B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14163_C", "OnDlgClosed_5A3E79EE48646F811E070FB135F69A3B");

	Params::Quest_14163_C_OnDlgClosed_5A3E79EE48646F811E070FB135F69A3B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14163.Quest_14163_C.OnDlgSelectedOption_5A3E79EE48646F811E070FB135F69A3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14163_C::OnDlgSelectedOption_5A3E79EE48646F811E070FB135F69A3B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14163_C", "OnDlgSelectedOption_5A3E79EE48646F811E070FB135F69A3B");

	Params::Quest_14163_C_OnDlgSelectedOption_5A3E79EE48646F811E070FB135F69A3B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14163.Quest_14163_C.OnSuccess_C79D27C04C9AD7D422484A9BC4592A27
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_14163_C::OnSuccess_C79D27C04C9AD7D422484A9BC4592A27(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14163_C", "OnSuccess_C79D27C04C9AD7D422484A9BC4592A27");

	Params::Quest_14163_C_OnSuccess_C79D27C04C9AD7D422484A9BC4592A27 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
