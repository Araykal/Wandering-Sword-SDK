#pragma once



// Package: Quest_12269

#include "Basic.hpp"

#include "Quest_12269_classes.hpp"
#include "Quest_12269_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12269.Quest_12269_C.ExecuteUbergraph_Quest_12269
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12269_C::ExecuteUbergraph_Quest_12269(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12269_C", "ExecuteUbergraph_Quest_12269");

	Params::Quest_12269_C_ExecuteUbergraph_Quest_12269 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12269.Quest_12269_C.好感度
// (BlueprintCallable, BlueprintEvent)

void UQuest_12269_C::好感度()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12269_C", "好感度");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12269.Quest_12269_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12269_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12269_C", "HandleFinishing");

	Params::Quest_12269_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12269.Quest_12269_C.OnFinished_F812EDCA471BD2217B9C118D7FF25CC5
// (BlueprintCallable, BlueprintEvent)

void UQuest_12269_C::OnFinished_F812EDCA471BD2217B9C118D7FF25CC5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12269_C", "OnFinished_F812EDCA471BD2217B9C118D7FF25CC5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12269.Quest_12269_C.OnStop_F812EDCA471BD2217B9C118D7FF25CC5
// (BlueprintCallable, BlueprintEvent)

void UQuest_12269_C::OnStop_F812EDCA471BD2217B9C118D7FF25CC5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12269_C", "OnStop_F812EDCA471BD2217B9C118D7FF25CC5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12269.Quest_12269_C.OnDlgClosed_29C600E24C3B5838649A5BA89C5DF516
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12269_C::OnDlgClosed_29C600E24C3B5838649A5BA89C5DF516(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12269_C", "OnDlgClosed_29C600E24C3B5838649A5BA89C5DF516");

	Params::Quest_12269_C_OnDlgClosed_29C600E24C3B5838649A5BA89C5DF516 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12269.Quest_12269_C.OnDlgSelectedOption_29C600E24C3B5838649A5BA89C5DF516
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12269_C::OnDlgSelectedOption_29C600E24C3B5838649A5BA89C5DF516(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12269_C", "OnDlgSelectedOption_29C600E24C3B5838649A5BA89C5DF516");

	Params::Quest_12269_C_OnDlgSelectedOption_29C600E24C3B5838649A5BA89C5DF516 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
