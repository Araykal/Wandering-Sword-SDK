#pragma once



// Package: Quest_5001

#include "Basic.hpp"

#include "Quest_5001_classes.hpp"
#include "Quest_5001_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5001.Quest_5001_C.ExecuteUbergraph_Quest_5001
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5001_C::ExecuteUbergraph_Quest_5001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5001_C", "ExecuteUbergraph_Quest_5001");

	Params::Quest_5001_C_ExecuteUbergraph_Quest_5001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5001.Quest_5001_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5001_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5001_C", "HandleFinishing");

	Params::Quest_5001_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5001.Quest_5001_C.OnSuccess_55A9AC9643B2FED9E03448A0B24CAA8D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5001_C::OnSuccess_55A9AC9643B2FED9E03448A0B24CAA8D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5001_C", "OnSuccess_55A9AC9643B2FED9E03448A0B24CAA8D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5001.Quest_5001_C.OnFinished_CCBF72E54D503979802F7EA62ADAC563
// (BlueprintCallable, BlueprintEvent)

void UQuest_5001_C::OnFinished_CCBF72E54D503979802F7EA62ADAC563()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5001_C", "OnFinished_CCBF72E54D503979802F7EA62ADAC563");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5001.Quest_5001_C.OnStop_CCBF72E54D503979802F7EA62ADAC563
// (BlueprintCallable, BlueprintEvent)

void UQuest_5001_C::OnStop_CCBF72E54D503979802F7EA62ADAC563()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5001_C", "OnStop_CCBF72E54D503979802F7EA62ADAC563");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5001.Quest_5001_C.OnDlgClosed_6D5F36DC472F274E6DCA759446A2A30A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5001_C::OnDlgClosed_6D5F36DC472F274E6DCA759446A2A30A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5001_C", "OnDlgClosed_6D5F36DC472F274E6DCA759446A2A30A");

	Params::Quest_5001_C_OnDlgClosed_6D5F36DC472F274E6DCA759446A2A30A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5001.Quest_5001_C.OnDlgSelectedOption_6D5F36DC472F274E6DCA759446A2A30A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5001_C::OnDlgSelectedOption_6D5F36DC472F274E6DCA759446A2A30A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5001_C", "OnDlgSelectedOption_6D5F36DC472F274E6DCA759446A2A30A");

	Params::Quest_5001_C_OnDlgSelectedOption_6D5F36DC472F274E6DCA759446A2A30A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
