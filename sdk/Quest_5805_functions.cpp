#pragma once



// Package: Quest_5805

#include "Basic.hpp"

#include "Quest_5805_classes.hpp"
#include "Quest_5805_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5805.Quest_5805_C.ExecuteUbergraph_Quest_5805
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5805_C::ExecuteUbergraph_Quest_5805(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5805_C", "ExecuteUbergraph_Quest_5805");

	Params::Quest_5805_C_ExecuteUbergraph_Quest_5805 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5805.Quest_5805_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5805_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5805_C", "HandleFinishing");

	Params::Quest_5805_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5805.Quest_5805_C.OnSuccess_413CDB534CC431911EF83CB597E94C33
// (BlueprintCallable, BlueprintEvent)

void UQuest_5805_C::OnSuccess_413CDB534CC431911EF83CB597E94C33()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5805_C", "OnSuccess_413CDB534CC431911EF83CB597E94C33");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5805.Quest_5805_C.OnFinished_B55BCA47449FFDECFA5F88AD1B832311
// (BlueprintCallable, BlueprintEvent)

void UQuest_5805_C::OnFinished_B55BCA47449FFDECFA5F88AD1B832311()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5805_C", "OnFinished_B55BCA47449FFDECFA5F88AD1B832311");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5805.Quest_5805_C.OnStop_B55BCA47449FFDECFA5F88AD1B832311
// (BlueprintCallable, BlueprintEvent)

void UQuest_5805_C::OnStop_B55BCA47449FFDECFA5F88AD1B832311()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5805_C", "OnStop_B55BCA47449FFDECFA5F88AD1B832311");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5805.Quest_5805_C.OnDlgClosed_C865F6B647A6C7AF4099889DF3F63037
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5805_C::OnDlgClosed_C865F6B647A6C7AF4099889DF3F63037(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5805_C", "OnDlgClosed_C865F6B647A6C7AF4099889DF3F63037");

	Params::Quest_5805_C_OnDlgClosed_C865F6B647A6C7AF4099889DF3F63037 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5805.Quest_5805_C.OnDlgSelectedOption_C865F6B647A6C7AF4099889DF3F63037
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5805_C::OnDlgSelectedOption_C865F6B647A6C7AF4099889DF3F63037(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5805_C", "OnDlgSelectedOption_C865F6B647A6C7AF4099889DF3F63037");

	Params::Quest_5805_C_OnDlgSelectedOption_C865F6B647A6C7AF4099889DF3F63037 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
