#pragma once



// Package: Quest_5782

#include "Basic.hpp"

#include "Quest_5782_classes.hpp"
#include "Quest_5782_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5782.Quest_5782_C.ExecuteUbergraph_Quest_5782
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5782_C::ExecuteUbergraph_Quest_5782(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5782_C", "ExecuteUbergraph_Quest_5782");

	Params::Quest_5782_C_ExecuteUbergraph_Quest_5782 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5782.Quest_5782_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5782_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5782_C", "HandleFinishing");

	Params::Quest_5782_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5782.Quest_5782_C.OnSuccess_E026877E4625030DFDF3ADA7AFDD595B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5782_C::OnSuccess_E026877E4625030DFDF3ADA7AFDD595B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5782_C", "OnSuccess_E026877E4625030DFDF3ADA7AFDD595B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5782.Quest_5782_C.OnFinished_CDA2CCA943080BC17F95C7984D9D7D99
// (BlueprintCallable, BlueprintEvent)

void UQuest_5782_C::OnFinished_CDA2CCA943080BC17F95C7984D9D7D99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5782_C", "OnFinished_CDA2CCA943080BC17F95C7984D9D7D99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5782.Quest_5782_C.OnStop_CDA2CCA943080BC17F95C7984D9D7D99
// (BlueprintCallable, BlueprintEvent)

void UQuest_5782_C::OnStop_CDA2CCA943080BC17F95C7984D9D7D99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5782_C", "OnStop_CDA2CCA943080BC17F95C7984D9D7D99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5782.Quest_5782_C.OnDlgClosed_67CEC9344719D2F30397EA9E34E84357
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5782_C::OnDlgClosed_67CEC9344719D2F30397EA9E34E84357(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5782_C", "OnDlgClosed_67CEC9344719D2F30397EA9E34E84357");

	Params::Quest_5782_C_OnDlgClosed_67CEC9344719D2F30397EA9E34E84357 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5782.Quest_5782_C.OnDlgSelectedOption_67CEC9344719D2F30397EA9E34E84357
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5782_C::OnDlgSelectedOption_67CEC9344719D2F30397EA9E34E84357(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5782_C", "OnDlgSelectedOption_67CEC9344719D2F30397EA9E34E84357");

	Params::Quest_5782_C_OnDlgSelectedOption_67CEC9344719D2F30397EA9E34E84357 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
