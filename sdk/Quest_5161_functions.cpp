#pragma once



// Package: Quest_5161

#include "Basic.hpp"

#include "Quest_5161_classes.hpp"
#include "Quest_5161_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5161.Quest_5161_C.ExecuteUbergraph_Quest_5161
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5161_C::ExecuteUbergraph_Quest_5161(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5161_C", "ExecuteUbergraph_Quest_5161");

	Params::Quest_5161_C_ExecuteUbergraph_Quest_5161 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5161.Quest_5161_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5161_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5161_C", "HandleFinishing");

	Params::Quest_5161_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5161.Quest_5161_C.OnSuccess_391DB4D14CF62D4634D69695770E0A4E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5161_C::OnSuccess_391DB4D14CF62D4634D69695770E0A4E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5161_C", "OnSuccess_391DB4D14CF62D4634D69695770E0A4E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5161.Quest_5161_C.OnFinished_2B3C7143445E9517E426D69FCFDB4D30
// (BlueprintCallable, BlueprintEvent)

void UQuest_5161_C::OnFinished_2B3C7143445E9517E426D69FCFDB4D30()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5161_C", "OnFinished_2B3C7143445E9517E426D69FCFDB4D30");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5161.Quest_5161_C.OnStop_2B3C7143445E9517E426D69FCFDB4D30
// (BlueprintCallable, BlueprintEvent)

void UQuest_5161_C::OnStop_2B3C7143445E9517E426D69FCFDB4D30()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5161_C", "OnStop_2B3C7143445E9517E426D69FCFDB4D30");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5161.Quest_5161_C.OnDlgClosed_2465B91F4C75F33B78904CB6AFABF7FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5161_C::OnDlgClosed_2465B91F4C75F33B78904CB6AFABF7FB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5161_C", "OnDlgClosed_2465B91F4C75F33B78904CB6AFABF7FB");

	Params::Quest_5161_C_OnDlgClosed_2465B91F4C75F33B78904CB6AFABF7FB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5161.Quest_5161_C.OnDlgSelectedOption_2465B91F4C75F33B78904CB6AFABF7FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5161_C::OnDlgSelectedOption_2465B91F4C75F33B78904CB6AFABF7FB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5161_C", "OnDlgSelectedOption_2465B91F4C75F33B78904CB6AFABF7FB");

	Params::Quest_5161_C_OnDlgSelectedOption_2465B91F4C75F33B78904CB6AFABF7FB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
