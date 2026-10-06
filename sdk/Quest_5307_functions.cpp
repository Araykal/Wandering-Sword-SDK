#pragma once



// Package: Quest_5307

#include "Basic.hpp"

#include "Quest_5307_classes.hpp"
#include "Quest_5307_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5307.Quest_5307_C.ExecuteUbergraph_Quest_5307
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5307_C::ExecuteUbergraph_Quest_5307(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5307_C", "ExecuteUbergraph_Quest_5307");

	Params::Quest_5307_C_ExecuteUbergraph_Quest_5307 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5307.Quest_5307_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5307_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5307_C", "HandleFinishing");

	Params::Quest_5307_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5307.Quest_5307_C.OnSuccess_4F85110D4E9930F5A5A31E8E0AEB49DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5307_C::OnSuccess_4F85110D4E9930F5A5A31E8E0AEB49DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5307_C", "OnSuccess_4F85110D4E9930F5A5A31E8E0AEB49DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5307.Quest_5307_C.OnFinished_55BCFAA3437F549F37712F9C0F3C05BC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5307_C::OnFinished_55BCFAA3437F549F37712F9C0F3C05BC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5307_C", "OnFinished_55BCFAA3437F549F37712F9C0F3C05BC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5307.Quest_5307_C.OnStop_55BCFAA3437F549F37712F9C0F3C05BC
// (BlueprintCallable, BlueprintEvent)

void UQuest_5307_C::OnStop_55BCFAA3437F549F37712F9C0F3C05BC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5307_C", "OnStop_55BCFAA3437F549F37712F9C0F3C05BC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5307.Quest_5307_C.OnDlgClosed_3AE9DC9D4F206B2C16C6DBA6C1AF135D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5307_C::OnDlgClosed_3AE9DC9D4F206B2C16C6DBA6C1AF135D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5307_C", "OnDlgClosed_3AE9DC9D4F206B2C16C6DBA6C1AF135D");

	Params::Quest_5307_C_OnDlgClosed_3AE9DC9D4F206B2C16C6DBA6C1AF135D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5307.Quest_5307_C.OnDlgSelectedOption_3AE9DC9D4F206B2C16C6DBA6C1AF135D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5307_C::OnDlgSelectedOption_3AE9DC9D4F206B2C16C6DBA6C1AF135D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5307_C", "OnDlgSelectedOption_3AE9DC9D4F206B2C16C6DBA6C1AF135D");

	Params::Quest_5307_C_OnDlgSelectedOption_3AE9DC9D4F206B2C16C6DBA6C1AF135D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
