#pragma once



// Package: Quest_5730

#include "Basic.hpp"

#include "Quest_5730_classes.hpp"
#include "Quest_5730_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5730.Quest_5730_C.ExecuteUbergraph_Quest_5730
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5730_C::ExecuteUbergraph_Quest_5730(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5730_C", "ExecuteUbergraph_Quest_5730");

	Params::Quest_5730_C_ExecuteUbergraph_Quest_5730 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5730.Quest_5730_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5730_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5730_C", "HandleFinishing");

	Params::Quest_5730_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5730.Quest_5730_C.OnSuccess_FA1D4B0448DCE84D133FAB9CAE69BC67
// (BlueprintCallable, BlueprintEvent)

void UQuest_5730_C::OnSuccess_FA1D4B0448DCE84D133FAB9CAE69BC67()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5730_C", "OnSuccess_FA1D4B0448DCE84D133FAB9CAE69BC67");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5730.Quest_5730_C.OnFinished_EC17D67D4A804D237F5219B219C5940E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5730_C::OnFinished_EC17D67D4A804D237F5219B219C5940E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5730_C", "OnFinished_EC17D67D4A804D237F5219B219C5940E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5730.Quest_5730_C.OnStop_EC17D67D4A804D237F5219B219C5940E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5730_C::OnStop_EC17D67D4A804D237F5219B219C5940E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5730_C", "OnStop_EC17D67D4A804D237F5219B219C5940E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5730.Quest_5730_C.OnDlgClosed_3FED27704048A73D24A874BD56016807
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5730_C::OnDlgClosed_3FED27704048A73D24A874BD56016807(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5730_C", "OnDlgClosed_3FED27704048A73D24A874BD56016807");

	Params::Quest_5730_C_OnDlgClosed_3FED27704048A73D24A874BD56016807 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5730.Quest_5730_C.OnDlgSelectedOption_3FED27704048A73D24A874BD56016807
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5730_C::OnDlgSelectedOption_3FED27704048A73D24A874BD56016807(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5730_C", "OnDlgSelectedOption_3FED27704048A73D24A874BD56016807");

	Params::Quest_5730_C_OnDlgSelectedOption_3FED27704048A73D24A874BD56016807 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
