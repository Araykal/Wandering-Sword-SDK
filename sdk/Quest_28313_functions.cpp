#pragma once



// Package: Quest_28313

#include "Basic.hpp"

#include "Quest_28313_classes.hpp"
#include "Quest_28313_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28313.Quest_28313_C.ExecuteUbergraph_Quest_28313
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28313_C::ExecuteUbergraph_Quest_28313(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28313_C", "ExecuteUbergraph_Quest_28313");

	Params::Quest_28313_C_ExecuteUbergraph_Quest_28313 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28313.Quest_28313_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28313_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28313_C", "HandleFinishing");

	Params::Quest_28313_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28313.Quest_28313_C.OnSuccess_ECE462DA430F64851B5332A5ECA7F81D
// (BlueprintCallable, BlueprintEvent)

void UQuest_28313_C::OnSuccess_ECE462DA430F64851B5332A5ECA7F81D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28313_C", "OnSuccess_ECE462DA430F64851B5332A5ECA7F81D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28313.Quest_28313_C.OnFinished_4690B909437873EBDB5607A33B798DF5
// (BlueprintCallable, BlueprintEvent)

void UQuest_28313_C::OnFinished_4690B909437873EBDB5607A33B798DF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28313_C", "OnFinished_4690B909437873EBDB5607A33B798DF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28313.Quest_28313_C.OnStop_4690B909437873EBDB5607A33B798DF5
// (BlueprintCallable, BlueprintEvent)

void UQuest_28313_C::OnStop_4690B909437873EBDB5607A33B798DF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28313_C", "OnStop_4690B909437873EBDB5607A33B798DF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28313.Quest_28313_C.OnDlgClosed_F0BC27C64CFD362517D29898B7E7C9EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28313_C::OnDlgClosed_F0BC27C64CFD362517D29898B7E7C9EE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28313_C", "OnDlgClosed_F0BC27C64CFD362517D29898B7E7C9EE");

	Params::Quest_28313_C_OnDlgClosed_F0BC27C64CFD362517D29898B7E7C9EE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28313.Quest_28313_C.OnDlgSelectedOption_F0BC27C64CFD362517D29898B7E7C9EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28313_C::OnDlgSelectedOption_F0BC27C64CFD362517D29898B7E7C9EE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28313_C", "OnDlgSelectedOption_F0BC27C64CFD362517D29898B7E7C9EE");

	Params::Quest_28313_C_OnDlgSelectedOption_F0BC27C64CFD362517D29898B7E7C9EE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
