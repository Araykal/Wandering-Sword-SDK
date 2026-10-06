#pragma once



// Package: Quest_5806

#include "Basic.hpp"

#include "Quest_5806_classes.hpp"
#include "Quest_5806_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5806.Quest_5806_C.ExecuteUbergraph_Quest_5806
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5806_C::ExecuteUbergraph_Quest_5806(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "ExecuteUbergraph_Quest_5806");

	Params::Quest_5806_C_ExecuteUbergraph_Quest_5806 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5806.Quest_5806_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5806_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "HandleFinishing");

	Params::Quest_5806_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5806.Quest_5806_C.OnSuccess_D5413C1448A42F7DAC2B81A04A82A06D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5806_C::OnSuccess_D5413C1448A42F7DAC2B81A04A82A06D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnSuccess_D5413C1448A42F7DAC2B81A04A82A06D");

	Params::Quest_5806_C_OnSuccess_D5413C1448A42F7DAC2B81A04A82A06D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5806.Quest_5806_C.OnSuccess_11A4E11E43B36796B812A89C14ADC063
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5806_C::OnSuccess_11A4E11E43B36796B812A89C14ADC063(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnSuccess_11A4E11E43B36796B812A89C14ADC063");

	Params::Quest_5806_C_OnSuccess_11A4E11E43B36796B812A89C14ADC063 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5806.Quest_5806_C.OnSuccess_F3BDCC834DAE8B6574D7918AAE6EE1A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5806_C::OnSuccess_F3BDCC834DAE8B6574D7918AAE6EE1A0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnSuccess_F3BDCC834DAE8B6574D7918AAE6EE1A0");

	Params::Quest_5806_C_OnSuccess_F3BDCC834DAE8B6574D7918AAE6EE1A0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5806.Quest_5806_C.OnFinished_A355E10F453DB721D642BDB51E0A9878
// (BlueprintCallable, BlueprintEvent)

void UQuest_5806_C::OnFinished_A355E10F453DB721D642BDB51E0A9878()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnFinished_A355E10F453DB721D642BDB51E0A9878");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5806.Quest_5806_C.OnStop_A355E10F453DB721D642BDB51E0A9878
// (BlueprintCallable, BlueprintEvent)

void UQuest_5806_C::OnStop_A355E10F453DB721D642BDB51E0A9878()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnStop_A355E10F453DB721D642BDB51E0A9878");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5806.Quest_5806_C.OnDlgClosed_AA6AF6F747860E199296B59C7103E9A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5806_C::OnDlgClosed_AA6AF6F747860E199296B59C7103E9A1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnDlgClosed_AA6AF6F747860E199296B59C7103E9A1");

	Params::Quest_5806_C_OnDlgClosed_AA6AF6F747860E199296B59C7103E9A1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5806.Quest_5806_C.OnDlgSelectedOption_AA6AF6F747860E199296B59C7103E9A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5806_C::OnDlgSelectedOption_AA6AF6F747860E199296B59C7103E9A1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnDlgSelectedOption_AA6AF6F747860E199296B59C7103E9A1");

	Params::Quest_5806_C_OnDlgSelectedOption_AA6AF6F747860E199296B59C7103E9A1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5806.Quest_5806_C.OnSuccess_0F6918CE431A30AF660F0B9272D4AFB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5806_C::OnSuccess_0F6918CE431A30AF660F0B9272D4AFB5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5806_C", "OnSuccess_0F6918CE431A30AF660F0B9272D4AFB5");

	Params::Quest_5806_C_OnSuccess_0F6918CE431A30AF660F0B9272D4AFB5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
