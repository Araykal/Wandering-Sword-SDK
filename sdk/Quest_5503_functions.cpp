#pragma once



// Package: Quest_5503

#include "Basic.hpp"

#include "Quest_5503_classes.hpp"
#include "Quest_5503_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5503.Quest_5503_C.ExecuteUbergraph_Quest_5503
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5503_C::ExecuteUbergraph_Quest_5503(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "ExecuteUbergraph_Quest_5503");

	Params::Quest_5503_C_ExecuteUbergraph_Quest_5503 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5503.Quest_5503_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5503_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "HandleFinishing");

	Params::Quest_5503_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5503.Quest_5503_C.OnSuccess_6E76F5274F89DFF59EACE48CA6DC21DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5503_C::OnSuccess_6E76F5274F89DFF59EACE48CA6DC21DF(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnSuccess_6E76F5274F89DFF59EACE48CA6DC21DF");

	Params::Quest_5503_C_OnSuccess_6E76F5274F89DFF59EACE48CA6DC21DF Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5503.Quest_5503_C.OnSuccess_E009DDAA4E34B6CBC5E0059C58B3A09F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5503_C::OnSuccess_E009DDAA4E34B6CBC5E0059C58B3A09F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnSuccess_E009DDAA4E34B6CBC5E0059C58B3A09F");

	Params::Quest_5503_C_OnSuccess_E009DDAA4E34B6CBC5E0059C58B3A09F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5503.Quest_5503_C.OnSuccess_1A357CDE47BD5E9A03BB8A85ABFA989D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5503_C::OnSuccess_1A357CDE47BD5E9A03BB8A85ABFA989D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnSuccess_1A357CDE47BD5E9A03BB8A85ABFA989D");

	Params::Quest_5503_C_OnSuccess_1A357CDE47BD5E9A03BB8A85ABFA989D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5503.Quest_5503_C.OnFinished_6F85E33549A048B55E54459EC57D22F5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5503_C::OnFinished_6F85E33549A048B55E54459EC57D22F5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnFinished_6F85E33549A048B55E54459EC57D22F5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5503.Quest_5503_C.OnStop_6F85E33549A048B55E54459EC57D22F5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5503_C::OnStop_6F85E33549A048B55E54459EC57D22F5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnStop_6F85E33549A048B55E54459EC57D22F5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5503.Quest_5503_C.OnDlgClosed_1524807943C7A13B1083C6B2B1BD60D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5503_C::OnDlgClosed_1524807943C7A13B1083C6B2B1BD60D1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnDlgClosed_1524807943C7A13B1083C6B2B1BD60D1");

	Params::Quest_5503_C_OnDlgClosed_1524807943C7A13B1083C6B2B1BD60D1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5503.Quest_5503_C.OnDlgSelectedOption_1524807943C7A13B1083C6B2B1BD60D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5503_C::OnDlgSelectedOption_1524807943C7A13B1083C6B2B1BD60D1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnDlgSelectedOption_1524807943C7A13B1083C6B2B1BD60D1");

	Params::Quest_5503_C_OnDlgSelectedOption_1524807943C7A13B1083C6B2B1BD60D1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5503.Quest_5503_C.OnSuccess_FCE2F5C5417634BB6F03FEA5D1E9B802
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5503_C::OnSuccess_FCE2F5C5417634BB6F03FEA5D1E9B802(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5503_C", "OnSuccess_FCE2F5C5417634BB6F03FEA5D1E9B802");

	Params::Quest_5503_C_OnSuccess_FCE2F5C5417634BB6F03FEA5D1E9B802 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
