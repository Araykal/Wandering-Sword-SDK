#pragma once



// Package: Quest_5003

#include "Basic.hpp"

#include "Quest_5003_classes.hpp"
#include "Quest_5003_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5003.Quest_5003_C.ExecuteUbergraph_Quest_5003
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5003_C::ExecuteUbergraph_Quest_5003(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5003_C", "ExecuteUbergraph_Quest_5003");

	Params::Quest_5003_C_ExecuteUbergraph_Quest_5003 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5003.Quest_5003_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5003_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5003_C", "End");

	Params::Quest_5003_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5003.Quest_5003_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5003_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5003_C", "HandleFinishing");

	Params::Quest_5003_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5003.Quest_5003_C.OnFinished_AE53A04D4A5143CE222CECA43EAED28A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5003_C::OnFinished_AE53A04D4A5143CE222CECA43EAED28A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5003_C", "OnFinished_AE53A04D4A5143CE222CECA43EAED28A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5003.Quest_5003_C.OnStop_AE53A04D4A5143CE222CECA43EAED28A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5003_C::OnStop_AE53A04D4A5143CE222CECA43EAED28A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5003_C", "OnStop_AE53A04D4A5143CE222CECA43EAED28A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5003.Quest_5003_C.OnDlgClosed_095FEFB24ADF0620DE98AD8906FF5054
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5003_C::OnDlgClosed_095FEFB24ADF0620DE98AD8906FF5054(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5003_C", "OnDlgClosed_095FEFB24ADF0620DE98AD8906FF5054");

	Params::Quest_5003_C_OnDlgClosed_095FEFB24ADF0620DE98AD8906FF5054 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5003.Quest_5003_C.OnDlgSelectedOption_095FEFB24ADF0620DE98AD8906FF5054
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5003_C::OnDlgSelectedOption_095FEFB24ADF0620DE98AD8906FF5054(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5003_C", "OnDlgSelectedOption_095FEFB24ADF0620DE98AD8906FF5054");

	Params::Quest_5003_C_OnDlgSelectedOption_095FEFB24ADF0620DE98AD8906FF5054 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
