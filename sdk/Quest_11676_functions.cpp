#pragma once



// Package: Quest_11676

#include "Basic.hpp"

#include "Quest_11676_classes.hpp"
#include "Quest_11676_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11676.Quest_11676_C.ExecuteUbergraph_Quest_11676
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11676_C::ExecuteUbergraph_Quest_11676(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11676_C", "ExecuteUbergraph_Quest_11676");

	Params::Quest_11676_C_ExecuteUbergraph_Quest_11676 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11676.Quest_11676_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11676_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11676_C", "HandleFinishing");

	Params::Quest_11676_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11676.Quest_11676_C.OnFinished_44C0AC96454A3C25138F869AE0F08EB8
// (BlueprintCallable, BlueprintEvent)

void UQuest_11676_C::OnFinished_44C0AC96454A3C25138F869AE0F08EB8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11676_C", "OnFinished_44C0AC96454A3C25138F869AE0F08EB8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11676.Quest_11676_C.OnStop_44C0AC96454A3C25138F869AE0F08EB8
// (BlueprintCallable, BlueprintEvent)

void UQuest_11676_C::OnStop_44C0AC96454A3C25138F869AE0F08EB8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11676_C", "OnStop_44C0AC96454A3C25138F869AE0F08EB8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11676.Quest_11676_C.OnDlgClosed_7B771B7D437DF8870FE65E8533FB144C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11676_C::OnDlgClosed_7B771B7D437DF8870FE65E8533FB144C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11676_C", "OnDlgClosed_7B771B7D437DF8870FE65E8533FB144C");

	Params::Quest_11676_C_OnDlgClosed_7B771B7D437DF8870FE65E8533FB144C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11676.Quest_11676_C.OnDlgSelectedOption_7B771B7D437DF8870FE65E8533FB144C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11676_C::OnDlgSelectedOption_7B771B7D437DF8870FE65E8533FB144C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11676_C", "OnDlgSelectedOption_7B771B7D437DF8870FE65E8533FB144C");

	Params::Quest_11676_C_OnDlgSelectedOption_7B771B7D437DF8870FE65E8533FB144C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
