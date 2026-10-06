#pragma once



// Package: Quest_5359

#include "Basic.hpp"

#include "Quest_5359_classes.hpp"
#include "Quest_5359_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5359.Quest_5359_C.ExecuteUbergraph_Quest_5359
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5359_C::ExecuteUbergraph_Quest_5359(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5359_C", "ExecuteUbergraph_Quest_5359");

	Params::Quest_5359_C_ExecuteUbergraph_Quest_5359 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5359.Quest_5359_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5359_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5359_C", "HandleFinishing");

	Params::Quest_5359_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5359.Quest_5359_C.OnFinished_0975E2DA471E141EDE0A35B9FDFBDED1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5359_C::OnFinished_0975E2DA471E141EDE0A35B9FDFBDED1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5359_C", "OnFinished_0975E2DA471E141EDE0A35B9FDFBDED1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5359.Quest_5359_C.OnStop_0975E2DA471E141EDE0A35B9FDFBDED1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5359_C::OnStop_0975E2DA471E141EDE0A35B9FDFBDED1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5359_C", "OnStop_0975E2DA471E141EDE0A35B9FDFBDED1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5359.Quest_5359_C.OnDlgClosed_39EE6C8E401BE885F740F39305F02030
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5359_C::OnDlgClosed_39EE6C8E401BE885F740F39305F02030(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5359_C", "OnDlgClosed_39EE6C8E401BE885F740F39305F02030");

	Params::Quest_5359_C_OnDlgClosed_39EE6C8E401BE885F740F39305F02030 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5359.Quest_5359_C.OnDlgSelectedOption_39EE6C8E401BE885F740F39305F02030
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5359_C::OnDlgSelectedOption_39EE6C8E401BE885F740F39305F02030(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5359_C", "OnDlgSelectedOption_39EE6C8E401BE885F740F39305F02030");

	Params::Quest_5359_C_OnDlgSelectedOption_39EE6C8E401BE885F740F39305F02030 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5359.Quest_5359_C.OnSuccess_BE2932EC48F89BF4A194AD9E80697D67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5359_C::OnSuccess_BE2932EC48F89BF4A194AD9E80697D67(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5359_C", "OnSuccess_BE2932EC48F89BF4A194AD9E80697D67");

	Params::Quest_5359_C_OnSuccess_BE2932EC48F89BF4A194AD9E80697D67 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
