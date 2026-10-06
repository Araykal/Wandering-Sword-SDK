#pragma once



// Package: Quest_5802

#include "Basic.hpp"

#include "Quest_5802_classes.hpp"
#include "Quest_5802_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5802.Quest_5802_C.ExecuteUbergraph_Quest_5802
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5802_C::ExecuteUbergraph_Quest_5802(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5802_C", "ExecuteUbergraph_Quest_5802");

	Params::Quest_5802_C_ExecuteUbergraph_Quest_5802 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5802.Quest_5802_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5802_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5802_C", "HandleFinishing");

	Params::Quest_5802_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5802.Quest_5802_C.OnSuccess_DF8B224B400FA983C2207D86713E23AD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5802_C::OnSuccess_DF8B224B400FA983C2207D86713E23AD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5802_C", "OnSuccess_DF8B224B400FA983C2207D86713E23AD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5802.Quest_5802_C.OnFinished_274A968B4E51656633AB3FAAA59FCAD2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5802_C::OnFinished_274A968B4E51656633AB3FAAA59FCAD2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5802_C", "OnFinished_274A968B4E51656633AB3FAAA59FCAD2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5802.Quest_5802_C.OnStop_274A968B4E51656633AB3FAAA59FCAD2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5802_C::OnStop_274A968B4E51656633AB3FAAA59FCAD2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5802_C", "OnStop_274A968B4E51656633AB3FAAA59FCAD2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5802.Quest_5802_C.OnDlgClosed_3430D4A24C76E761578F17829A0F63C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5802_C::OnDlgClosed_3430D4A24C76E761578F17829A0F63C0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5802_C", "OnDlgClosed_3430D4A24C76E761578F17829A0F63C0");

	Params::Quest_5802_C_OnDlgClosed_3430D4A24C76E761578F17829A0F63C0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5802.Quest_5802_C.OnDlgSelectedOption_3430D4A24C76E761578F17829A0F63C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5802_C::OnDlgSelectedOption_3430D4A24C76E761578F17829A0F63C0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5802_C", "OnDlgSelectedOption_3430D4A24C76E761578F17829A0F63C0");

	Params::Quest_5802_C_OnDlgSelectedOption_3430D4A24C76E761578F17829A0F63C0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
