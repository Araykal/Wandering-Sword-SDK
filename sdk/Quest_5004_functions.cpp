#pragma once



// Package: Quest_5004

#include "Basic.hpp"

#include "Quest_5004_classes.hpp"
#include "Quest_5004_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5004.Quest_5004_C.ExecuteUbergraph_Quest_5004
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5004_C::ExecuteUbergraph_Quest_5004(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5004_C", "ExecuteUbergraph_Quest_5004");

	Params::Quest_5004_C_ExecuteUbergraph_Quest_5004 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5004.Quest_5004_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5004_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5004_C", "HandleFinishing");

	Params::Quest_5004_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5004.Quest_5004_C.OnFinished_7FCCED554A33344C535734810D7955A4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5004_C::OnFinished_7FCCED554A33344C535734810D7955A4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5004_C", "OnFinished_7FCCED554A33344C535734810D7955A4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5004.Quest_5004_C.OnStop_7FCCED554A33344C535734810D7955A4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5004_C::OnStop_7FCCED554A33344C535734810D7955A4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5004_C", "OnStop_7FCCED554A33344C535734810D7955A4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5004.Quest_5004_C.OnDlgClosed_154272474FE2735087A38A896F5F6BD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5004_C::OnDlgClosed_154272474FE2735087A38A896F5F6BD9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5004_C", "OnDlgClosed_154272474FE2735087A38A896F5F6BD9");

	Params::Quest_5004_C_OnDlgClosed_154272474FE2735087A38A896F5F6BD9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5004.Quest_5004_C.OnDlgSelectedOption_154272474FE2735087A38A896F5F6BD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5004_C::OnDlgSelectedOption_154272474FE2735087A38A896F5F6BD9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5004_C", "OnDlgSelectedOption_154272474FE2735087A38A896F5F6BD9");

	Params::Quest_5004_C_OnDlgSelectedOption_154272474FE2735087A38A896F5F6BD9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
