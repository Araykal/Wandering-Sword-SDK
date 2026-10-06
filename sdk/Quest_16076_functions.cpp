#pragma once



// Package: Quest_16076

#include "Basic.hpp"

#include "Quest_16076_classes.hpp"
#include "Quest_16076_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16076.Quest_16076_C.ExecuteUbergraph_Quest_16076
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16076_C::ExecuteUbergraph_Quest_16076(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16076_C", "ExecuteUbergraph_Quest_16076");

	Params::Quest_16076_C_ExecuteUbergraph_Quest_16076 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16076.Quest_16076_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16076_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16076_C", "HandleFinishing");

	Params::Quest_16076_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16076.Quest_16076_C.OnFinished_03AE098540B8FAE1F1225791E27D9E56
// (BlueprintCallable, BlueprintEvent)

void UQuest_16076_C::OnFinished_03AE098540B8FAE1F1225791E27D9E56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16076_C", "OnFinished_03AE098540B8FAE1F1225791E27D9E56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16076.Quest_16076_C.OnStop_03AE098540B8FAE1F1225791E27D9E56
// (BlueprintCallable, BlueprintEvent)

void UQuest_16076_C::OnStop_03AE098540B8FAE1F1225791E27D9E56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16076_C", "OnStop_03AE098540B8FAE1F1225791E27D9E56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16076.Quest_16076_C.OnDlgClosed_771AAB5B4BCFA65CFB5063BBCCBD64BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16076_C::OnDlgClosed_771AAB5B4BCFA65CFB5063BBCCBD64BE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16076_C", "OnDlgClosed_771AAB5B4BCFA65CFB5063BBCCBD64BE");

	Params::Quest_16076_C_OnDlgClosed_771AAB5B4BCFA65CFB5063BBCCBD64BE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16076.Quest_16076_C.OnDlgSelectedOption_771AAB5B4BCFA65CFB5063BBCCBD64BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16076_C::OnDlgSelectedOption_771AAB5B4BCFA65CFB5063BBCCBD64BE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16076_C", "OnDlgSelectedOption_771AAB5B4BCFA65CFB5063BBCCBD64BE");

	Params::Quest_16076_C_OnDlgSelectedOption_771AAB5B4BCFA65CFB5063BBCCBD64BE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
