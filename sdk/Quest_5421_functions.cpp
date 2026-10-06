#pragma once



// Package: Quest_5421

#include "Basic.hpp"

#include "Quest_5421_classes.hpp"
#include "Quest_5421_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5421.Quest_5421_C.ExecuteUbergraph_Quest_5421
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5421_C::ExecuteUbergraph_Quest_5421(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "ExecuteUbergraph_Quest_5421");

	Params::Quest_5421_C_ExecuteUbergraph_Quest_5421 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5421.Quest_5421_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5421_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "HandleFinishing");

	Params::Quest_5421_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5421.Quest_5421_C.OnSuccess_2DAD13C745305DA4A87775A92C0DE24A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5421_C::OnSuccess_2DAD13C745305DA4A87775A92C0DE24A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnSuccess_2DAD13C745305DA4A87775A92C0DE24A");

	Params::Quest_5421_C_OnSuccess_2DAD13C745305DA4A87775A92C0DE24A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5421.Quest_5421_C.OnSuccess_219B5AE44A1836C8295B548CA3F87FB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5421_C::OnSuccess_219B5AE44A1836C8295B548CA3F87FB3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnSuccess_219B5AE44A1836C8295B548CA3F87FB3");

	Params::Quest_5421_C_OnSuccess_219B5AE44A1836C8295B548CA3F87FB3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5421.Quest_5421_C.OnSuccess_E380CE03405BDE05C067F0B146B4DD1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5421_C::OnSuccess_E380CE03405BDE05C067F0B146B4DD1D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnSuccess_E380CE03405BDE05C067F0B146B4DD1D");

	Params::Quest_5421_C_OnSuccess_E380CE03405BDE05C067F0B146B4DD1D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5421.Quest_5421_C.OnFinished_081E66E34CE75A5367766E953312171B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5421_C::OnFinished_081E66E34CE75A5367766E953312171B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnFinished_081E66E34CE75A5367766E953312171B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5421.Quest_5421_C.OnStop_081E66E34CE75A5367766E953312171B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5421_C::OnStop_081E66E34CE75A5367766E953312171B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnStop_081E66E34CE75A5367766E953312171B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5421.Quest_5421_C.OnDlgClosed_C84338F249D96A032A4380819B05E2B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5421_C::OnDlgClosed_C84338F249D96A032A4380819B05E2B4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnDlgClosed_C84338F249D96A032A4380819B05E2B4");

	Params::Quest_5421_C_OnDlgClosed_C84338F249D96A032A4380819B05E2B4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5421.Quest_5421_C.OnDlgSelectedOption_C84338F249D96A032A4380819B05E2B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5421_C::OnDlgSelectedOption_C84338F249D96A032A4380819B05E2B4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnDlgSelectedOption_C84338F249D96A032A4380819B05E2B4");

	Params::Quest_5421_C_OnDlgSelectedOption_C84338F249D96A032A4380819B05E2B4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5421.Quest_5421_C.OnSuccess_B0109FD043342D1EAEA9C788E151BBC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5421_C::OnSuccess_B0109FD043342D1EAEA9C788E151BBC5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5421_C", "OnSuccess_B0109FD043342D1EAEA9C788E151BBC5");

	Params::Quest_5421_C_OnSuccess_B0109FD043342D1EAEA9C788E151BBC5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
