#pragma once



// Package: Quest_5263

#include "Basic.hpp"

#include "Quest_5263_classes.hpp"
#include "Quest_5263_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5263.Quest_5263_C.ExecuteUbergraph_Quest_5263
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5263_C::ExecuteUbergraph_Quest_5263(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5263_C", "ExecuteUbergraph_Quest_5263");

	Params::Quest_5263_C_ExecuteUbergraph_Quest_5263 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5263.Quest_5263_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5263_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5263_C", "HandleFinishing");

	Params::Quest_5263_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5263.Quest_5263_C.OnFinished_5F74614D40862483C23AD5898DF74F87
// (BlueprintCallable, BlueprintEvent)

void UQuest_5263_C::OnFinished_5F74614D40862483C23AD5898DF74F87()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5263_C", "OnFinished_5F74614D40862483C23AD5898DF74F87");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5263.Quest_5263_C.OnStop_5F74614D40862483C23AD5898DF74F87
// (BlueprintCallable, BlueprintEvent)

void UQuest_5263_C::OnStop_5F74614D40862483C23AD5898DF74F87()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5263_C", "OnStop_5F74614D40862483C23AD5898DF74F87");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5263.Quest_5263_C.OnDlgClosed_C25AA0DB447E82370F8DE3928B148C24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5263_C::OnDlgClosed_C25AA0DB447E82370F8DE3928B148C24(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5263_C", "OnDlgClosed_C25AA0DB447E82370F8DE3928B148C24");

	Params::Quest_5263_C_OnDlgClosed_C25AA0DB447E82370F8DE3928B148C24 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5263.Quest_5263_C.OnDlgSelectedOption_C25AA0DB447E82370F8DE3928B148C24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5263_C::OnDlgSelectedOption_C25AA0DB447E82370F8DE3928B148C24(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5263_C", "OnDlgSelectedOption_C25AA0DB447E82370F8DE3928B148C24");

	Params::Quest_5263_C_OnDlgSelectedOption_C25AA0DB447E82370F8DE3928B148C24 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
