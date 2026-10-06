#pragma once



// Package: Quest_5864

#include "Basic.hpp"

#include "Quest_5864_classes.hpp"
#include "Quest_5864_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5864.Quest_5864_C.ExecuteUbergraph_Quest_5864
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5864_C::ExecuteUbergraph_Quest_5864(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5864_C", "ExecuteUbergraph_Quest_5864");

	Params::Quest_5864_C_ExecuteUbergraph_Quest_5864 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5864.Quest_5864_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5864_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5864_C", "HandleFinishing");

	Params::Quest_5864_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5864.Quest_5864_C.OnFinished_16D5BAAF4E920279340CB687E2929640
// (BlueprintCallable, BlueprintEvent)

void UQuest_5864_C::OnFinished_16D5BAAF4E920279340CB687E2929640()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5864_C", "OnFinished_16D5BAAF4E920279340CB687E2929640");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5864.Quest_5864_C.OnStop_16D5BAAF4E920279340CB687E2929640
// (BlueprintCallable, BlueprintEvent)

void UQuest_5864_C::OnStop_16D5BAAF4E920279340CB687E2929640()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5864_C", "OnStop_16D5BAAF4E920279340CB687E2929640");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5864.Quest_5864_C.OnDlgClosed_D46693FC4915261E13B8F9BD7B98F28C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5864_C::OnDlgClosed_D46693FC4915261E13B8F9BD7B98F28C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5864_C", "OnDlgClosed_D46693FC4915261E13B8F9BD7B98F28C");

	Params::Quest_5864_C_OnDlgClosed_D46693FC4915261E13B8F9BD7B98F28C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5864.Quest_5864_C.OnDlgSelectedOption_D46693FC4915261E13B8F9BD7B98F28C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5864_C::OnDlgSelectedOption_D46693FC4915261E13B8F9BD7B98F28C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5864_C", "OnDlgSelectedOption_D46693FC4915261E13B8F9BD7B98F28C");

	Params::Quest_5864_C_OnDlgSelectedOption_D46693FC4915261E13B8F9BD7B98F28C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
