#pragma once



// Package: Quest_7056

#include "Basic.hpp"

#include "Quest_7056_classes.hpp"
#include "Quest_7056_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7056.Quest_7056_C.ExecuteUbergraph_Quest_7056
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7056_C::ExecuteUbergraph_Quest_7056(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7056_C", "ExecuteUbergraph_Quest_7056");

	Params::Quest_7056_C_ExecuteUbergraph_Quest_7056 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7056.Quest_7056_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7056_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7056_C", "HandleFinishing");

	Params::Quest_7056_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7056.Quest_7056_C.OnFinished_3BD985414044DEDB9A161DB4705925B2
// (BlueprintCallable, BlueprintEvent)

void UQuest_7056_C::OnFinished_3BD985414044DEDB9A161DB4705925B2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7056_C", "OnFinished_3BD985414044DEDB9A161DB4705925B2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7056.Quest_7056_C.OnStop_3BD985414044DEDB9A161DB4705925B2
// (BlueprintCallable, BlueprintEvent)

void UQuest_7056_C::OnStop_3BD985414044DEDB9A161DB4705925B2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7056_C", "OnStop_3BD985414044DEDB9A161DB4705925B2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7056.Quest_7056_C.OnDlgClosed_0CDBA1CA48163EBB8C5530BC6A5B4A73
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7056_C::OnDlgClosed_0CDBA1CA48163EBB8C5530BC6A5B4A73(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7056_C", "OnDlgClosed_0CDBA1CA48163EBB8C5530BC6A5B4A73");

	Params::Quest_7056_C_OnDlgClosed_0CDBA1CA48163EBB8C5530BC6A5B4A73 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7056.Quest_7056_C.OnDlgSelectedOption_0CDBA1CA48163EBB8C5530BC6A5B4A73
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7056_C::OnDlgSelectedOption_0CDBA1CA48163EBB8C5530BC6A5B4A73(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7056_C", "OnDlgSelectedOption_0CDBA1CA48163EBB8C5530BC6A5B4A73");

	Params::Quest_7056_C_OnDlgSelectedOption_0CDBA1CA48163EBB8C5530BC6A5B4A73 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
