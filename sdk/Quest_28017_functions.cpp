#pragma once



// Package: Quest_28017

#include "Basic.hpp"

#include "Quest_28017_classes.hpp"
#include "Quest_28017_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28017.Quest_28017_C.ExecuteUbergraph_Quest_28017
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28017_C::ExecuteUbergraph_Quest_28017(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28017_C", "ExecuteUbergraph_Quest_28017");

	Params::Quest_28017_C_ExecuteUbergraph_Quest_28017 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28017.Quest_28017_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28017_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28017_C", "HandleFinishing");

	Params::Quest_28017_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28017.Quest_28017_C.OnSuccess_34008A95471C97C29A060BB5D170DE28
// (BlueprintCallable, BlueprintEvent)

void UQuest_28017_C::OnSuccess_34008A95471C97C29A060BB5D170DE28()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28017_C", "OnSuccess_34008A95471C97C29A060BB5D170DE28");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28017.Quest_28017_C.OnFinished_9AD5C7214C260AA1FF3E609A1A2095D0
// (BlueprintCallable, BlueprintEvent)

void UQuest_28017_C::OnFinished_9AD5C7214C260AA1FF3E609A1A2095D0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28017_C", "OnFinished_9AD5C7214C260AA1FF3E609A1A2095D0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28017.Quest_28017_C.OnStop_9AD5C7214C260AA1FF3E609A1A2095D0
// (BlueprintCallable, BlueprintEvent)

void UQuest_28017_C::OnStop_9AD5C7214C260AA1FF3E609A1A2095D0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28017_C", "OnStop_9AD5C7214C260AA1FF3E609A1A2095D0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28017.Quest_28017_C.OnDlgClosed_824FD6C4457450627FF398B37102270B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28017_C::OnDlgClosed_824FD6C4457450627FF398B37102270B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28017_C", "OnDlgClosed_824FD6C4457450627FF398B37102270B");

	Params::Quest_28017_C_OnDlgClosed_824FD6C4457450627FF398B37102270B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28017.Quest_28017_C.OnDlgSelectedOption_824FD6C4457450627FF398B37102270B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28017_C::OnDlgSelectedOption_824FD6C4457450627FF398B37102270B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28017_C", "OnDlgSelectedOption_824FD6C4457450627FF398B37102270B");

	Params::Quest_28017_C_OnDlgSelectedOption_824FD6C4457450627FF398B37102270B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
