#pragma once



// Package: Quest_11102

#include "Basic.hpp"

#include "Quest_11102_classes.hpp"
#include "Quest_11102_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11102.Quest_11102_C.ExecuteUbergraph_Quest_11102
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11102_C::ExecuteUbergraph_Quest_11102(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11102_C", "ExecuteUbergraph_Quest_11102");

	Params::Quest_11102_C_ExecuteUbergraph_Quest_11102 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11102.Quest_11102_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11102_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11102_C", "HandleFinishing");

	Params::Quest_11102_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11102.Quest_11102_C.OnFinished_3D47024041468C1BD3D2929B91437FA3
// (BlueprintCallable, BlueprintEvent)

void UQuest_11102_C::OnFinished_3D47024041468C1BD3D2929B91437FA3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11102_C", "OnFinished_3D47024041468C1BD3D2929B91437FA3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11102.Quest_11102_C.OnStop_3D47024041468C1BD3D2929B91437FA3
// (BlueprintCallable, BlueprintEvent)

void UQuest_11102_C::OnStop_3D47024041468C1BD3D2929B91437FA3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11102_C", "OnStop_3D47024041468C1BD3D2929B91437FA3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11102.Quest_11102_C.OnDlgClosed_2ABCD015476278EE9676A7AE20701140
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11102_C::OnDlgClosed_2ABCD015476278EE9676A7AE20701140(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11102_C", "OnDlgClosed_2ABCD015476278EE9676A7AE20701140");

	Params::Quest_11102_C_OnDlgClosed_2ABCD015476278EE9676A7AE20701140 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11102.Quest_11102_C.OnDlgSelectedOption_2ABCD015476278EE9676A7AE20701140
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11102_C::OnDlgSelectedOption_2ABCD015476278EE9676A7AE20701140(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11102_C", "OnDlgSelectedOption_2ABCD015476278EE9676A7AE20701140");

	Params::Quest_11102_C_OnDlgSelectedOption_2ABCD015476278EE9676A7AE20701140 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11102.Quest_11102_C.OnSuccess_8D4547D9474D90684B0C8DA6084ECD4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11102_C::OnSuccess_8D4547D9474D90684B0C8DA6084ECD4F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11102_C", "OnSuccess_8D4547D9474D90684B0C8DA6084ECD4F");

	Params::Quest_11102_C_OnSuccess_8D4547D9474D90684B0C8DA6084ECD4F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
