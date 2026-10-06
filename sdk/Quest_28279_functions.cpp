#pragma once



// Package: Quest_28279

#include "Basic.hpp"

#include "Quest_28279_classes.hpp"
#include "Quest_28279_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28279.Quest_28279_C.ExecuteUbergraph_Quest_28279
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28279_C::ExecuteUbergraph_Quest_28279(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "ExecuteUbergraph_Quest_28279");

	Params::Quest_28279_C_ExecuteUbergraph_Quest_28279 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28279.Quest_28279_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28279_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "HandleFinishing");

	Params::Quest_28279_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28279.Quest_28279_C.OnSuccess_320C73E24498457231B715A529B93C4A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28279_C::OnSuccess_320C73E24498457231B715A529B93C4A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnSuccess_320C73E24498457231B715A529B93C4A");

	Params::Quest_28279_C_OnSuccess_320C73E24498457231B715A529B93C4A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28279.Quest_28279_C.OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28279_C::OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76");

	Params::Quest_28279_C_OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28279.Quest_28279_C.OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28279_C::OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302");

	Params::Quest_28279_C_OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28279.Quest_28279_C.OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28279_C::OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03");

	Params::Quest_28279_C_OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28279.Quest_28279_C.OnFinished_5F2C4F3948AB9A6FB36ADD9D46DFD23B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28279_C::OnFinished_5F2C4F3948AB9A6FB36ADD9D46DFD23B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnFinished_5F2C4F3948AB9A6FB36ADD9D46DFD23B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28279.Quest_28279_C.OnStop_5F2C4F3948AB9A6FB36ADD9D46DFD23B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28279_C::OnStop_5F2C4F3948AB9A6FB36ADD9D46DFD23B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnStop_5F2C4F3948AB9A6FB36ADD9D46DFD23B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28279.Quest_28279_C.OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28279_C::OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7");

	Params::Quest_28279_C_OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28279.Quest_28279_C.OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28279_C::OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28279_C", "OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7");

	Params::Quest_28279_C_OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
