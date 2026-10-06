#pragma once



// Package: Quest_11849

#include "Basic.hpp"

#include "Quest_11849_classes.hpp"
#include "Quest_11849_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11849.Quest_11849_C.ExecuteUbergraph_Quest_11849
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11849_C::ExecuteUbergraph_Quest_11849(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11849_C", "ExecuteUbergraph_Quest_11849");

	Params::Quest_11849_C_ExecuteUbergraph_Quest_11849 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11849.Quest_11849_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11849_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11849_C", "HandleFinishing");

	Params::Quest_11849_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11849.Quest_11849_C.OnFinished_E3D7DD5546AF12B7F9635DA12C79F06D
// (BlueprintCallable, BlueprintEvent)

void UQuest_11849_C::OnFinished_E3D7DD5546AF12B7F9635DA12C79F06D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11849_C", "OnFinished_E3D7DD5546AF12B7F9635DA12C79F06D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11849.Quest_11849_C.OnStop_E3D7DD5546AF12B7F9635DA12C79F06D
// (BlueprintCallable, BlueprintEvent)

void UQuest_11849_C::OnStop_E3D7DD5546AF12B7F9635DA12C79F06D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11849_C", "OnStop_E3D7DD5546AF12B7F9635DA12C79F06D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11849.Quest_11849_C.OnDlgClosed_3B141B74432269B6D5ED8C92F6F25172
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11849_C::OnDlgClosed_3B141B74432269B6D5ED8C92F6F25172(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11849_C", "OnDlgClosed_3B141B74432269B6D5ED8C92F6F25172");

	Params::Quest_11849_C_OnDlgClosed_3B141B74432269B6D5ED8C92F6F25172 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11849.Quest_11849_C.OnDlgSelectedOption_3B141B74432269B6D5ED8C92F6F25172
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11849_C::OnDlgSelectedOption_3B141B74432269B6D5ED8C92F6F25172(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11849_C", "OnDlgSelectedOption_3B141B74432269B6D5ED8C92F6F25172");

	Params::Quest_11849_C_OnDlgSelectedOption_3B141B74432269B6D5ED8C92F6F25172 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
