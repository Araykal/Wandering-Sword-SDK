#pragma once



// Package: Quest_16111

#include "Basic.hpp"

#include "Quest_16111_classes.hpp"
#include "Quest_16111_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16111.Quest_16111_C.ExecuteUbergraph_Quest_16111
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16111_C::ExecuteUbergraph_Quest_16111(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16111_C", "ExecuteUbergraph_Quest_16111");

	Params::Quest_16111_C_ExecuteUbergraph_Quest_16111 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16111.Quest_16111_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16111_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16111_C", "HandleFinishing");

	Params::Quest_16111_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16111.Quest_16111_C.OnFinished_717DE160493F61BCEC58619CEE69D3A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_16111_C::OnFinished_717DE160493F61BCEC58619CEE69D3A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16111_C", "OnFinished_717DE160493F61BCEC58619CEE69D3A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16111.Quest_16111_C.OnStop_717DE160493F61BCEC58619CEE69D3A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_16111_C::OnStop_717DE160493F61BCEC58619CEE69D3A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16111_C", "OnStop_717DE160493F61BCEC58619CEE69D3A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16111.Quest_16111_C.OnDlgClosed_C502EF5C4473FBA55DF62EA922BDCBDA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16111_C::OnDlgClosed_C502EF5C4473FBA55DF62EA922BDCBDA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16111_C", "OnDlgClosed_C502EF5C4473FBA55DF62EA922BDCBDA");

	Params::Quest_16111_C_OnDlgClosed_C502EF5C4473FBA55DF62EA922BDCBDA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16111.Quest_16111_C.OnDlgSelectedOption_C502EF5C4473FBA55DF62EA922BDCBDA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16111_C::OnDlgSelectedOption_C502EF5C4473FBA55DF62EA922BDCBDA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16111_C", "OnDlgSelectedOption_C502EF5C4473FBA55DF62EA922BDCBDA");

	Params::Quest_16111_C_OnDlgSelectedOption_C502EF5C4473FBA55DF62EA922BDCBDA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
