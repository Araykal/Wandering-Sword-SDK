#pragma once



// Package: Quest_28232

#include "Basic.hpp"

#include "Quest_28232_classes.hpp"
#include "Quest_28232_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28232.Quest_28232_C.ExecuteUbergraph_Quest_28232
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28232_C::ExecuteUbergraph_Quest_28232(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28232_C", "ExecuteUbergraph_Quest_28232");

	Params::Quest_28232_C_ExecuteUbergraph_Quest_28232 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28232.Quest_28232_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28232_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28232_C", "HandleFinishing");

	Params::Quest_28232_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28232.Quest_28232_C.OnFinished_22227D634482F0A2C7A0DA8D7B62483C
// (BlueprintCallable, BlueprintEvent)

void UQuest_28232_C::OnFinished_22227D634482F0A2C7A0DA8D7B62483C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28232_C", "OnFinished_22227D634482F0A2C7A0DA8D7B62483C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28232.Quest_28232_C.OnStop_22227D634482F0A2C7A0DA8D7B62483C
// (BlueprintCallable, BlueprintEvent)

void UQuest_28232_C::OnStop_22227D634482F0A2C7A0DA8D7B62483C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28232_C", "OnStop_22227D634482F0A2C7A0DA8D7B62483C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28232.Quest_28232_C.OnDlgClosed_58E17E82449850C2F29F34A481D7431E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28232_C::OnDlgClosed_58E17E82449850C2F29F34A481D7431E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28232_C", "OnDlgClosed_58E17E82449850C2F29F34A481D7431E");

	Params::Quest_28232_C_OnDlgClosed_58E17E82449850C2F29F34A481D7431E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28232.Quest_28232_C.OnDlgSelectedOption_58E17E82449850C2F29F34A481D7431E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28232_C::OnDlgSelectedOption_58E17E82449850C2F29F34A481D7431E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28232_C", "OnDlgSelectedOption_58E17E82449850C2F29F34A481D7431E");

	Params::Quest_28232_C_OnDlgSelectedOption_58E17E82449850C2F29F34A481D7431E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
