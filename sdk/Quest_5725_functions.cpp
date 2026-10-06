#pragma once



// Package: Quest_5725

#include "Basic.hpp"

#include "Quest_5725_classes.hpp"
#include "Quest_5725_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5725.Quest_5725_C.ExecuteUbergraph_Quest_5725
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5725_C::ExecuteUbergraph_Quest_5725(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5725_C", "ExecuteUbergraph_Quest_5725");

	Params::Quest_5725_C_ExecuteUbergraph_Quest_5725 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5725.Quest_5725_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5725_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5725_C", "HandleFinishing");

	Params::Quest_5725_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5725.Quest_5725_C.OnFinished_09CCDF05461D03163B5C40A45AE512A5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5725_C::OnFinished_09CCDF05461D03163B5C40A45AE512A5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5725_C", "OnFinished_09CCDF05461D03163B5C40A45AE512A5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5725.Quest_5725_C.OnStop_09CCDF05461D03163B5C40A45AE512A5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5725_C::OnStop_09CCDF05461D03163B5C40A45AE512A5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5725_C", "OnStop_09CCDF05461D03163B5C40A45AE512A5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5725.Quest_5725_C.OnDlgClosed_D1881A054FBE8F5C8DD821AFB9D684C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5725_C::OnDlgClosed_D1881A054FBE8F5C8DD821AFB9D684C9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5725_C", "OnDlgClosed_D1881A054FBE8F5C8DD821AFB9D684C9");

	Params::Quest_5725_C_OnDlgClosed_D1881A054FBE8F5C8DD821AFB9D684C9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5725.Quest_5725_C.OnDlgSelectedOption_D1881A054FBE8F5C8DD821AFB9D684C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5725_C::OnDlgSelectedOption_D1881A054FBE8F5C8DD821AFB9D684C9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5725_C", "OnDlgSelectedOption_D1881A054FBE8F5C8DD821AFB9D684C9");

	Params::Quest_5725_C_OnDlgSelectedOption_D1881A054FBE8F5C8DD821AFB9D684C9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
