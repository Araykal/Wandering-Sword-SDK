#pragma once



// Package: Quest_5252

#include "Basic.hpp"

#include "Quest_5252_classes.hpp"
#include "Quest_5252_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5252.Quest_5252_C.ExecuteUbergraph_Quest_5252
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5252_C::ExecuteUbergraph_Quest_5252(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5252_C", "ExecuteUbergraph_Quest_5252");

	Params::Quest_5252_C_ExecuteUbergraph_Quest_5252 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5252.Quest_5252_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5252_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5252_C", "HandleFinishing");

	Params::Quest_5252_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5252.Quest_5252_C.OnFinished_EC16A80444F3C2E3203F7695CD6D3147
// (BlueprintCallable, BlueprintEvent)

void UQuest_5252_C::OnFinished_EC16A80444F3C2E3203F7695CD6D3147()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5252_C", "OnFinished_EC16A80444F3C2E3203F7695CD6D3147");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5252.Quest_5252_C.OnStop_EC16A80444F3C2E3203F7695CD6D3147
// (BlueprintCallable, BlueprintEvent)

void UQuest_5252_C::OnStop_EC16A80444F3C2E3203F7695CD6D3147()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5252_C", "OnStop_EC16A80444F3C2E3203F7695CD6D3147");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5252.Quest_5252_C.OnDlgClosed_313A3EB6434CB1608A4758936A767C0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5252_C::OnDlgClosed_313A3EB6434CB1608A4758936A767C0C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5252_C", "OnDlgClosed_313A3EB6434CB1608A4758936A767C0C");

	Params::Quest_5252_C_OnDlgClosed_313A3EB6434CB1608A4758936A767C0C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5252.Quest_5252_C.OnDlgSelectedOption_313A3EB6434CB1608A4758936A767C0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5252_C::OnDlgSelectedOption_313A3EB6434CB1608A4758936A767C0C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5252_C", "OnDlgSelectedOption_313A3EB6434CB1608A4758936A767C0C");

	Params::Quest_5252_C_OnDlgSelectedOption_313A3EB6434CB1608A4758936A767C0C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5252.Quest_5252_C.OnSuccess_7A4B7FD245172120C0AB489C0576F759
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5252_C::OnSuccess_7A4B7FD245172120C0AB489C0576F759(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5252_C", "OnSuccess_7A4B7FD245172120C0AB489C0576F759");

	Params::Quest_5252_C_OnSuccess_7A4B7FD245172120C0AB489C0576F759 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
