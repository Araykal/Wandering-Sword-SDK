#pragma once



// Package: Quest_5250

#include "Basic.hpp"

#include "Quest_5250_classes.hpp"
#include "Quest_5250_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5250.Quest_5250_C.ExecuteUbergraph_Quest_5250
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5250_C::ExecuteUbergraph_Quest_5250(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "ExecuteUbergraph_Quest_5250");

	Params::Quest_5250_C_ExecuteUbergraph_Quest_5250 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5250.Quest_5250_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5250_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "HandleFinishing");

	Params::Quest_5250_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5250.Quest_5250_C.OnSuccess_34DF7FFD4191E3568728EEAC6A3A3D26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5250_C::OnSuccess_34DF7FFD4191E3568728EEAC6A3A3D26(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnSuccess_34DF7FFD4191E3568728EEAC6A3A3D26");

	Params::Quest_5250_C_OnSuccess_34DF7FFD4191E3568728EEAC6A3A3D26 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5250.Quest_5250_C.OnSuccess_CA721C8A4F4A187332B4ADB53DE56A78
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5250_C::OnSuccess_CA721C8A4F4A187332B4ADB53DE56A78(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnSuccess_CA721C8A4F4A187332B4ADB53DE56A78");

	Params::Quest_5250_C_OnSuccess_CA721C8A4F4A187332B4ADB53DE56A78 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5250.Quest_5250_C.OnSuccess_1D6D032742567A9094AB45BBF00BCCC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5250_C::OnSuccess_1D6D032742567A9094AB45BBF00BCCC8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnSuccess_1D6D032742567A9094AB45BBF00BCCC8");

	Params::Quest_5250_C_OnSuccess_1D6D032742567A9094AB45BBF00BCCC8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5250.Quest_5250_C.OnFinished_8A128A654E2FD385DD1D9B984A7B46C9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5250_C::OnFinished_8A128A654E2FD385DD1D9B984A7B46C9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnFinished_8A128A654E2FD385DD1D9B984A7B46C9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5250.Quest_5250_C.OnStop_8A128A654E2FD385DD1D9B984A7B46C9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5250_C::OnStop_8A128A654E2FD385DD1D9B984A7B46C9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnStop_8A128A654E2FD385DD1D9B984A7B46C9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5250.Quest_5250_C.OnDlgClosed_18B37F934AB02C33DC13D38095ED64E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5250_C::OnDlgClosed_18B37F934AB02C33DC13D38095ED64E1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnDlgClosed_18B37F934AB02C33DC13D38095ED64E1");

	Params::Quest_5250_C_OnDlgClosed_18B37F934AB02C33DC13D38095ED64E1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5250.Quest_5250_C.OnDlgSelectedOption_18B37F934AB02C33DC13D38095ED64E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5250_C::OnDlgSelectedOption_18B37F934AB02C33DC13D38095ED64E1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnDlgSelectedOption_18B37F934AB02C33DC13D38095ED64E1");

	Params::Quest_5250_C_OnDlgSelectedOption_18B37F934AB02C33DC13D38095ED64E1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5250.Quest_5250_C.OnSuccess_C67F179E44AC97BB4DFC54A30939F4B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5250_C::OnSuccess_C67F179E44AC97BB4DFC54A30939F4B8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5250_C", "OnSuccess_C67F179E44AC97BB4DFC54A30939F4B8");

	Params::Quest_5250_C_OnSuccess_C67F179E44AC97BB4DFC54A30939F4B8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
