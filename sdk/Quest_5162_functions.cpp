#pragma once



// Package: Quest_5162

#include "Basic.hpp"

#include "Quest_5162_classes.hpp"
#include "Quest_5162_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5162.Quest_5162_C.ExecuteUbergraph_Quest_5162
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5162_C::ExecuteUbergraph_Quest_5162(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5162_C", "ExecuteUbergraph_Quest_5162");

	Params::Quest_5162_C_ExecuteUbergraph_Quest_5162 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5162.Quest_5162_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5162_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5162_C", "HandleFinishing");

	Params::Quest_5162_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5162.Quest_5162_C.OnFinished_CEDB9D6C4EFA9FF9221424B439EEBB4D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5162_C::OnFinished_CEDB9D6C4EFA9FF9221424B439EEBB4D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5162_C", "OnFinished_CEDB9D6C4EFA9FF9221424B439EEBB4D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5162.Quest_5162_C.OnStop_CEDB9D6C4EFA9FF9221424B439EEBB4D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5162_C::OnStop_CEDB9D6C4EFA9FF9221424B439EEBB4D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5162_C", "OnStop_CEDB9D6C4EFA9FF9221424B439EEBB4D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5162.Quest_5162_C.OnDlgClosed_2B00BA644C430EE5170A8EB968F756AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5162_C::OnDlgClosed_2B00BA644C430EE5170A8EB968F756AC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5162_C", "OnDlgClosed_2B00BA644C430EE5170A8EB968F756AC");

	Params::Quest_5162_C_OnDlgClosed_2B00BA644C430EE5170A8EB968F756AC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5162.Quest_5162_C.OnDlgSelectedOption_2B00BA644C430EE5170A8EB968F756AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5162_C::OnDlgSelectedOption_2B00BA644C430EE5170A8EB968F756AC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5162_C", "OnDlgSelectedOption_2B00BA644C430EE5170A8EB968F756AC");

	Params::Quest_5162_C_OnDlgSelectedOption_2B00BA644C430EE5170A8EB968F756AC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5162.Quest_5162_C.OnSuccess_76C247E64F73041211E15DAADB4A7F50
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5162_C::OnSuccess_76C247E64F73041211E15DAADB4A7F50(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5162_C", "OnSuccess_76C247E64F73041211E15DAADB4A7F50");

	Params::Quest_5162_C_OnSuccess_76C247E64F73041211E15DAADB4A7F50 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
