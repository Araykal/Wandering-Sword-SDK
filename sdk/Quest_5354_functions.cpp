#pragma once



// Package: Quest_5354

#include "Basic.hpp"

#include "Quest_5354_classes.hpp"
#include "Quest_5354_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5354.Quest_5354_C.ExecuteUbergraph_Quest_5354
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5354_C::ExecuteUbergraph_Quest_5354(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5354_C", "ExecuteUbergraph_Quest_5354");

	Params::Quest_5354_C_ExecuteUbergraph_Quest_5354 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5354.Quest_5354_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5354_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5354_C", "HandleFinishing");

	Params::Quest_5354_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5354.Quest_5354_C.OnSuccess_58F2721B4087C3829BDE81BD81D6E69F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5354_C::OnSuccess_58F2721B4087C3829BDE81BD81D6E69F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5354_C", "OnSuccess_58F2721B4087C3829BDE81BD81D6E69F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5354.Quest_5354_C.OnFinished_07BBAF7A4F49C1A91BFD70B07884CC2F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5354_C::OnFinished_07BBAF7A4F49C1A91BFD70B07884CC2F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5354_C", "OnFinished_07BBAF7A4F49C1A91BFD70B07884CC2F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5354.Quest_5354_C.OnStop_07BBAF7A4F49C1A91BFD70B07884CC2F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5354_C::OnStop_07BBAF7A4F49C1A91BFD70B07884CC2F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5354_C", "OnStop_07BBAF7A4F49C1A91BFD70B07884CC2F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5354.Quest_5354_C.OnDlgClosed_E66401E54118B93B31A0F598ECBC13F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5354_C::OnDlgClosed_E66401E54118B93B31A0F598ECBC13F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5354_C", "OnDlgClosed_E66401E54118B93B31A0F598ECBC13F6");

	Params::Quest_5354_C_OnDlgClosed_E66401E54118B93B31A0F598ECBC13F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5354.Quest_5354_C.OnDlgSelectedOption_E66401E54118B93B31A0F598ECBC13F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5354_C::OnDlgSelectedOption_E66401E54118B93B31A0F598ECBC13F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5354_C", "OnDlgSelectedOption_E66401E54118B93B31A0F598ECBC13F6");

	Params::Quest_5354_C_OnDlgSelectedOption_E66401E54118B93B31A0F598ECBC13F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
