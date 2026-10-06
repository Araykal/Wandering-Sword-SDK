#pragma once



// Package: BP_LessonQuestInfo

#include "Basic.hpp"

#include "BP_LessonQuestInfo_classes.hpp"
#include "BP_LessonQuestInfo_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.ExecuteUbergraph_BP_LessonQuestInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::ExecuteUbergraph_BP_LessonQuestInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "ExecuteUbergraph_BP_LessonQuestInfo");

	Params::BP_LessonQuestInfo_C_ExecuteUbergraph_BP_LessonQuestInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.HandleProcessedFail
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::HandleProcessedFail(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "HandleProcessedFail");

	Params::BP_LessonQuestInfo_C_HandleProcessedFail Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.HandleProcessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::HandleProcessed(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "HandleProcessed");

	Params::BP_LessonQuestInfo_C_HandleProcessed Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.ParseParaments
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class FString>&            ParamentString                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_LessonQuestInfo_C::ParseParaments(const TArray<class FString>& ParamentString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "ParseParaments");

	Params::BP_LessonQuestInfo_C_ParseParaments Parms{};

	Parms.ParamentString = std::move(ParamentString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.HandleProcessing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::HandleProcessing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "HandleProcessing");

	Params::BP_LessonQuestInfo_C_HandleProcessing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870");

	Params::BP_LessonQuestInfo_C_OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870");

	Params::BP_LessonQuestInfo_C_OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgClosed_CF8BBF934B3F668300C9B98541623C88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::OnDlgClosed_CF8BBF934B3F668300C9B98541623C88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "OnDlgClosed_CF8BBF934B3F668300C9B98541623C88");

	Params::BP_LessonQuestInfo_C_OnDlgClosed_CF8BBF934B3F668300C9B98541623C88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88");

	Params::BP_LessonQuestInfo_C_OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnSuccess_312C1AF6432F3AB366B271865EDD234C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LessonQuestInfo_C::OnSuccess_312C1AF6432F3AB366B271865EDD234C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "OnSuccess_312C1AF6432F3AB366B271865EDD234C");

	Params::BP_LessonQuestInfo_C_OnSuccess_312C1AF6432F3AB366B271865EDD234C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgClosed_607D4657431280E79B61DF97FAC27207
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::OnDlgClosed_607D4657431280E79B61DF97FAC27207(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "OnDlgClosed_607D4657431280E79B61DF97FAC27207");

	Params::BP_LessonQuestInfo_C_OnDlgClosed_607D4657431280E79B61DF97FAC27207 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LessonQuestInfo_C::OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207");

	Params::BP_LessonQuestInfo_C_OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LessonQuestInfo.BP_LessonQuestInfo_C.IsProcessed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_LessonQuestInfo_C::IsProcessed(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LessonQuestInfo_C", "IsProcessed");

	Params::BP_LessonQuestInfo_C_IsProcessed Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
