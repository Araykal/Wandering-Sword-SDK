#pragma once



// Package: Quest_5172

#include "Basic.hpp"

#include "Quest_5172_classes.hpp"
#include "Quest_5172_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5172.Quest_5172_C.ExecuteUbergraph_Quest_5172
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5172_C::ExecuteUbergraph_Quest_5172(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5172_C", "ExecuteUbergraph_Quest_5172");

	Params::Quest_5172_C_ExecuteUbergraph_Quest_5172 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5172.Quest_5172_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5172_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5172_C", "End");

	Params::Quest_5172_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5172.Quest_5172_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5172_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5172_C", "HandleFinishing");

	Params::Quest_5172_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5172.Quest_5172_C.OnFinished_CF07CA9B43C7326C7D5B69A1FD6354D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5172_C::OnFinished_CF07CA9B43C7326C7D5B69A1FD6354D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5172_C", "OnFinished_CF07CA9B43C7326C7D5B69A1FD6354D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5172.Quest_5172_C.OnStop_CF07CA9B43C7326C7D5B69A1FD6354D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5172_C::OnStop_CF07CA9B43C7326C7D5B69A1FD6354D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5172_C", "OnStop_CF07CA9B43C7326C7D5B69A1FD6354D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5172.Quest_5172_C.OnDlgClosed_0CB6E8824CA8626C372597A156BFC6CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5172_C::OnDlgClosed_0CB6E8824CA8626C372597A156BFC6CD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5172_C", "OnDlgClosed_0CB6E8824CA8626C372597A156BFC6CD");

	Params::Quest_5172_C_OnDlgClosed_0CB6E8824CA8626C372597A156BFC6CD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5172.Quest_5172_C.OnDlgSelectedOption_0CB6E8824CA8626C372597A156BFC6CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5172_C::OnDlgSelectedOption_0CB6E8824CA8626C372597A156BFC6CD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5172_C", "OnDlgSelectedOption_0CB6E8824CA8626C372597A156BFC6CD");

	Params::Quest_5172_C_OnDlgSelectedOption_0CB6E8824CA8626C372597A156BFC6CD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
