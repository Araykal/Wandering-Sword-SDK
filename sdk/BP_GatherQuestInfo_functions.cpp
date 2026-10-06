#pragma once



// Package: BP_GatherQuestInfo

#include "Basic.hpp"

#include "BP_GatherQuestInfo_classes.hpp"
#include "BP_GatherQuestInfo_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.ExecuteUbergraph_BP_GatherQuestInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GatherQuestInfo_C::ExecuteUbergraph_BP_GatherQuestInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherQuestInfo_C", "ExecuteUbergraph_BP_GatherQuestInfo");

	Params::BP_GatherQuestInfo_C_ExecuteUbergraph_BP_GatherQuestInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.ParseParaments
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class FString>&            ParamentString                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GatherQuestInfo_C::ParseParaments(const TArray<class FString>& ParamentString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherQuestInfo_C", "ParseParaments");

	Params::BP_GatherQuestInfo_C_ParseParaments Parms{};

	Parms.ParamentString = std::move(ParamentString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.HandleProcessing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GatherQuestInfo_C::HandleProcessing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherQuestInfo_C", "HandleProcessing");

	Params::BP_GatherQuestInfo_C_HandleProcessing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBarWidget*               ProgressBar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GatherQuestInfo_C::OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92(class UProgressBarWidget* ProgressBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherQuestInfo_C", "OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92");

	Params::BP_GatherQuestInfo_C_OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92 Parms{};

	Parms.ProgressBar = ProgressBar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GatherQuestInfo_C::OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherQuestInfo_C", "OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85");

	Params::BP_GatherQuestInfo_C_OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GatherQuestInfo_C::OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherQuestInfo_C", "OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85");

	Params::BP_GatherQuestInfo_C_OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherQuestInfo.BP_GatherQuestInfo_C.IsProcessed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_GatherQuestInfo_C::IsProcessed(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherQuestInfo_C", "IsProcessed");

	Params::BP_GatherQuestInfo_C_IsProcessed Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
