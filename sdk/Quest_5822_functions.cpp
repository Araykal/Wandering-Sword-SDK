#pragma once



// Package: Quest_5822

#include "Basic.hpp"

#include "Quest_5822_classes.hpp"
#include "Quest_5822_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5822.Quest_5822_C.ExecuteUbergraph_Quest_5822
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5822_C::ExecuteUbergraph_Quest_5822(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5822_C", "ExecuteUbergraph_Quest_5822");

	Params::Quest_5822_C_ExecuteUbergraph_Quest_5822 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5822.Quest_5822_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5822_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5822_C", "HandleFinishing");

	Params::Quest_5822_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5822.Quest_5822_C.OnSuccess_F4EFFC80492B8ECD5322FB91E7B53584
// (BlueprintCallable, BlueprintEvent)

void UQuest_5822_C::OnSuccess_F4EFFC80492B8ECD5322FB91E7B53584()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5822_C", "OnSuccess_F4EFFC80492B8ECD5322FB91E7B53584");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5822.Quest_5822_C.OnFinished_F0F5468A4499DF3B715E8AA3F438DB37
// (BlueprintCallable, BlueprintEvent)

void UQuest_5822_C::OnFinished_F0F5468A4499DF3B715E8AA3F438DB37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5822_C", "OnFinished_F0F5468A4499DF3B715E8AA3F438DB37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5822.Quest_5822_C.OnStop_F0F5468A4499DF3B715E8AA3F438DB37
// (BlueprintCallable, BlueprintEvent)

void UQuest_5822_C::OnStop_F0F5468A4499DF3B715E8AA3F438DB37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5822_C", "OnStop_F0F5468A4499DF3B715E8AA3F438DB37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5822.Quest_5822_C.OnDlgClosed_39C7A7794C53698A60A7B599315119C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5822_C::OnDlgClosed_39C7A7794C53698A60A7B599315119C0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5822_C", "OnDlgClosed_39C7A7794C53698A60A7B599315119C0");

	Params::Quest_5822_C_OnDlgClosed_39C7A7794C53698A60A7B599315119C0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5822.Quest_5822_C.OnDlgSelectedOption_39C7A7794C53698A60A7B599315119C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5822_C::OnDlgSelectedOption_39C7A7794C53698A60A7B599315119C0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5822_C", "OnDlgSelectedOption_39C7A7794C53698A60A7B599315119C0");

	Params::Quest_5822_C_OnDlgSelectedOption_39C7A7794C53698A60A7B599315119C0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
