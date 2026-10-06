#pragma once



// Package: Quest_5569

#include "Basic.hpp"

#include "Quest_5569_classes.hpp"
#include "Quest_5569_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5569.Quest_5569_C.ExecuteUbergraph_Quest_5569
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5569_C::ExecuteUbergraph_Quest_5569(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5569_C", "ExecuteUbergraph_Quest_5569");

	Params::Quest_5569_C_ExecuteUbergraph_Quest_5569 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5569.Quest_5569_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5569_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5569_C", "HandleFinishing");

	Params::Quest_5569_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5569.Quest_5569_C.OnSuccess_EEE1AB024CCE2A35B00D69A59E2C7778
// (BlueprintCallable, BlueprintEvent)

void UQuest_5569_C::OnSuccess_EEE1AB024CCE2A35B00D69A59E2C7778()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5569_C", "OnSuccess_EEE1AB024CCE2A35B00D69A59E2C7778");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5569.Quest_5569_C.OnFinished_D0A3F1B0470D7C8CCD84E9AFDC866C03
// (BlueprintCallable, BlueprintEvent)

void UQuest_5569_C::OnFinished_D0A3F1B0470D7C8CCD84E9AFDC866C03()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5569_C", "OnFinished_D0A3F1B0470D7C8CCD84E9AFDC866C03");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5569.Quest_5569_C.OnStop_D0A3F1B0470D7C8CCD84E9AFDC866C03
// (BlueprintCallable, BlueprintEvent)

void UQuest_5569_C::OnStop_D0A3F1B0470D7C8CCD84E9AFDC866C03()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5569_C", "OnStop_D0A3F1B0470D7C8CCD84E9AFDC866C03");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5569.Quest_5569_C.OnDlgClosed_3D83FC63488CBCE0614690AC523401F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5569_C::OnDlgClosed_3D83FC63488CBCE0614690AC523401F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5569_C", "OnDlgClosed_3D83FC63488CBCE0614690AC523401F6");

	Params::Quest_5569_C_OnDlgClosed_3D83FC63488CBCE0614690AC523401F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5569.Quest_5569_C.OnDlgSelectedOption_3D83FC63488CBCE0614690AC523401F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5569_C::OnDlgSelectedOption_3D83FC63488CBCE0614690AC523401F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5569_C", "OnDlgSelectedOption_3D83FC63488CBCE0614690AC523401F6");

	Params::Quest_5569_C_OnDlgSelectedOption_3D83FC63488CBCE0614690AC523401F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
