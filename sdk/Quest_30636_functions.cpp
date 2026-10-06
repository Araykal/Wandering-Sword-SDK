#pragma once



// Package: Quest_30636

#include "Basic.hpp"

#include "Quest_30636_classes.hpp"
#include "Quest_30636_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30636.Quest_30636_C.ExecuteUbergraph_Quest_30636
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30636_C::ExecuteUbergraph_Quest_30636(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30636_C", "ExecuteUbergraph_Quest_30636");

	Params::Quest_30636_C_ExecuteUbergraph_Quest_30636 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30636.Quest_30636_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30636_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30636_C", "HandleFinishing");

	Params::Quest_30636_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30636.Quest_30636_C.OnFinished_AE6DEA674FB1BCF3E3D3FE84BC7E544E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30636_C::OnFinished_AE6DEA674FB1BCF3E3D3FE84BC7E544E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30636_C", "OnFinished_AE6DEA674FB1BCF3E3D3FE84BC7E544E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30636.Quest_30636_C.OnStop_AE6DEA674FB1BCF3E3D3FE84BC7E544E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30636_C::OnStop_AE6DEA674FB1BCF3E3D3FE84BC7E544E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30636_C", "OnStop_AE6DEA674FB1BCF3E3D3FE84BC7E544E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30636.Quest_30636_C.OnDlgClosed_0BE5044947AAC6650C7539A56B7D6CE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30636_C::OnDlgClosed_0BE5044947AAC6650C7539A56B7D6CE1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30636_C", "OnDlgClosed_0BE5044947AAC6650C7539A56B7D6CE1");

	Params::Quest_30636_C_OnDlgClosed_0BE5044947AAC6650C7539A56B7D6CE1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30636.Quest_30636_C.OnDlgSelectedOption_0BE5044947AAC6650C7539A56B7D6CE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30636_C::OnDlgSelectedOption_0BE5044947AAC6650C7539A56B7D6CE1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30636_C", "OnDlgSelectedOption_0BE5044947AAC6650C7539A56B7D6CE1");

	Params::Quest_30636_C_OnDlgSelectedOption_0BE5044947AAC6650C7539A56B7D6CE1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
