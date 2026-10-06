#pragma once



// Package: Quest_30754

#include "Basic.hpp"

#include "Quest_30754_classes.hpp"
#include "Quest_30754_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30754.Quest_30754_C.ExecuteUbergraph_Quest_30754
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30754_C::ExecuteUbergraph_Quest_30754(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30754_C", "ExecuteUbergraph_Quest_30754");

	Params::Quest_30754_C_ExecuteUbergraph_Quest_30754 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30754.Quest_30754_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30754_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30754_C", "HandleFinishing");

	Params::Quest_30754_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30754.Quest_30754_C.OnSuccess_7132D61645A7BE01E93B2CA47A8F8551
// (BlueprintCallable, BlueprintEvent)

void UQuest_30754_C::OnSuccess_7132D61645A7BE01E93B2CA47A8F8551()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30754_C", "OnSuccess_7132D61645A7BE01E93B2CA47A8F8551");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30754.Quest_30754_C.OnFinished_569CE38F494FD05739E7689D59EA6138
// (BlueprintCallable, BlueprintEvent)

void UQuest_30754_C::OnFinished_569CE38F494FD05739E7689D59EA6138()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30754_C", "OnFinished_569CE38F494FD05739E7689D59EA6138");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30754.Quest_30754_C.OnStop_569CE38F494FD05739E7689D59EA6138
// (BlueprintCallable, BlueprintEvent)

void UQuest_30754_C::OnStop_569CE38F494FD05739E7689D59EA6138()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30754_C", "OnStop_569CE38F494FD05739E7689D59EA6138");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30754.Quest_30754_C.OnDlgClosed_0F7981D9495FBC332CDE34B667F369CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30754_C::OnDlgClosed_0F7981D9495FBC332CDE34B667F369CD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30754_C", "OnDlgClosed_0F7981D9495FBC332CDE34B667F369CD");

	Params::Quest_30754_C_OnDlgClosed_0F7981D9495FBC332CDE34B667F369CD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30754.Quest_30754_C.OnDlgSelectedOption_0F7981D9495FBC332CDE34B667F369CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30754_C::OnDlgSelectedOption_0F7981D9495FBC332CDE34B667F369CD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30754_C", "OnDlgSelectedOption_0F7981D9495FBC332CDE34B667F369CD");

	Params::Quest_30754_C_OnDlgSelectedOption_0F7981D9495FBC332CDE34B667F369CD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
