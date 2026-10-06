#pragma once



// Package: Quest_5536

#include "Basic.hpp"

#include "Quest_5536_classes.hpp"
#include "Quest_5536_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5536.Quest_5536_C.ExecuteUbergraph_Quest_5536
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5536_C::ExecuteUbergraph_Quest_5536(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5536_C", "ExecuteUbergraph_Quest_5536");

	Params::Quest_5536_C_ExecuteUbergraph_Quest_5536 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5536.Quest_5536_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5536_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5536_C", "HandleFinishing");

	Params::Quest_5536_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5536.Quest_5536_C.OnFinished_78083684484F8552AB98248F898BE273
// (BlueprintCallable, BlueprintEvent)

void UQuest_5536_C::OnFinished_78083684484F8552AB98248F898BE273()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5536_C", "OnFinished_78083684484F8552AB98248F898BE273");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5536.Quest_5536_C.OnStop_78083684484F8552AB98248F898BE273
// (BlueprintCallable, BlueprintEvent)

void UQuest_5536_C::OnStop_78083684484F8552AB98248F898BE273()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5536_C", "OnStop_78083684484F8552AB98248F898BE273");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5536.Quest_5536_C.OnDlgClosed_E637A0E14461BC91AE6437889E324E14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5536_C::OnDlgClosed_E637A0E14461BC91AE6437889E324E14(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5536_C", "OnDlgClosed_E637A0E14461BC91AE6437889E324E14");

	Params::Quest_5536_C_OnDlgClosed_E637A0E14461BC91AE6437889E324E14 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5536.Quest_5536_C.OnDlgSelectedOption_E637A0E14461BC91AE6437889E324E14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5536_C::OnDlgSelectedOption_E637A0E14461BC91AE6437889E324E14(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5536_C", "OnDlgSelectedOption_E637A0E14461BC91AE6437889E324E14");

	Params::Quest_5536_C_OnDlgSelectedOption_E637A0E14461BC91AE6437889E324E14 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
