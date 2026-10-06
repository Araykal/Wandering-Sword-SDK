#pragma once



// Package: Quest_13410

#include "Basic.hpp"

#include "Quest_13410_classes.hpp"
#include "Quest_13410_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_13410.Quest_13410_C.ExecuteUbergraph_Quest_13410
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13410_C::ExecuteUbergraph_Quest_13410(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13410_C", "ExecuteUbergraph_Quest_13410");

	Params::Quest_13410_C_ExecuteUbergraph_Quest_13410 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_13410.Quest_13410_C.HandleRequesting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13410_C::HandleRequesting(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13410_C", "HandleRequesting");

	Params::Quest_13410_C_HandleRequesting Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_13410.Quest_13410_C.OnFinished_F8A2B6C34342E993F63EB5BA386E4F89
// (BlueprintCallable, BlueprintEvent)

void UQuest_13410_C::OnFinished_F8A2B6C34342E993F63EB5BA386E4F89()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13410_C", "OnFinished_F8A2B6C34342E993F63EB5BA386E4F89");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_13410.Quest_13410_C.OnStop_F8A2B6C34342E993F63EB5BA386E4F89
// (BlueprintCallable, BlueprintEvent)

void UQuest_13410_C::OnStop_F8A2B6C34342E993F63EB5BA386E4F89()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13410_C", "OnStop_F8A2B6C34342E993F63EB5BA386E4F89");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_13410.Quest_13410_C.OnDlgClosed_D861132D42153474BA4B12B661D9DAD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13410_C::OnDlgClosed_D861132D42153474BA4B12B661D9DAD5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13410_C", "OnDlgClosed_D861132D42153474BA4B12B661D9DAD5");

	Params::Quest_13410_C_OnDlgClosed_D861132D42153474BA4B12B661D9DAD5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_13410.Quest_13410_C.OnDlgSelectedOption_D861132D42153474BA4B12B661D9DAD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_13410_C::OnDlgSelectedOption_D861132D42153474BA4B12B661D9DAD5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_13410_C", "OnDlgSelectedOption_D861132D42153474BA4B12B661D9DAD5");

	Params::Quest_13410_C_OnDlgSelectedOption_D861132D42153474BA4B12B661D9DAD5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
