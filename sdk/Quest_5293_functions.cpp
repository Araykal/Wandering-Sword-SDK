#pragma once



// Package: Quest_5293

#include "Basic.hpp"

#include "Quest_5293_classes.hpp"
#include "Quest_5293_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5293.Quest_5293_C.ExecuteUbergraph_Quest_5293
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5293_C::ExecuteUbergraph_Quest_5293(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "ExecuteUbergraph_Quest_5293");

	Params::Quest_5293_C_ExecuteUbergraph_Quest_5293 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5293.Quest_5293_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5293_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "HandleFinishing");

	Params::Quest_5293_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5293.Quest_5293_C.OnSuccess_CAAF7F814D6AF1B3CD7878A0E65FE676
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5293_C::OnSuccess_CAAF7F814D6AF1B3CD7878A0E65FE676(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnSuccess_CAAF7F814D6AF1B3CD7878A0E65FE676");

	Params::Quest_5293_C_OnSuccess_CAAF7F814D6AF1B3CD7878A0E65FE676 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5293.Quest_5293_C.OnSuccess_FCD8E1B644834441A68EF9AE0510ABD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5293_C::OnSuccess_FCD8E1B644834441A68EF9AE0510ABD9(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnSuccess_FCD8E1B644834441A68EF9AE0510ABD9");

	Params::Quest_5293_C_OnSuccess_FCD8E1B644834441A68EF9AE0510ABD9 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5293.Quest_5293_C.OnSuccess_A2D9BE7947F6DCC56EC3B4B9C440C314
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5293_C::OnSuccess_A2D9BE7947F6DCC56EC3B4B9C440C314(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnSuccess_A2D9BE7947F6DCC56EC3B4B9C440C314");

	Params::Quest_5293_C_OnSuccess_A2D9BE7947F6DCC56EC3B4B9C440C314 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5293.Quest_5293_C.OnFinished_D59770A3495F39EEB6D2DCA4CA0A546C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5293_C::OnFinished_D59770A3495F39EEB6D2DCA4CA0A546C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnFinished_D59770A3495F39EEB6D2DCA4CA0A546C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5293.Quest_5293_C.OnStop_D59770A3495F39EEB6D2DCA4CA0A546C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5293_C::OnStop_D59770A3495F39EEB6D2DCA4CA0A546C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnStop_D59770A3495F39EEB6D2DCA4CA0A546C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5293.Quest_5293_C.OnDlgClosed_1E5C19134ED10B2FB118AC8468F6F8F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5293_C::OnDlgClosed_1E5C19134ED10B2FB118AC8468F6F8F4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnDlgClosed_1E5C19134ED10B2FB118AC8468F6F8F4");

	Params::Quest_5293_C_OnDlgClosed_1E5C19134ED10B2FB118AC8468F6F8F4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5293.Quest_5293_C.OnDlgSelectedOption_1E5C19134ED10B2FB118AC8468F6F8F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5293_C::OnDlgSelectedOption_1E5C19134ED10B2FB118AC8468F6F8F4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnDlgSelectedOption_1E5C19134ED10B2FB118AC8468F6F8F4");

	Params::Quest_5293_C_OnDlgSelectedOption_1E5C19134ED10B2FB118AC8468F6F8F4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5293.Quest_5293_C.OnSuccess_3650650341210D9AE86A7B91E5089F10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5293_C::OnSuccess_3650650341210D9AE86A7B91E5089F10(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5293_C", "OnSuccess_3650650341210D9AE86A7B91E5089F10");

	Params::Quest_5293_C_OnSuccess_3650650341210D9AE86A7B91E5089F10 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
