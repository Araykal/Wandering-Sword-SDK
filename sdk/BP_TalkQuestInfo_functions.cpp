#pragma once



// Package: BP_TalkQuestInfo

#include "Basic.hpp"

#include "BP_TalkQuestInfo_classes.hpp"
#include "BP_TalkQuestInfo_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.ExecuteUbergraph_BP_TalkQuestInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TalkQuestInfo_C::ExecuteUbergraph_BP_TalkQuestInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkQuestInfo_C", "ExecuteUbergraph_BP_TalkQuestInfo");

	Params::BP_TalkQuestInfo_C_ExecuteUbergraph_BP_TalkQuestInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.ParseParaments
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class FString>&            ParamentString                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TalkQuestInfo_C::ParseParaments(const TArray<class FString>& ParamentString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkQuestInfo_C", "ParseParaments");

	Params::BP_TalkQuestInfo_C_ParseParaments Parms{};

	Parms.ParamentString = std::move(ParamentString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.HandleProcessing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TalkQuestInfo_C::HandleProcessing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkQuestInfo_C", "HandleProcessing");

	Params::BP_TalkQuestInfo_C_HandleProcessing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.OnDlgClosed_852DBC404ECC542C9B61818F6181A259
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TalkQuestInfo_C::OnDlgClosed_852DBC404ECC542C9B61818F6181A259(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkQuestInfo_C", "OnDlgClosed_852DBC404ECC542C9B61818F6181A259");

	Params::BP_TalkQuestInfo_C_OnDlgClosed_852DBC404ECC542C9B61818F6181A259 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TalkQuestInfo_C::OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkQuestInfo_C", "OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259");

	Params::BP_TalkQuestInfo_C_OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkQuestInfo.BP_TalkQuestInfo_C.IsProcessed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_TalkQuestInfo_C::IsProcessed(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkQuestInfo_C", "IsProcessed");

	Params::BP_TalkQuestInfo_C_IsProcessed Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
