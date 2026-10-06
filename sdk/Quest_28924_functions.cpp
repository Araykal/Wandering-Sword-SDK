#pragma once



// Package: Quest_28924

#include "Basic.hpp"

#include "Quest_28924_classes.hpp"
#include "Quest_28924_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28924.Quest_28924_C.ExecuteUbergraph_Quest_28924
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28924_C::ExecuteUbergraph_Quest_28924(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "ExecuteUbergraph_Quest_28924");

	Params::Quest_28924_C_ExecuteUbergraph_Quest_28924 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28924.Quest_28924_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28924_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "HandleFinishing");

	Params::Quest_28924_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28924.Quest_28924_C.OnSuccess_2BF4CA164BBBA9C4804F468F5B57A8B7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28924_C::OnSuccess_2BF4CA164BBBA9C4804F468F5B57A8B7(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnSuccess_2BF4CA164BBBA9C4804F468F5B57A8B7");

	Params::Quest_28924_C_OnSuccess_2BF4CA164BBBA9C4804F468F5B57A8B7 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28924.Quest_28924_C.OnSuccess_10E1AAA34A83FF93273F7180EADC6FAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28924_C::OnSuccess_10E1AAA34A83FF93273F7180EADC6FAC(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnSuccess_10E1AAA34A83FF93273F7180EADC6FAC");

	Params::Quest_28924_C_OnSuccess_10E1AAA34A83FF93273F7180EADC6FAC Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28924.Quest_28924_C.OnSuccess_10C3D4404F2ABDEFB0186F8F522A088E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28924_C::OnSuccess_10C3D4404F2ABDEFB0186F8F522A088E(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnSuccess_10C3D4404F2ABDEFB0186F8F522A088E");

	Params::Quest_28924_C_OnSuccess_10C3D4404F2ABDEFB0186F8F522A088E Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28924.Quest_28924_C.OnSuccess_5979FF77428A464A6EF0E9B1279D4FCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28924_C::OnSuccess_5979FF77428A464A6EF0E9B1279D4FCE(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnSuccess_5979FF77428A464A6EF0E9B1279D4FCE");

	Params::Quest_28924_C_OnSuccess_5979FF77428A464A6EF0E9B1279D4FCE Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28924.Quest_28924_C.OnFinished_120F9AF8413C677C9FF6B58FB9F42AD3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28924_C::OnFinished_120F9AF8413C677C9FF6B58FB9F42AD3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnFinished_120F9AF8413C677C9FF6B58FB9F42AD3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28924.Quest_28924_C.OnStop_120F9AF8413C677C9FF6B58FB9F42AD3
// (BlueprintCallable, BlueprintEvent)

void UQuest_28924_C::OnStop_120F9AF8413C677C9FF6B58FB9F42AD3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnStop_120F9AF8413C677C9FF6B58FB9F42AD3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28924.Quest_28924_C.OnDlgClosed_A0F814254F8655F53F31579481832BF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28924_C::OnDlgClosed_A0F814254F8655F53F31579481832BF9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnDlgClosed_A0F814254F8655F53F31579481832BF9");

	Params::Quest_28924_C_OnDlgClosed_A0F814254F8655F53F31579481832BF9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28924.Quest_28924_C.OnDlgSelectedOption_A0F814254F8655F53F31579481832BF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28924_C::OnDlgSelectedOption_A0F814254F8655F53F31579481832BF9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28924_C", "OnDlgSelectedOption_A0F814254F8655F53F31579481832BF9");

	Params::Quest_28924_C_OnDlgSelectedOption_A0F814254F8655F53F31579481832BF9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
