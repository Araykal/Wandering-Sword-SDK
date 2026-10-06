#pragma once



// Package: Quest_28230

#include "Basic.hpp"

#include "Quest_28230_classes.hpp"
#include "Quest_28230_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28230.Quest_28230_C.ExecuteUbergraph_Quest_28230
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28230_C::ExecuteUbergraph_Quest_28230(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28230_C", "ExecuteUbergraph_Quest_28230");

	Params::Quest_28230_C_ExecuteUbergraph_Quest_28230 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28230.Quest_28230_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28230_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28230_C", "HandleFinishing");

	Params::Quest_28230_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28230.Quest_28230_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_28230_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28230_C", "End");

	Params::Quest_28230_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28230.Quest_28230_C.OnFinished_4641943B4C468F388360C88496CA7B6F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28230_C::OnFinished_4641943B4C468F388360C88496CA7B6F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28230_C", "OnFinished_4641943B4C468F388360C88496CA7B6F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28230.Quest_28230_C.OnStop_4641943B4C468F388360C88496CA7B6F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28230_C::OnStop_4641943B4C468F388360C88496CA7B6F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28230_C", "OnStop_4641943B4C468F388360C88496CA7B6F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28230.Quest_28230_C.OnDlgClosed_FDF1B29747A00CA06DCBE2B5B422576B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28230_C::OnDlgClosed_FDF1B29747A00CA06DCBE2B5B422576B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28230_C", "OnDlgClosed_FDF1B29747A00CA06DCBE2B5B422576B");

	Params::Quest_28230_C_OnDlgClosed_FDF1B29747A00CA06DCBE2B5B422576B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28230.Quest_28230_C.OnDlgSelectedOption_FDF1B29747A00CA06DCBE2B5B422576B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28230_C::OnDlgSelectedOption_FDF1B29747A00CA06DCBE2B5B422576B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28230_C", "OnDlgSelectedOption_FDF1B29747A00CA06DCBE2B5B422576B");

	Params::Quest_28230_C_OnDlgSelectedOption_FDF1B29747A00CA06DCBE2B5B422576B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
