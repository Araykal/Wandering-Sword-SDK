#pragma once



// Package: Quest_5863

#include "Basic.hpp"

#include "Quest_5863_classes.hpp"
#include "Quest_5863_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5863.Quest_5863_C.ExecuteUbergraph_Quest_5863
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5863_C::ExecuteUbergraph_Quest_5863(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5863_C", "ExecuteUbergraph_Quest_5863");

	Params::Quest_5863_C_ExecuteUbergraph_Quest_5863 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5863.Quest_5863_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5863_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5863_C", "HandleFinishing");

	Params::Quest_5863_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5863.Quest_5863_C.OnFinished_5BC91903446EE08458A785A3041B15AC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5863_C::OnFinished_5BC91903446EE08458A785A3041B15AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5863_C", "OnFinished_5BC91903446EE08458A785A3041B15AC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5863.Quest_5863_C.OnStop_5BC91903446EE08458A785A3041B15AC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5863_C::OnStop_5BC91903446EE08458A785A3041B15AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5863_C", "OnStop_5BC91903446EE08458A785A3041B15AC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5863.Quest_5863_C.OnDlgClosed_83F957564E545F0AC39A7594FE2E6991
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5863_C::OnDlgClosed_83F957564E545F0AC39A7594FE2E6991(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5863_C", "OnDlgClosed_83F957564E545F0AC39A7594FE2E6991");

	Params::Quest_5863_C_OnDlgClosed_83F957564E545F0AC39A7594FE2E6991 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5863.Quest_5863_C.OnDlgSelectedOption_83F957564E545F0AC39A7594FE2E6991
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5863_C::OnDlgSelectedOption_83F957564E545F0AC39A7594FE2E6991(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5863_C", "OnDlgSelectedOption_83F957564E545F0AC39A7594FE2E6991");

	Params::Quest_5863_C_OnDlgSelectedOption_83F957564E545F0AC39A7594FE2E6991 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
