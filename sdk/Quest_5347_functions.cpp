#pragma once



// Package: Quest_5347

#include "Basic.hpp"

#include "Quest_5347_classes.hpp"
#include "Quest_5347_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5347.Quest_5347_C.ExecuteUbergraph_Quest_5347
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5347_C::ExecuteUbergraph_Quest_5347(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5347_C", "ExecuteUbergraph_Quest_5347");

	Params::Quest_5347_C_ExecuteUbergraph_Quest_5347 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5347.Quest_5347_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5347_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5347_C", "HandleFinishing");

	Params::Quest_5347_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5347.Quest_5347_C.OnDlgClosed_6F544A5145CEDA59E3024EB8A757D66B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5347_C::OnDlgClosed_6F544A5145CEDA59E3024EB8A757D66B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5347_C", "OnDlgClosed_6F544A5145CEDA59E3024EB8A757D66B");

	Params::Quest_5347_C_OnDlgClosed_6F544A5145CEDA59E3024EB8A757D66B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5347.Quest_5347_C.OnDlgSelectedOption_6F544A5145CEDA59E3024EB8A757D66B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5347_C::OnDlgSelectedOption_6F544A5145CEDA59E3024EB8A757D66B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5347_C", "OnDlgSelectedOption_6F544A5145CEDA59E3024EB8A757D66B");

	Params::Quest_5347_C_OnDlgSelectedOption_6F544A5145CEDA59E3024EB8A757D66B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5347.Quest_5347_C.OnFinished_5C4F893747CF6CE94E6DACB5DFC2B34E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5347_C::OnFinished_5C4F893747CF6CE94E6DACB5DFC2B34E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5347_C", "OnFinished_5C4F893747CF6CE94E6DACB5DFC2B34E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5347.Quest_5347_C.OnStop_5C4F893747CF6CE94E6DACB5DFC2B34E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5347_C::OnStop_5C4F893747CF6CE94E6DACB5DFC2B34E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5347_C", "OnStop_5C4F893747CF6CE94E6DACB5DFC2B34E");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
