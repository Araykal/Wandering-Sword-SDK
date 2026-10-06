#pragma once



// Package: Quest_28252

#include "Basic.hpp"

#include "Quest_28252_classes.hpp"
#include "Quest_28252_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28252.Quest_28252_C.ExecuteUbergraph_Quest_28252
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28252_C::ExecuteUbergraph_Quest_28252(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28252_C", "ExecuteUbergraph_Quest_28252");

	Params::Quest_28252_C_ExecuteUbergraph_Quest_28252 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28252.Quest_28252_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28252_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28252_C", "HandleFinishing");

	Params::Quest_28252_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28252.Quest_28252_C.OnFinished_8AEB033F4B57C9E836307EADB19C7F48
// (BlueprintCallable, BlueprintEvent)

void UQuest_28252_C::OnFinished_8AEB033F4B57C9E836307EADB19C7F48()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28252_C", "OnFinished_8AEB033F4B57C9E836307EADB19C7F48");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28252.Quest_28252_C.OnStop_8AEB033F4B57C9E836307EADB19C7F48
// (BlueprintCallable, BlueprintEvent)

void UQuest_28252_C::OnStop_8AEB033F4B57C9E836307EADB19C7F48()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28252_C", "OnStop_8AEB033F4B57C9E836307EADB19C7F48");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28252.Quest_28252_C.OnDlgClosed_A4E7F62A4C66171F75E6C1B18BADD1A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28252_C::OnDlgClosed_A4E7F62A4C66171F75E6C1B18BADD1A6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28252_C", "OnDlgClosed_A4E7F62A4C66171F75E6C1B18BADD1A6");

	Params::Quest_28252_C_OnDlgClosed_A4E7F62A4C66171F75E6C1B18BADD1A6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28252.Quest_28252_C.OnDlgSelectedOption_A4E7F62A4C66171F75E6C1B18BADD1A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28252_C::OnDlgSelectedOption_A4E7F62A4C66171F75E6C1B18BADD1A6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28252_C", "OnDlgSelectedOption_A4E7F62A4C66171F75E6C1B18BADD1A6");

	Params::Quest_28252_C_OnDlgSelectedOption_A4E7F62A4C66171F75E6C1B18BADD1A6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
