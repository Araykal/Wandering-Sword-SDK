#pragma once



// Package: Quest_5652

#include "Basic.hpp"

#include "Quest_5652_classes.hpp"
#include "Quest_5652_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5652.Quest_5652_C.ExecuteUbergraph_Quest_5652
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5652_C::ExecuteUbergraph_Quest_5652(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "ExecuteUbergraph_Quest_5652");

	Params::Quest_5652_C_ExecuteUbergraph_Quest_5652 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5652.Quest_5652_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5652_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "HandleFinishing");

	Params::Quest_5652_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5652.Quest_5652_C.OnSuccess_12A9EA5C4CCA49AB6A2859883F850CD4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5652_C::OnSuccess_12A9EA5C4CCA49AB6A2859883F850CD4(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnSuccess_12A9EA5C4CCA49AB6A2859883F850CD4");

	Params::Quest_5652_C_OnSuccess_12A9EA5C4CCA49AB6A2859883F850CD4 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5652.Quest_5652_C.OnSuccess_3092A2934CADAFB68B09B3B561A1C215
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5652_C::OnSuccess_3092A2934CADAFB68B09B3B561A1C215(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnSuccess_3092A2934CADAFB68B09B3B561A1C215");

	Params::Quest_5652_C_OnSuccess_3092A2934CADAFB68B09B3B561A1C215 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5652.Quest_5652_C.OnSuccess_D3BF59CD41A4B05D471397B8C6504D12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5652_C::OnSuccess_D3BF59CD41A4B05D471397B8C6504D12(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnSuccess_D3BF59CD41A4B05D471397B8C6504D12");

	Params::Quest_5652_C_OnSuccess_D3BF59CD41A4B05D471397B8C6504D12 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5652.Quest_5652_C.OnFinished_F3147D534EE20E4BDE306597842DB874
// (BlueprintCallable, BlueprintEvent)

void UQuest_5652_C::OnFinished_F3147D534EE20E4BDE306597842DB874()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnFinished_F3147D534EE20E4BDE306597842DB874");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5652.Quest_5652_C.OnStop_F3147D534EE20E4BDE306597842DB874
// (BlueprintCallable, BlueprintEvent)

void UQuest_5652_C::OnStop_F3147D534EE20E4BDE306597842DB874()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnStop_F3147D534EE20E4BDE306597842DB874");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5652.Quest_5652_C.OnDlgClosed_86756DD14977C325ACC2C19EF5087097
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5652_C::OnDlgClosed_86756DD14977C325ACC2C19EF5087097(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnDlgClosed_86756DD14977C325ACC2C19EF5087097");

	Params::Quest_5652_C_OnDlgClosed_86756DD14977C325ACC2C19EF5087097 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5652.Quest_5652_C.OnDlgSelectedOption_86756DD14977C325ACC2C19EF5087097
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5652_C::OnDlgSelectedOption_86756DD14977C325ACC2C19EF5087097(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnDlgSelectedOption_86756DD14977C325ACC2C19EF5087097");

	Params::Quest_5652_C_OnDlgSelectedOption_86756DD14977C325ACC2C19EF5087097 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5652.Quest_5652_C.OnSuccess_919013B1450A79ED60B778BD124870F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5652_C::OnSuccess_919013B1450A79ED60B778BD124870F5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5652_C", "OnSuccess_919013B1450A79ED60B778BD124870F5");

	Params::Quest_5652_C_OnSuccess_919013B1450A79ED60B778BD124870F5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
