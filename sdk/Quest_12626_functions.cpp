#pragma once



// Package: Quest_12626

#include "Basic.hpp"

#include "Quest_12626_classes.hpp"
#include "Quest_12626_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12626.Quest_12626_C.ExecuteUbergraph_Quest_12626
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12626_C::ExecuteUbergraph_Quest_12626(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12626_C", "ExecuteUbergraph_Quest_12626");

	Params::Quest_12626_C_ExecuteUbergraph_Quest_12626 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12626.Quest_12626_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12626_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12626_C", "HandleFinishing");

	Params::Quest_12626_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12626.Quest_12626_C.OnSuccess_12D2C05144186058849E0F88932FDEB0
// (BlueprintCallable, BlueprintEvent)

void UQuest_12626_C::OnSuccess_12D2C05144186058849E0F88932FDEB0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12626_C", "OnSuccess_12D2C05144186058849E0F88932FDEB0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12626.Quest_12626_C.OnFinished_AEA8D5B94977BF7D0DD18A8271777E85
// (BlueprintCallable, BlueprintEvent)

void UQuest_12626_C::OnFinished_AEA8D5B94977BF7D0DD18A8271777E85()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12626_C", "OnFinished_AEA8D5B94977BF7D0DD18A8271777E85");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12626.Quest_12626_C.OnStop_AEA8D5B94977BF7D0DD18A8271777E85
// (BlueprintCallable, BlueprintEvent)

void UQuest_12626_C::OnStop_AEA8D5B94977BF7D0DD18A8271777E85()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12626_C", "OnStop_AEA8D5B94977BF7D0DD18A8271777E85");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12626.Quest_12626_C.OnDlgClosed_F7E690D842257F86FC1DB2AFB6614FD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12626_C::OnDlgClosed_F7E690D842257F86FC1DB2AFB6614FD0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12626_C", "OnDlgClosed_F7E690D842257F86FC1DB2AFB6614FD0");

	Params::Quest_12626_C_OnDlgClosed_F7E690D842257F86FC1DB2AFB6614FD0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12626.Quest_12626_C.OnDlgSelectedOption_F7E690D842257F86FC1DB2AFB6614FD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12626_C::OnDlgSelectedOption_F7E690D842257F86FC1DB2AFB6614FD0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12626_C", "OnDlgSelectedOption_F7E690D842257F86FC1DB2AFB6614FD0");

	Params::Quest_12626_C_OnDlgSelectedOption_F7E690D842257F86FC1DB2AFB6614FD0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
