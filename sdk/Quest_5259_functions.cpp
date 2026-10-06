#pragma once



// Package: Quest_5259

#include "Basic.hpp"

#include "Quest_5259_classes.hpp"
#include "Quest_5259_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5259.Quest_5259_C.ExecuteUbergraph_Quest_5259
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5259_C::ExecuteUbergraph_Quest_5259(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "ExecuteUbergraph_Quest_5259");

	Params::Quest_5259_C_ExecuteUbergraph_Quest_5259 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5259.Quest_5259_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5259_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "HandleFinishing");

	Params::Quest_5259_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5259.Quest_5259_C.OnSuccess_A5AD56D44B12B69D34622E994434C4FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5259_C::OnSuccess_A5AD56D44B12B69D34622E994434C4FC(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnSuccess_A5AD56D44B12B69D34622E994434C4FC");

	Params::Quest_5259_C_OnSuccess_A5AD56D44B12B69D34622E994434C4FC Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5259.Quest_5259_C.OnSuccess_198345BE4EFC17FC3186B69E855827DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5259_C::OnSuccess_198345BE4EFC17FC3186B69E855827DA(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnSuccess_198345BE4EFC17FC3186B69E855827DA");

	Params::Quest_5259_C_OnSuccess_198345BE4EFC17FC3186B69E855827DA Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5259.Quest_5259_C.OnSuccess_735DE3FA446CB8E3D91D56AAEBBA4A15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5259_C::OnSuccess_735DE3FA446CB8E3D91D56AAEBBA4A15(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnSuccess_735DE3FA446CB8E3D91D56AAEBBA4A15");

	Params::Quest_5259_C_OnSuccess_735DE3FA446CB8E3D91D56AAEBBA4A15 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5259.Quest_5259_C.OnFinished_7FF780794B2B1A0F3DD48F891684147A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5259_C::OnFinished_7FF780794B2B1A0F3DD48F891684147A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnFinished_7FF780794B2B1A0F3DD48F891684147A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5259.Quest_5259_C.OnStop_7FF780794B2B1A0F3DD48F891684147A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5259_C::OnStop_7FF780794B2B1A0F3DD48F891684147A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnStop_7FF780794B2B1A0F3DD48F891684147A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5259.Quest_5259_C.OnDlgClosed_9CE0715240BE5A8C93B852B41D9B63B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5259_C::OnDlgClosed_9CE0715240BE5A8C93B852B41D9B63B9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnDlgClosed_9CE0715240BE5A8C93B852B41D9B63B9");

	Params::Quest_5259_C_OnDlgClosed_9CE0715240BE5A8C93B852B41D9B63B9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5259.Quest_5259_C.OnDlgSelectedOption_9CE0715240BE5A8C93B852B41D9B63B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5259_C::OnDlgSelectedOption_9CE0715240BE5A8C93B852B41D9B63B9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnDlgSelectedOption_9CE0715240BE5A8C93B852B41D9B63B9");

	Params::Quest_5259_C_OnDlgSelectedOption_9CE0715240BE5A8C93B852B41D9B63B9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5259.Quest_5259_C.OnSuccess_B5D68E734DEB93768BDB5A9890ACDFC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5259_C::OnSuccess_B5D68E734DEB93768BDB5A9890ACDFC3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5259_C", "OnSuccess_B5D68E734DEB93768BDB5A9890ACDFC3");

	Params::Quest_5259_C_OnSuccess_B5D68E734DEB93768BDB5A9890ACDFC3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
