#pragma once



// Package: Quest_5504

#include "Basic.hpp"

#include "Quest_5504_classes.hpp"
#include "Quest_5504_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5504.Quest_5504_C.ExecuteUbergraph_Quest_5504
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5504_C::ExecuteUbergraph_Quest_5504(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5504_C", "ExecuteUbergraph_Quest_5504");

	Params::Quest_5504_C_ExecuteUbergraph_Quest_5504 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5504.Quest_5504_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5504_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5504_C", "HandleFinishing");

	Params::Quest_5504_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5504.Quest_5504_C.OnSuccess_BF63341A4CE74CD3523DD9931391F1EF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5504_C::OnSuccess_BF63341A4CE74CD3523DD9931391F1EF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5504_C", "OnSuccess_BF63341A4CE74CD3523DD9931391F1EF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5504.Quest_5504_C.OnFinished_BBA2F38749E59D162CF3CE810D1D4D92
// (BlueprintCallable, BlueprintEvent)

void UQuest_5504_C::OnFinished_BBA2F38749E59D162CF3CE810D1D4D92()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5504_C", "OnFinished_BBA2F38749E59D162CF3CE810D1D4D92");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5504.Quest_5504_C.OnStop_BBA2F38749E59D162CF3CE810D1D4D92
// (BlueprintCallable, BlueprintEvent)

void UQuest_5504_C::OnStop_BBA2F38749E59D162CF3CE810D1D4D92()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5504_C", "OnStop_BBA2F38749E59D162CF3CE810D1D4D92");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5504.Quest_5504_C.OnDlgClosed_445BC30A46BBDE2F04D4B993B64F2938
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5504_C::OnDlgClosed_445BC30A46BBDE2F04D4B993B64F2938(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5504_C", "OnDlgClosed_445BC30A46BBDE2F04D4B993B64F2938");

	Params::Quest_5504_C_OnDlgClosed_445BC30A46BBDE2F04D4B993B64F2938 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5504.Quest_5504_C.OnDlgSelectedOption_445BC30A46BBDE2F04D4B993B64F2938
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5504_C::OnDlgSelectedOption_445BC30A46BBDE2F04D4B993B64F2938(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5504_C", "OnDlgSelectedOption_445BC30A46BBDE2F04D4B993B64F2938");

	Params::Quest_5504_C_OnDlgSelectedOption_445BC30A46BBDE2F04D4B993B64F2938 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
