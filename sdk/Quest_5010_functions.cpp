#pragma once



// Package: Quest_5010

#include "Basic.hpp"

#include "Quest_5010_classes.hpp"
#include "Quest_5010_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5010.Quest_5010_C.ExecuteUbergraph_Quest_5010
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5010_C::ExecuteUbergraph_Quest_5010(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5010_C", "ExecuteUbergraph_Quest_5010");

	Params::Quest_5010_C_ExecuteUbergraph_Quest_5010 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5010.Quest_5010_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5010_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5010_C", "HandleFinishing");

	Params::Quest_5010_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5010.Quest_5010_C.OnFinished_EFCE6DD144CEB3ED9F7E1CAB1F0CB304
// (BlueprintCallable, BlueprintEvent)

void UQuest_5010_C::OnFinished_EFCE6DD144CEB3ED9F7E1CAB1F0CB304()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5010_C", "OnFinished_EFCE6DD144CEB3ED9F7E1CAB1F0CB304");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5010.Quest_5010_C.OnStop_EFCE6DD144CEB3ED9F7E1CAB1F0CB304
// (BlueprintCallable, BlueprintEvent)

void UQuest_5010_C::OnStop_EFCE6DD144CEB3ED9F7E1CAB1F0CB304()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5010_C", "OnStop_EFCE6DD144CEB3ED9F7E1CAB1F0CB304");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5010.Quest_5010_C.OnDlgClosed_709C3DD54983ECE68D694EA19C8D4E9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5010_C::OnDlgClosed_709C3DD54983ECE68D694EA19C8D4E9C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5010_C", "OnDlgClosed_709C3DD54983ECE68D694EA19C8D4E9C");

	Params::Quest_5010_C_OnDlgClosed_709C3DD54983ECE68D694EA19C8D4E9C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5010.Quest_5010_C.OnDlgSelectedOption_709C3DD54983ECE68D694EA19C8D4E9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5010_C::OnDlgSelectedOption_709C3DD54983ECE68D694EA19C8D4E9C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5010_C", "OnDlgSelectedOption_709C3DD54983ECE68D694EA19C8D4E9C");

	Params::Quest_5010_C_OnDlgSelectedOption_709C3DD54983ECE68D694EA19C8D4E9C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5010.Quest_5010_C.OnSuccess_5C177D2849D9BDCFDC28E9A7F94A1B8F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5010_C::OnSuccess_5C177D2849D9BDCFDC28E9A7F94A1B8F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5010_C", "OnSuccess_5C177D2849D9BDCFDC28E9A7F94A1B8F");

	Params::Quest_5010_C_OnSuccess_5C177D2849D9BDCFDC28E9A7F94A1B8F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
