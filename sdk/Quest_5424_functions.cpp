#pragma once



// Package: Quest_5424

#include "Basic.hpp"

#include "Quest_5424_classes.hpp"
#include "Quest_5424_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5424.Quest_5424_C.ExecuteUbergraph_Quest_5424
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5424_C::ExecuteUbergraph_Quest_5424(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5424_C", "ExecuteUbergraph_Quest_5424");

	Params::Quest_5424_C_ExecuteUbergraph_Quest_5424 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5424.Quest_5424_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5424_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5424_C", "HandleFinishing");

	Params::Quest_5424_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5424.Quest_5424_C.OnFinished_F58936484CEC5018E0175C82AB6FED03
// (BlueprintCallable, BlueprintEvent)

void UQuest_5424_C::OnFinished_F58936484CEC5018E0175C82AB6FED03()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5424_C", "OnFinished_F58936484CEC5018E0175C82AB6FED03");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5424.Quest_5424_C.OnStop_F58936484CEC5018E0175C82AB6FED03
// (BlueprintCallable, BlueprintEvent)

void UQuest_5424_C::OnStop_F58936484CEC5018E0175C82AB6FED03()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5424_C", "OnStop_F58936484CEC5018E0175C82AB6FED03");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5424.Quest_5424_C.OnDlgClosed_CE8ABD254B6B51B24BEF5B9BA883892A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5424_C::OnDlgClosed_CE8ABD254B6B51B24BEF5B9BA883892A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5424_C", "OnDlgClosed_CE8ABD254B6B51B24BEF5B9BA883892A");

	Params::Quest_5424_C_OnDlgClosed_CE8ABD254B6B51B24BEF5B9BA883892A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5424.Quest_5424_C.OnDlgSelectedOption_CE8ABD254B6B51B24BEF5B9BA883892A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5424_C::OnDlgSelectedOption_CE8ABD254B6B51B24BEF5B9BA883892A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5424_C", "OnDlgSelectedOption_CE8ABD254B6B51B24BEF5B9BA883892A");

	Params::Quest_5424_C_OnDlgSelectedOption_CE8ABD254B6B51B24BEF5B9BA883892A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
