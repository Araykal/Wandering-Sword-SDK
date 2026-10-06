#pragma once



// Package: Quest_12389

#include "Basic.hpp"

#include "Quest_12389_classes.hpp"
#include "Quest_12389_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12389.Quest_12389_C.ExecuteUbergraph_Quest_12389
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12389_C::ExecuteUbergraph_Quest_12389(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12389_C", "ExecuteUbergraph_Quest_12389");

	Params::Quest_12389_C_ExecuteUbergraph_Quest_12389 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12389.Quest_12389_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12389_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12389_C", "HandleFinishing");

	Params::Quest_12389_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12389.Quest_12389_C.OnFinished_D3940FED422C99FFEEB9E9980F3D2A3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12389_C::OnFinished_D3940FED422C99FFEEB9E9980F3D2A3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12389_C", "OnFinished_D3940FED422C99FFEEB9E9980F3D2A3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12389.Quest_12389_C.OnStop_D3940FED422C99FFEEB9E9980F3D2A3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12389_C::OnStop_D3940FED422C99FFEEB9E9980F3D2A3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12389_C", "OnStop_D3940FED422C99FFEEB9E9980F3D2A3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12389.Quest_12389_C.OnDlgClosed_8C5B13CD4DEA445DD1B689837AD9D54C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12389_C::OnDlgClosed_8C5B13CD4DEA445DD1B689837AD9D54C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12389_C", "OnDlgClosed_8C5B13CD4DEA445DD1B689837AD9D54C");

	Params::Quest_12389_C_OnDlgClosed_8C5B13CD4DEA445DD1B689837AD9D54C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12389.Quest_12389_C.OnDlgSelectedOption_8C5B13CD4DEA445DD1B689837AD9D54C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12389_C::OnDlgSelectedOption_8C5B13CD4DEA445DD1B689837AD9D54C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12389_C", "OnDlgSelectedOption_8C5B13CD4DEA445DD1B689837AD9D54C");

	Params::Quest_12389_C_OnDlgSelectedOption_8C5B13CD4DEA445DD1B689837AD9D54C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
