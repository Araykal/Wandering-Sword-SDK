#pragma once



// Package: Quest_28925

#include "Basic.hpp"

#include "Quest_28925_classes.hpp"
#include "Quest_28925_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28925.Quest_28925_C.ExecuteUbergraph_Quest_28925
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28925_C::ExecuteUbergraph_Quest_28925(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28925_C", "ExecuteUbergraph_Quest_28925");

	Params::Quest_28925_C_ExecuteUbergraph_Quest_28925 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28925.Quest_28925_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28925_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28925_C", "HandleFinishing");

	Params::Quest_28925_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28925.Quest_28925_C.OnSuccess_E5CDB0F5417D73DC4C233FAEA074A8B0
// (BlueprintCallable, BlueprintEvent)

void UQuest_28925_C::OnSuccess_E5CDB0F5417D73DC4C233FAEA074A8B0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28925_C", "OnSuccess_E5CDB0F5417D73DC4C233FAEA074A8B0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28925.Quest_28925_C.OnFinished_5286B64E43D3D63D6DECC38AF96B54F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_28925_C::OnFinished_5286B64E43D3D63D6DECC38AF96B54F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28925_C", "OnFinished_5286B64E43D3D63D6DECC38AF96B54F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28925.Quest_28925_C.OnStop_5286B64E43D3D63D6DECC38AF96B54F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_28925_C::OnStop_5286B64E43D3D63D6DECC38AF96B54F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28925_C", "OnStop_5286B64E43D3D63D6DECC38AF96B54F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28925.Quest_28925_C.OnDlgClosed_121B6F554CC3A0F648D47881BF9F5014
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28925_C::OnDlgClosed_121B6F554CC3A0F648D47881BF9F5014(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28925_C", "OnDlgClosed_121B6F554CC3A0F648D47881BF9F5014");

	Params::Quest_28925_C_OnDlgClosed_121B6F554CC3A0F648D47881BF9F5014 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28925.Quest_28925_C.OnDlgSelectedOption_121B6F554CC3A0F648D47881BF9F5014
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28925_C::OnDlgSelectedOption_121B6F554CC3A0F648D47881BF9F5014(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28925_C", "OnDlgSelectedOption_121B6F554CC3A0F648D47881BF9F5014");

	Params::Quest_28925_C_OnDlgSelectedOption_121B6F554CC3A0F648D47881BF9F5014 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
