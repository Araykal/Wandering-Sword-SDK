#pragma once



// Package: Quest_5037

#include "Basic.hpp"

#include "Quest_5037_classes.hpp"
#include "Quest_5037_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5037.Quest_5037_C.ExecuteUbergraph_Quest_5037
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5037_C::ExecuteUbergraph_Quest_5037(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "ExecuteUbergraph_Quest_5037");

	Params::Quest_5037_C_ExecuteUbergraph_Quest_5037 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5037.Quest_5037_C.HandleRequesting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5037_C::HandleRequesting(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "HandleRequesting");

	Params::Quest_5037_C_HandleRequesting Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5037.Quest_5037_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5037_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "HandleFinishing");

	Params::Quest_5037_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5037.Quest_5037_C.OnSuccess_33FE9F26402A365CB42F5C95382E50F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5037_C::OnSuccess_33FE9F26402A365CB42F5C95382E50F8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "OnSuccess_33FE9F26402A365CB42F5C95382E50F8");

	Params::Quest_5037_C_OnSuccess_33FE9F26402A365CB42F5C95382E50F8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5037.Quest_5037_C.OnFinished_27226B4E440787EF2BBD4282637A3694
// (BlueprintCallable, BlueprintEvent)

void UQuest_5037_C::OnFinished_27226B4E440787EF2BBD4282637A3694()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "OnFinished_27226B4E440787EF2BBD4282637A3694");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5037.Quest_5037_C.OnStop_27226B4E440787EF2BBD4282637A3694
// (BlueprintCallable, BlueprintEvent)

void UQuest_5037_C::OnStop_27226B4E440787EF2BBD4282637A3694()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "OnStop_27226B4E440787EF2BBD4282637A3694");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5037.Quest_5037_C.OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5037_C::OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395");

	Params::Quest_5037_C_OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5037.Quest_5037_C.OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5037_C::OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395");

	Params::Quest_5037_C_OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5037.Quest_5037_C.OnSuccess_492F312D41E50BB626ADDE9F9078E428
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5037_C::OnSuccess_492F312D41E50BB626ADDE9F9078E428(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5037_C", "OnSuccess_492F312D41E50BB626ADDE9F9078E428");

	Params::Quest_5037_C_OnSuccess_492F312D41E50BB626ADDE9F9078E428 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
