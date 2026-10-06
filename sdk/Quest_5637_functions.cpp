#pragma once



// Package: Quest_5637

#include "Basic.hpp"

#include "Quest_5637_classes.hpp"
#include "Quest_5637_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5637.Quest_5637_C.ExecuteUbergraph_Quest_5637
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5637_C::ExecuteUbergraph_Quest_5637(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5637_C", "ExecuteUbergraph_Quest_5637");

	Params::Quest_5637_C_ExecuteUbergraph_Quest_5637 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5637.Quest_5637_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5637_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5637_C", "HandleFinishing");

	Params::Quest_5637_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5637.Quest_5637_C.OnFinished_30033AB3469FF8897216BF9BD5281D91
// (BlueprintCallable, BlueprintEvent)

void UQuest_5637_C::OnFinished_30033AB3469FF8897216BF9BD5281D91()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5637_C", "OnFinished_30033AB3469FF8897216BF9BD5281D91");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5637.Quest_5637_C.OnStop_30033AB3469FF8897216BF9BD5281D91
// (BlueprintCallable, BlueprintEvent)

void UQuest_5637_C::OnStop_30033AB3469FF8897216BF9BD5281D91()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5637_C", "OnStop_30033AB3469FF8897216BF9BD5281D91");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5637.Quest_5637_C.OnDlgClosed_7B52490D45C21843D0A988BE6EA58174
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5637_C::OnDlgClosed_7B52490D45C21843D0A988BE6EA58174(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5637_C", "OnDlgClosed_7B52490D45C21843D0A988BE6EA58174");

	Params::Quest_5637_C_OnDlgClosed_7B52490D45C21843D0A988BE6EA58174 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5637.Quest_5637_C.OnDlgSelectedOption_7B52490D45C21843D0A988BE6EA58174
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5637_C::OnDlgSelectedOption_7B52490D45C21843D0A988BE6EA58174(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5637_C", "OnDlgSelectedOption_7B52490D45C21843D0A988BE6EA58174");

	Params::Quest_5637_C_OnDlgSelectedOption_7B52490D45C21843D0A988BE6EA58174 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
