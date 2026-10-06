#pragma once



// Package: Quest_12232

#include "Basic.hpp"

#include "Quest_12232_classes.hpp"
#include "Quest_12232_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12232.Quest_12232_C.ExecuteUbergraph_Quest_12232
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12232_C::ExecuteUbergraph_Quest_12232(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12232_C", "ExecuteUbergraph_Quest_12232");

	Params::Quest_12232_C_ExecuteUbergraph_Quest_12232 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12232.Quest_12232_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12232_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12232_C", "HandleFinishing");

	Params::Quest_12232_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12232.Quest_12232_C.OnFinished_DF4D50934568F3CBDE3E6C8FECF406B8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12232_C::OnFinished_DF4D50934568F3CBDE3E6C8FECF406B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12232_C", "OnFinished_DF4D50934568F3CBDE3E6C8FECF406B8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12232.Quest_12232_C.OnStop_DF4D50934568F3CBDE3E6C8FECF406B8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12232_C::OnStop_DF4D50934568F3CBDE3E6C8FECF406B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12232_C", "OnStop_DF4D50934568F3CBDE3E6C8FECF406B8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12232.Quest_12232_C.OnDlgClosed_77F6BE044BA523F056C03684839030C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12232_C::OnDlgClosed_77F6BE044BA523F056C03684839030C6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12232_C", "OnDlgClosed_77F6BE044BA523F056C03684839030C6");

	Params::Quest_12232_C_OnDlgClosed_77F6BE044BA523F056C03684839030C6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12232.Quest_12232_C.OnDlgSelectedOption_77F6BE044BA523F056C03684839030C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12232_C::OnDlgSelectedOption_77F6BE044BA523F056C03684839030C6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12232_C", "OnDlgSelectedOption_77F6BE044BA523F056C03684839030C6");

	Params::Quest_12232_C_OnDlgSelectedOption_77F6BE044BA523F056C03684839030C6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
