#pragma once



// Package: Quest_7054

#include "Basic.hpp"

#include "Quest_7054_classes.hpp"
#include "Quest_7054_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7054.Quest_7054_C.ExecuteUbergraph_Quest_7054
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7054_C::ExecuteUbergraph_Quest_7054(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7054_C", "ExecuteUbergraph_Quest_7054");

	Params::Quest_7054_C_ExecuteUbergraph_Quest_7054 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7054.Quest_7054_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7054_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7054_C", "HandleFinishing");

	Params::Quest_7054_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7054.Quest_7054_C.OnFinished_469D42F24DB3A16712D35F84C828B23E
// (BlueprintCallable, BlueprintEvent)

void UQuest_7054_C::OnFinished_469D42F24DB3A16712D35F84C828B23E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7054_C", "OnFinished_469D42F24DB3A16712D35F84C828B23E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7054.Quest_7054_C.OnStop_469D42F24DB3A16712D35F84C828B23E
// (BlueprintCallable, BlueprintEvent)

void UQuest_7054_C::OnStop_469D42F24DB3A16712D35F84C828B23E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7054_C", "OnStop_469D42F24DB3A16712D35F84C828B23E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7054.Quest_7054_C.OnDlgClosed_CFBF592540A027BF9D6B29B27B8AFAD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7054_C::OnDlgClosed_CFBF592540A027BF9D6B29B27B8AFAD8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7054_C", "OnDlgClosed_CFBF592540A027BF9D6B29B27B8AFAD8");

	Params::Quest_7054_C_OnDlgClosed_CFBF592540A027BF9D6B29B27B8AFAD8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7054.Quest_7054_C.OnDlgSelectedOption_CFBF592540A027BF9D6B29B27B8AFAD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7054_C::OnDlgSelectedOption_CFBF592540A027BF9D6B29B27B8AFAD8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7054_C", "OnDlgSelectedOption_CFBF592540A027BF9D6B29B27B8AFAD8");

	Params::Quest_7054_C_OnDlgSelectedOption_CFBF592540A027BF9D6B29B27B8AFAD8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
