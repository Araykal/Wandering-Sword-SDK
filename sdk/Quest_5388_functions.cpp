#pragma once



// Package: Quest_5388

#include "Basic.hpp"

#include "Quest_5388_classes.hpp"
#include "Quest_5388_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5388.Quest_5388_C.ExecuteUbergraph_Quest_5388
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5388_C::ExecuteUbergraph_Quest_5388(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5388_C", "ExecuteUbergraph_Quest_5388");

	Params::Quest_5388_C_ExecuteUbergraph_Quest_5388 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5388.Quest_5388_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5388_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5388_C", "HandleFinishing");

	Params::Quest_5388_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5388.Quest_5388_C.OnSuccess_7EB066B74D3AEBEC5C476F962C9582E1
// (BlueprintCallable, BlueprintEvent)

void UQuest_5388_C::OnSuccess_7EB066B74D3AEBEC5C476F962C9582E1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5388_C", "OnSuccess_7EB066B74D3AEBEC5C476F962C9582E1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5388.Quest_5388_C.OnFinished_5EA2F8C1496B22AB884B80BF15E5EE5F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5388_C::OnFinished_5EA2F8C1496B22AB884B80BF15E5EE5F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5388_C", "OnFinished_5EA2F8C1496B22AB884B80BF15E5EE5F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5388.Quest_5388_C.OnStop_5EA2F8C1496B22AB884B80BF15E5EE5F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5388_C::OnStop_5EA2F8C1496B22AB884B80BF15E5EE5F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5388_C", "OnStop_5EA2F8C1496B22AB884B80BF15E5EE5F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5388.Quest_5388_C.OnDlgClosed_090E029B4C9EF833D230BCBCC8A44964
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5388_C::OnDlgClosed_090E029B4C9EF833D230BCBCC8A44964(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5388_C", "OnDlgClosed_090E029B4C9EF833D230BCBCC8A44964");

	Params::Quest_5388_C_OnDlgClosed_090E029B4C9EF833D230BCBCC8A44964 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5388.Quest_5388_C.OnDlgSelectedOption_090E029B4C9EF833D230BCBCC8A44964
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5388_C::OnDlgSelectedOption_090E029B4C9EF833D230BCBCC8A44964(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5388_C", "OnDlgSelectedOption_090E029B4C9EF833D230BCBCC8A44964");

	Params::Quest_5388_C_OnDlgSelectedOption_090E029B4C9EF833D230BCBCC8A44964 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
