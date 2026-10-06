#pragma once



// Package: Quest_28741

#include "Basic.hpp"

#include "Quest_28741_classes.hpp"
#include "Quest_28741_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28741.Quest_28741_C.ExecuteUbergraph_Quest_28741
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28741_C::ExecuteUbergraph_Quest_28741(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28741_C", "ExecuteUbergraph_Quest_28741");

	Params::Quest_28741_C_ExecuteUbergraph_Quest_28741 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28741.Quest_28741_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28741_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28741_C", "HandleFinishing");

	Params::Quest_28741_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28741.Quest_28741_C.OnFinished_679DF7E14C1432D34E48FC9548A6DE89
// (BlueprintCallable, BlueprintEvent)

void UQuest_28741_C::OnFinished_679DF7E14C1432D34E48FC9548A6DE89()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28741_C", "OnFinished_679DF7E14C1432D34E48FC9548A6DE89");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28741.Quest_28741_C.OnStop_679DF7E14C1432D34E48FC9548A6DE89
// (BlueprintCallable, BlueprintEvent)

void UQuest_28741_C::OnStop_679DF7E14C1432D34E48FC9548A6DE89()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28741_C", "OnStop_679DF7E14C1432D34E48FC9548A6DE89");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28741.Quest_28741_C.OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28741_C::OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28741_C", "OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC");

	Params::Quest_28741_C_OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28741.Quest_28741_C.OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28741_C::OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28741_C", "OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC");

	Params::Quest_28741_C_OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
