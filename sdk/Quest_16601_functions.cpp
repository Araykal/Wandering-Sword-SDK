#pragma once



// Package: Quest_16601

#include "Basic.hpp"

#include "Quest_16601_classes.hpp"
#include "Quest_16601_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16601.Quest_16601_C.ExecuteUbergraph_Quest_16601
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16601_C::ExecuteUbergraph_Quest_16601(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "ExecuteUbergraph_Quest_16601");

	Params::Quest_16601_C_ExecuteUbergraph_Quest_16601 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16601.Quest_16601_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16601_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "HandleFinishing");

	Params::Quest_16601_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16601.Quest_16601_C.OnSuccess_6FD43ED14172DEFE9A4C23ADEF49918C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16601_C::OnSuccess_6FD43ED14172DEFE9A4C23ADEF49918C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "OnSuccess_6FD43ED14172DEFE9A4C23ADEF49918C");

	Params::Quest_16601_C_OnSuccess_6FD43ED14172DEFE9A4C23ADEF49918C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16601.Quest_16601_C.OnFinished_47A6FE2344D27A6A25F82B9409EE804E
// (BlueprintCallable, BlueprintEvent)

void UQuest_16601_C::OnFinished_47A6FE2344D27A6A25F82B9409EE804E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "OnFinished_47A6FE2344D27A6A25F82B9409EE804E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16601.Quest_16601_C.OnStop_47A6FE2344D27A6A25F82B9409EE804E
// (BlueprintCallable, BlueprintEvent)

void UQuest_16601_C::OnStop_47A6FE2344D27A6A25F82B9409EE804E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "OnStop_47A6FE2344D27A6A25F82B9409EE804E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16601.Quest_16601_C.OnDlgClosed_818A88D242389A4BA0449F9FFC1A1329
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16601_C::OnDlgClosed_818A88D242389A4BA0449F9FFC1A1329(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "OnDlgClosed_818A88D242389A4BA0449F9FFC1A1329");

	Params::Quest_16601_C_OnDlgClosed_818A88D242389A4BA0449F9FFC1A1329 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16601.Quest_16601_C.OnDlgSelectedOption_818A88D242389A4BA0449F9FFC1A1329
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16601_C::OnDlgSelectedOption_818A88D242389A4BA0449F9FFC1A1329(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "OnDlgSelectedOption_818A88D242389A4BA0449F9FFC1A1329");

	Params::Quest_16601_C_OnDlgSelectedOption_818A88D242389A4BA0449F9FFC1A1329 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16601.Quest_16601_C.OnSuccess_2BE7EF04465DE251A7BD2981F295077B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16601_C::OnSuccess_2BE7EF04465DE251A7BD2981F295077B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16601_C", "OnSuccess_2BE7EF04465DE251A7BD2981F295077B");

	Params::Quest_16601_C_OnSuccess_2BE7EF04465DE251A7BD2981F295077B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
