#pragma once



// Package: Quest_5387

#include "Basic.hpp"

#include "Quest_5387_classes.hpp"
#include "Quest_5387_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5387.Quest_5387_C.ExecuteUbergraph_Quest_5387
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5387_C::ExecuteUbergraph_Quest_5387(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "ExecuteUbergraph_Quest_5387");

	Params::Quest_5387_C_ExecuteUbergraph_Quest_5387 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5387.Quest_5387_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5387_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "HandleFinishing");

	Params::Quest_5387_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5387.Quest_5387_C.OnSuccess_2B3AC75643A19EE0CC3EE781FCF2E1F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5387_C::OnSuccess_2B3AC75643A19EE0CC3EE781FCF2E1F5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnSuccess_2B3AC75643A19EE0CC3EE781FCF2E1F5");

	Params::Quest_5387_C_OnSuccess_2B3AC75643A19EE0CC3EE781FCF2E1F5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5387.Quest_5387_C.OnSuccess_92D6FD374062AA34FF03CB968844C7B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5387_C::OnSuccess_92D6FD374062AA34FF03CB968844C7B6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnSuccess_92D6FD374062AA34FF03CB968844C7B6");

	Params::Quest_5387_C_OnSuccess_92D6FD374062AA34FF03CB968844C7B6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5387.Quest_5387_C.OnSuccess_FFB068984D44175DA32D9F8254BCE20A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5387_C::OnSuccess_FFB068984D44175DA32D9F8254BCE20A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnSuccess_FFB068984D44175DA32D9F8254BCE20A");

	Params::Quest_5387_C_OnSuccess_FFB068984D44175DA32D9F8254BCE20A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5387.Quest_5387_C.OnFinished_C7D64DDF49655DF4A62226B4B078DF4B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5387_C::OnFinished_C7D64DDF49655DF4A62226B4B078DF4B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnFinished_C7D64DDF49655DF4A62226B4B078DF4B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5387.Quest_5387_C.OnStop_C7D64DDF49655DF4A62226B4B078DF4B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5387_C::OnStop_C7D64DDF49655DF4A62226B4B078DF4B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnStop_C7D64DDF49655DF4A62226B4B078DF4B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5387.Quest_5387_C.OnDlgClosed_75E1D8EB45E1AF4095E00AB42964FE02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5387_C::OnDlgClosed_75E1D8EB45E1AF4095E00AB42964FE02(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnDlgClosed_75E1D8EB45E1AF4095E00AB42964FE02");

	Params::Quest_5387_C_OnDlgClosed_75E1D8EB45E1AF4095E00AB42964FE02 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5387.Quest_5387_C.OnDlgSelectedOption_75E1D8EB45E1AF4095E00AB42964FE02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5387_C::OnDlgSelectedOption_75E1D8EB45E1AF4095E00AB42964FE02(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnDlgSelectedOption_75E1D8EB45E1AF4095E00AB42964FE02");

	Params::Quest_5387_C_OnDlgSelectedOption_75E1D8EB45E1AF4095E00AB42964FE02 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5387.Quest_5387_C.OnSuccess_9B9601B44EC0DEC68800238C7AE2FEC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5387_C::OnSuccess_9B9601B44EC0DEC68800238C7AE2FEC0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5387_C", "OnSuccess_9B9601B44EC0DEC68800238C7AE2FEC0");

	Params::Quest_5387_C_OnSuccess_9B9601B44EC0DEC68800238C7AE2FEC0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
