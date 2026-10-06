#pragma once



// Package: Quest_5620

#include "Basic.hpp"

#include "Quest_5620_classes.hpp"
#include "Quest_5620_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5620.Quest_5620_C.ExecuteUbergraph_Quest_5620
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5620_C::ExecuteUbergraph_Quest_5620(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5620_C", "ExecuteUbergraph_Quest_5620");

	Params::Quest_5620_C_ExecuteUbergraph_Quest_5620 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5620.Quest_5620_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5620_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5620_C", "HandleFinishing");

	Params::Quest_5620_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5620.Quest_5620_C.OnSuccess_33F6F8FD42809E1005B9A09E74E57B28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5620_C::OnSuccess_33F6F8FD42809E1005B9A09E74E57B28(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5620_C", "OnSuccess_33F6F8FD42809E1005B9A09E74E57B28");

	Params::Quest_5620_C_OnSuccess_33F6F8FD42809E1005B9A09E74E57B28 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5620.Quest_5620_C.OnFinished_E869F083477CAE34E531558C59A90334
// (BlueprintCallable, BlueprintEvent)

void UQuest_5620_C::OnFinished_E869F083477CAE34E531558C59A90334()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5620_C", "OnFinished_E869F083477CAE34E531558C59A90334");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5620.Quest_5620_C.OnStop_E869F083477CAE34E531558C59A90334
// (BlueprintCallable, BlueprintEvent)

void UQuest_5620_C::OnStop_E869F083477CAE34E531558C59A90334()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5620_C", "OnStop_E869F083477CAE34E531558C59A90334");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5620.Quest_5620_C.OnDlgClosed_5B8A478E424576D152C9E8A49D75076A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5620_C::OnDlgClosed_5B8A478E424576D152C9E8A49D75076A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5620_C", "OnDlgClosed_5B8A478E424576D152C9E8A49D75076A");

	Params::Quest_5620_C_OnDlgClosed_5B8A478E424576D152C9E8A49D75076A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5620.Quest_5620_C.OnDlgSelectedOption_5B8A478E424576D152C9E8A49D75076A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5620_C::OnDlgSelectedOption_5B8A478E424576D152C9E8A49D75076A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5620_C", "OnDlgSelectedOption_5B8A478E424576D152C9E8A49D75076A");

	Params::Quest_5620_C_OnDlgSelectedOption_5B8A478E424576D152C9E8A49D75076A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
