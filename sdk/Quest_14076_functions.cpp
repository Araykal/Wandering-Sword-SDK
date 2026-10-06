#pragma once



// Package: Quest_14076

#include "Basic.hpp"

#include "Quest_14076_classes.hpp"
#include "Quest_14076_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14076.Quest_14076_C.ExecuteUbergraph_Quest_14076
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14076_C::ExecuteUbergraph_Quest_14076(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14076_C", "ExecuteUbergraph_Quest_14076");

	Params::Quest_14076_C_ExecuteUbergraph_Quest_14076 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14076.Quest_14076_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14076_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14076_C", "HandleFinishing");

	Params::Quest_14076_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14076.Quest_14076_C.OnFinished_506D256448CBFB0DBC92A0B9B1812618
// (BlueprintCallable, BlueprintEvent)

void UQuest_14076_C::OnFinished_506D256448CBFB0DBC92A0B9B1812618()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14076_C", "OnFinished_506D256448CBFB0DBC92A0B9B1812618");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14076.Quest_14076_C.OnStop_506D256448CBFB0DBC92A0B9B1812618
// (BlueprintCallable, BlueprintEvent)

void UQuest_14076_C::OnStop_506D256448CBFB0DBC92A0B9B1812618()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14076_C", "OnStop_506D256448CBFB0DBC92A0B9B1812618");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14076.Quest_14076_C.OnDlgClosed_9129B88E4B19810D24D9B9BFFC9095B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14076_C::OnDlgClosed_9129B88E4B19810D24D9B9BFFC9095B8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14076_C", "OnDlgClosed_9129B88E4B19810D24D9B9BFFC9095B8");

	Params::Quest_14076_C_OnDlgClosed_9129B88E4B19810D24D9B9BFFC9095B8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14076.Quest_14076_C.OnDlgSelectedOption_9129B88E4B19810D24D9B9BFFC9095B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14076_C::OnDlgSelectedOption_9129B88E4B19810D24D9B9BFFC9095B8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14076_C", "OnDlgSelectedOption_9129B88E4B19810D24D9B9BFFC9095B8");

	Params::Quest_14076_C_OnDlgSelectedOption_9129B88E4B19810D24D9B9BFFC9095B8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
