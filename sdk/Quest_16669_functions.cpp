#pragma once



// Package: Quest_16669

#include "Basic.hpp"

#include "Quest_16669_classes.hpp"
#include "Quest_16669_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16669.Quest_16669_C.ExecuteUbergraph_Quest_16669
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16669_C::ExecuteUbergraph_Quest_16669(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16669_C", "ExecuteUbergraph_Quest_16669");

	Params::Quest_16669_C_ExecuteUbergraph_Quest_16669 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16669.Quest_16669_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16669_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16669_C", "HandleFinishing");

	Params::Quest_16669_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16669.Quest_16669_C.OnSuccess_83C6D47B4AB4CCF704433BADE256EFDD
// (BlueprintCallable, BlueprintEvent)

void UQuest_16669_C::OnSuccess_83C6D47B4AB4CCF704433BADE256EFDD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16669_C", "OnSuccess_83C6D47B4AB4CCF704433BADE256EFDD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16669.Quest_16669_C.OnFinished_F0FBACA14302F52215FFE6BA24B20EA8
// (BlueprintCallable, BlueprintEvent)

void UQuest_16669_C::OnFinished_F0FBACA14302F52215FFE6BA24B20EA8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16669_C", "OnFinished_F0FBACA14302F52215FFE6BA24B20EA8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16669.Quest_16669_C.OnStop_F0FBACA14302F52215FFE6BA24B20EA8
// (BlueprintCallable, BlueprintEvent)

void UQuest_16669_C::OnStop_F0FBACA14302F52215FFE6BA24B20EA8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16669_C", "OnStop_F0FBACA14302F52215FFE6BA24B20EA8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16669.Quest_16669_C.OnDlgClosed_BAA499F54C5529103A8CF2BAEC99BDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16669_C::OnDlgClosed_BAA499F54C5529103A8CF2BAEC99BDC4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16669_C", "OnDlgClosed_BAA499F54C5529103A8CF2BAEC99BDC4");

	Params::Quest_16669_C_OnDlgClosed_BAA499F54C5529103A8CF2BAEC99BDC4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16669.Quest_16669_C.OnDlgSelectedOption_BAA499F54C5529103A8CF2BAEC99BDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16669_C::OnDlgSelectedOption_BAA499F54C5529103A8CF2BAEC99BDC4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16669_C", "OnDlgSelectedOption_BAA499F54C5529103A8CF2BAEC99BDC4");

	Params::Quest_16669_C_OnDlgSelectedOption_BAA499F54C5529103A8CF2BAEC99BDC4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
