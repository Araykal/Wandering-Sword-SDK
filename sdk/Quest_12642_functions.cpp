#pragma once



// Package: Quest_12642

#include "Basic.hpp"

#include "Quest_12642_classes.hpp"
#include "Quest_12642_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12642.Quest_12642_C.ExecuteUbergraph_Quest_12642
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12642_C::ExecuteUbergraph_Quest_12642(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12642_C", "ExecuteUbergraph_Quest_12642");

	Params::Quest_12642_C_ExecuteUbergraph_Quest_12642 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12642.Quest_12642_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12642_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12642_C", "HandleFinishing");

	Params::Quest_12642_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12642.Quest_12642_C.OnSuccess_AF414AE04554ACF69BB37B8E6C6FBBF7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12642_C::OnSuccess_AF414AE04554ACF69BB37B8E6C6FBBF7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12642_C", "OnSuccess_AF414AE04554ACF69BB37B8E6C6FBBF7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12642.Quest_12642_C.OnFinished_6151C669400E7A76740131A8F8F4128C
// (BlueprintCallable, BlueprintEvent)

void UQuest_12642_C::OnFinished_6151C669400E7A76740131A8F8F4128C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12642_C", "OnFinished_6151C669400E7A76740131A8F8F4128C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12642.Quest_12642_C.OnStop_6151C669400E7A76740131A8F8F4128C
// (BlueprintCallable, BlueprintEvent)

void UQuest_12642_C::OnStop_6151C669400E7A76740131A8F8F4128C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12642_C", "OnStop_6151C669400E7A76740131A8F8F4128C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12642.Quest_12642_C.OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12642_C::OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12642_C", "OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B");

	Params::Quest_12642_C_OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12642.Quest_12642_C.OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12642_C::OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12642_C", "OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B");

	Params::Quest_12642_C_OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
