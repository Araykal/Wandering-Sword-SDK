#pragma once



// Package: Quest_5281

#include "Basic.hpp"

#include "Quest_5281_classes.hpp"
#include "Quest_5281_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5281.Quest_5281_C.ExecuteUbergraph_Quest_5281
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5281_C::ExecuteUbergraph_Quest_5281(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5281_C", "ExecuteUbergraph_Quest_5281");

	Params::Quest_5281_C_ExecuteUbergraph_Quest_5281 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5281.Quest_5281_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5281_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5281_C", "HandleFinishing");

	Params::Quest_5281_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5281.Quest_5281_C.OnFinished_646532C24928C618B738B691F2C04B47
// (BlueprintCallable, BlueprintEvent)

void UQuest_5281_C::OnFinished_646532C24928C618B738B691F2C04B47()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5281_C", "OnFinished_646532C24928C618B738B691F2C04B47");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5281.Quest_5281_C.OnStop_646532C24928C618B738B691F2C04B47
// (BlueprintCallable, BlueprintEvent)

void UQuest_5281_C::OnStop_646532C24928C618B738B691F2C04B47()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5281_C", "OnStop_646532C24928C618B738B691F2C04B47");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5281.Quest_5281_C.OnDlgClosed_F15D5CCD405AEA072F2342B692CE819C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5281_C::OnDlgClosed_F15D5CCD405AEA072F2342B692CE819C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5281_C", "OnDlgClosed_F15D5CCD405AEA072F2342B692CE819C");

	Params::Quest_5281_C_OnDlgClosed_F15D5CCD405AEA072F2342B692CE819C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5281.Quest_5281_C.OnDlgSelectedOption_F15D5CCD405AEA072F2342B692CE819C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5281_C::OnDlgSelectedOption_F15D5CCD405AEA072F2342B692CE819C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5281_C", "OnDlgSelectedOption_F15D5CCD405AEA072F2342B692CE819C");

	Params::Quest_5281_C_OnDlgSelectedOption_F15D5CCD405AEA072F2342B692CE819C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
