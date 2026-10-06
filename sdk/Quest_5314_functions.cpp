#pragma once



// Package: Quest_5314

#include "Basic.hpp"

#include "Quest_5314_classes.hpp"
#include "Quest_5314_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5314.Quest_5314_C.ExecuteUbergraph_Quest_5314
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5314_C::ExecuteUbergraph_Quest_5314(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "ExecuteUbergraph_Quest_5314");

	Params::Quest_5314_C_ExecuteUbergraph_Quest_5314 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5314.Quest_5314_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5314_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "HandleFinishing");

	Params::Quest_5314_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5314.Quest_5314_C.OnSuccess_141ABA4A48B3C41F068D8085BE528044
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5314_C::OnSuccess_141ABA4A48B3C41F068D8085BE528044(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "OnSuccess_141ABA4A48B3C41F068D8085BE528044");

	Params::Quest_5314_C_OnSuccess_141ABA4A48B3C41F068D8085BE528044 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5314.Quest_5314_C.OnFinished_EB64B591408DD699E47D279AFD3CB875
// (BlueprintCallable, BlueprintEvent)

void UQuest_5314_C::OnFinished_EB64B591408DD699E47D279AFD3CB875()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "OnFinished_EB64B591408DD699E47D279AFD3CB875");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5314.Quest_5314_C.OnStop_EB64B591408DD699E47D279AFD3CB875
// (BlueprintCallable, BlueprintEvent)

void UQuest_5314_C::OnStop_EB64B591408DD699E47D279AFD3CB875()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "OnStop_EB64B591408DD699E47D279AFD3CB875");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5314.Quest_5314_C.OnDlgClosed_51F94E3A4F042916B32A229F874F2D66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5314_C::OnDlgClosed_51F94E3A4F042916B32A229F874F2D66(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "OnDlgClosed_51F94E3A4F042916B32A229F874F2D66");

	Params::Quest_5314_C_OnDlgClosed_51F94E3A4F042916B32A229F874F2D66 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5314.Quest_5314_C.OnDlgSelectedOption_51F94E3A4F042916B32A229F874F2D66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5314_C::OnDlgSelectedOption_51F94E3A4F042916B32A229F874F2D66(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "OnDlgSelectedOption_51F94E3A4F042916B32A229F874F2D66");

	Params::Quest_5314_C_OnDlgSelectedOption_51F94E3A4F042916B32A229F874F2D66 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5314.Quest_5314_C.OnSuccess_378768A640A6C4880D2699B26BECD55C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5314_C::OnSuccess_378768A640A6C4880D2699B26BECD55C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5314_C", "OnSuccess_378768A640A6C4880D2699B26BECD55C");

	Params::Quest_5314_C_OnSuccess_378768A640A6C4880D2699B26BECD55C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
