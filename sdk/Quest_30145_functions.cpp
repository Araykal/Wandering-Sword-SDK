#pragma once



// Package: Quest_30145

#include "Basic.hpp"

#include "Quest_30145_classes.hpp"
#include "Quest_30145_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30145.Quest_30145_C.ExecuteUbergraph_Quest_30145
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30145_C::ExecuteUbergraph_Quest_30145(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30145_C", "ExecuteUbergraph_Quest_30145");

	Params::Quest_30145_C_ExecuteUbergraph_Quest_30145 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30145.Quest_30145_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30145_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30145_C", "HandleFinishing");

	Params::Quest_30145_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30145.Quest_30145_C.OnFinished_A54E0D6A4941AB7282C62A9474FE558F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30145_C::OnFinished_A54E0D6A4941AB7282C62A9474FE558F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30145_C", "OnFinished_A54E0D6A4941AB7282C62A9474FE558F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30145.Quest_30145_C.OnStop_A54E0D6A4941AB7282C62A9474FE558F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30145_C::OnStop_A54E0D6A4941AB7282C62A9474FE558F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30145_C", "OnStop_A54E0D6A4941AB7282C62A9474FE558F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30145.Quest_30145_C.OnDlgClosed_72489B3C4C1E6CFCB54A8EACF6563CE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30145_C::OnDlgClosed_72489B3C4C1E6CFCB54A8EACF6563CE1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30145_C", "OnDlgClosed_72489B3C4C1E6CFCB54A8EACF6563CE1");

	Params::Quest_30145_C_OnDlgClosed_72489B3C4C1E6CFCB54A8EACF6563CE1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30145.Quest_30145_C.OnDlgSelectedOption_72489B3C4C1E6CFCB54A8EACF6563CE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30145_C::OnDlgSelectedOption_72489B3C4C1E6CFCB54A8EACF6563CE1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30145_C", "OnDlgSelectedOption_72489B3C4C1E6CFCB54A8EACF6563CE1");

	Params::Quest_30145_C_OnDlgSelectedOption_72489B3C4C1E6CFCB54A8EACF6563CE1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
