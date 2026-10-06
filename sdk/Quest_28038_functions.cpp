#pragma once



// Package: Quest_28038

#include "Basic.hpp"

#include "Quest_28038_classes.hpp"
#include "Quest_28038_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28038.Quest_28038_C.ExecuteUbergraph_Quest_28038
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28038_C::ExecuteUbergraph_Quest_28038(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28038_C", "ExecuteUbergraph_Quest_28038");

	Params::Quest_28038_C_ExecuteUbergraph_Quest_28038 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28038.Quest_28038_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28038_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28038_C", "HandleFinishing");

	Params::Quest_28038_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28038.Quest_28038_C.OnDlgClosed_D92C485640FBE829C07A9BB9229C3023
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28038_C::OnDlgClosed_D92C485640FBE829C07A9BB9229C3023(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28038_C", "OnDlgClosed_D92C485640FBE829C07A9BB9229C3023");

	Params::Quest_28038_C_OnDlgClosed_D92C485640FBE829C07A9BB9229C3023 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28038.Quest_28038_C.OnDlgSelectedOption_D92C485640FBE829C07A9BB9229C3023
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28038_C::OnDlgSelectedOption_D92C485640FBE829C07A9BB9229C3023(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28038_C", "OnDlgSelectedOption_D92C485640FBE829C07A9BB9229C3023");

	Params::Quest_28038_C_OnDlgSelectedOption_D92C485640FBE829C07A9BB9229C3023 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28038.Quest_28038_C.OnSuccess_4D2463AA49D06F5051F551B895ECEA00
// (BlueprintCallable, BlueprintEvent)

void UQuest_28038_C::OnSuccess_4D2463AA49D06F5051F551B895ECEA00()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28038_C", "OnSuccess_4D2463AA49D06F5051F551B895ECEA00");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28038.Quest_28038_C.OnFinished_A9F006F64138B3FF8D77ADAEC442D56F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28038_C::OnFinished_A9F006F64138B3FF8D77ADAEC442D56F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28038_C", "OnFinished_A9F006F64138B3FF8D77ADAEC442D56F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28038.Quest_28038_C.OnStop_A9F006F64138B3FF8D77ADAEC442D56F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28038_C::OnStop_A9F006F64138B3FF8D77ADAEC442D56F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28038_C", "OnStop_A9F006F64138B3FF8D77ADAEC442D56F");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
