#pragma once



// Package: Quest_16069

#include "Basic.hpp"

#include "Quest_16069_classes.hpp"
#include "Quest_16069_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16069.Quest_16069_C.ExecuteUbergraph_Quest_16069
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16069_C::ExecuteUbergraph_Quest_16069(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "ExecuteUbergraph_Quest_16069");

	Params::Quest_16069_C_ExecuteUbergraph_Quest_16069 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16069.Quest_16069_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16069_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "HandleFinishing");

	Params::Quest_16069_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16069.Quest_16069_C.OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16069_C::OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68");

	Params::Quest_16069_C_OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16069.Quest_16069_C.OnSuccess_7C3E3C574646425FBA70CA99562C1AB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16069_C::OnSuccess_7C3E3C574646425FBA70CA99562C1AB7(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnSuccess_7C3E3C574646425FBA70CA99562C1AB7");

	Params::Quest_16069_C_OnSuccess_7C3E3C574646425FBA70CA99562C1AB7 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16069.Quest_16069_C.OnSuccess_7911E3F348ECB8CC29BE7E8705939175
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16069_C::OnSuccess_7911E3F348ECB8CC29BE7E8705939175(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnSuccess_7911E3F348ECB8CC29BE7E8705939175");

	Params::Quest_16069_C_OnSuccess_7911E3F348ECB8CC29BE7E8705939175 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16069.Quest_16069_C.OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16069_C::OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1");

	Params::Quest_16069_C_OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16069.Quest_16069_C.OnFinished_380592134D2AC8004FDD3C8EC77CF2C8
// (BlueprintCallable, BlueprintEvent)

void UQuest_16069_C::OnFinished_380592134D2AC8004FDD3C8EC77CF2C8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnFinished_380592134D2AC8004FDD3C8EC77CF2C8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16069.Quest_16069_C.OnStop_380592134D2AC8004FDD3C8EC77CF2C8
// (BlueprintCallable, BlueprintEvent)

void UQuest_16069_C::OnStop_380592134D2AC8004FDD3C8EC77CF2C8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnStop_380592134D2AC8004FDD3C8EC77CF2C8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16069.Quest_16069_C.OnDlgClosed_58098C684E444F512FAF08AF75E563D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16069_C::OnDlgClosed_58098C684E444F512FAF08AF75E563D3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnDlgClosed_58098C684E444F512FAF08AF75E563D3");

	Params::Quest_16069_C_OnDlgClosed_58098C684E444F512FAF08AF75E563D3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16069.Quest_16069_C.OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16069_C::OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16069_C", "OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3");

	Params::Quest_16069_C_OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
