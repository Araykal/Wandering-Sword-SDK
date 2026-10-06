#pragma once



// Package: Quest_30002

#include "Basic.hpp"

#include "Quest_30002_classes.hpp"
#include "Quest_30002_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30002.Quest_30002_C.ExecuteUbergraph_Quest_30002
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30002_C::ExecuteUbergraph_Quest_30002(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30002_C", "ExecuteUbergraph_Quest_30002");

	Params::Quest_30002_C_ExecuteUbergraph_Quest_30002 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30002.Quest_30002_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30002_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30002_C", "HandleFinishing");

	Params::Quest_30002_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30002.Quest_30002_C.OnSuccess_1CAD468E4DE38C3F940453AF5295A5EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30002_C::OnSuccess_1CAD468E4DE38C3F940453AF5295A5EE(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30002_C", "OnSuccess_1CAD468E4DE38C3F940453AF5295A5EE");

	Params::Quest_30002_C_OnSuccess_1CAD468E4DE38C3F940453AF5295A5EE Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30002.Quest_30002_C.OnFinished_B66A068C401703DB065C269EA33C1C67
// (BlueprintCallable, BlueprintEvent)

void UQuest_30002_C::OnFinished_B66A068C401703DB065C269EA33C1C67()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30002_C", "OnFinished_B66A068C401703DB065C269EA33C1C67");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30002.Quest_30002_C.OnStop_B66A068C401703DB065C269EA33C1C67
// (BlueprintCallable, BlueprintEvent)

void UQuest_30002_C::OnStop_B66A068C401703DB065C269EA33C1C67()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30002_C", "OnStop_B66A068C401703DB065C269EA33C1C67");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30002.Quest_30002_C.OnDlgClosed_3DD8288E452B1811E5548F901B296D1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30002_C::OnDlgClosed_3DD8288E452B1811E5548F901B296D1E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30002_C", "OnDlgClosed_3DD8288E452B1811E5548F901B296D1E");

	Params::Quest_30002_C_OnDlgClosed_3DD8288E452B1811E5548F901B296D1E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30002.Quest_30002_C.OnDlgSelectedOption_3DD8288E452B1811E5548F901B296D1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30002_C::OnDlgSelectedOption_3DD8288E452B1811E5548F901B296D1E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30002_C", "OnDlgSelectedOption_3DD8288E452B1811E5548F901B296D1E");

	Params::Quest_30002_C_OnDlgSelectedOption_3DD8288E452B1811E5548F901B296D1E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
