#pragma once



// Package: Quest_12521

#include "Basic.hpp"

#include "Quest_12521_classes.hpp"
#include "Quest_12521_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12521.Quest_12521_C.ExecuteUbergraph_Quest_12521
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12521_C::ExecuteUbergraph_Quest_12521(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12521_C", "ExecuteUbergraph_Quest_12521");

	Params::Quest_12521_C_ExecuteUbergraph_Quest_12521 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12521.Quest_12521_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12521_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12521_C", "HandleFinishing");

	Params::Quest_12521_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12521.Quest_12521_C.OnSuccess_969499004D4DD4CB80AE49AB04986DDF
// (BlueprintCallable, BlueprintEvent)

void UQuest_12521_C::OnSuccess_969499004D4DD4CB80AE49AB04986DDF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12521_C", "OnSuccess_969499004D4DD4CB80AE49AB04986DDF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12521.Quest_12521_C.OnFinished_6F6D368C4D19681F73F28D8C09F343D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_12521_C::OnFinished_6F6D368C4D19681F73F28D8C09F343D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12521_C", "OnFinished_6F6D368C4D19681F73F28D8C09F343D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12521.Quest_12521_C.OnStop_6F6D368C4D19681F73F28D8C09F343D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_12521_C::OnStop_6F6D368C4D19681F73F28D8C09F343D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12521_C", "OnStop_6F6D368C4D19681F73F28D8C09F343D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12521.Quest_12521_C.OnDlgClosed_F73833784E804DF5C0AC6A9B81A66056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12521_C::OnDlgClosed_F73833784E804DF5C0AC6A9B81A66056(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12521_C", "OnDlgClosed_F73833784E804DF5C0AC6A9B81A66056");

	Params::Quest_12521_C_OnDlgClosed_F73833784E804DF5C0AC6A9B81A66056 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12521.Quest_12521_C.OnDlgSelectedOption_F73833784E804DF5C0AC6A9B81A66056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12521_C::OnDlgSelectedOption_F73833784E804DF5C0AC6A9B81A66056(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12521_C", "OnDlgSelectedOption_F73833784E804DF5C0AC6A9B81A66056");

	Params::Quest_12521_C_OnDlgSelectedOption_F73833784E804DF5C0AC6A9B81A66056 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
