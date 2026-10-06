#pragma once



// Package: Quest_5303

#include "Basic.hpp"

#include "Quest_5303_classes.hpp"
#include "Quest_5303_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5303.Quest_5303_C.ExecuteUbergraph_Quest_5303
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5303_C::ExecuteUbergraph_Quest_5303(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5303_C", "ExecuteUbergraph_Quest_5303");

	Params::Quest_5303_C_ExecuteUbergraph_Quest_5303 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5303.Quest_5303_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5303_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5303_C", "HandleFinishing");

	Params::Quest_5303_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5303.Quest_5303_C.OnSuccess_8BC0CA2345EE427F97E3759FD81866EF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5303_C::OnSuccess_8BC0CA2345EE427F97E3759FD81866EF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5303_C", "OnSuccess_8BC0CA2345EE427F97E3759FD81866EF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5303.Quest_5303_C.OnFinished_A56882844967A633D23087AA98FF20B1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5303_C::OnFinished_A56882844967A633D23087AA98FF20B1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5303_C", "OnFinished_A56882844967A633D23087AA98FF20B1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5303.Quest_5303_C.OnStop_A56882844967A633D23087AA98FF20B1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5303_C::OnStop_A56882844967A633D23087AA98FF20B1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5303_C", "OnStop_A56882844967A633D23087AA98FF20B1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5303.Quest_5303_C.OnDlgClosed_72CB48A94C554CD49B8FA8A5B6BEB664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5303_C::OnDlgClosed_72CB48A94C554CD49B8FA8A5B6BEB664(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5303_C", "OnDlgClosed_72CB48A94C554CD49B8FA8A5B6BEB664");

	Params::Quest_5303_C_OnDlgClosed_72CB48A94C554CD49B8FA8A5B6BEB664 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5303.Quest_5303_C.OnDlgSelectedOption_72CB48A94C554CD49B8FA8A5B6BEB664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5303_C::OnDlgSelectedOption_72CB48A94C554CD49B8FA8A5B6BEB664(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5303_C", "OnDlgSelectedOption_72CB48A94C554CD49B8FA8A5B6BEB664");

	Params::Quest_5303_C_OnDlgSelectedOption_72CB48A94C554CD49B8FA8A5B6BEB664 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
