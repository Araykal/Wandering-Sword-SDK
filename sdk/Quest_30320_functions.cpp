#pragma once



// Package: Quest_30320

#include "Basic.hpp"

#include "Quest_30320_classes.hpp"
#include "Quest_30320_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30320.Quest_30320_C.ExecuteUbergraph_Quest_30320
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30320_C::ExecuteUbergraph_Quest_30320(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30320_C", "ExecuteUbergraph_Quest_30320");

	Params::Quest_30320_C_ExecuteUbergraph_Quest_30320 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30320.Quest_30320_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30320_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30320_C", "HandleFinishing");

	Params::Quest_30320_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30320.Quest_30320_C.OnSuccess_07B98690461B01A26C52E1BB9969D4BC
// (BlueprintCallable, BlueprintEvent)

void UQuest_30320_C::OnSuccess_07B98690461B01A26C52E1BB9969D4BC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30320_C", "OnSuccess_07B98690461B01A26C52E1BB9969D4BC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30320.Quest_30320_C.OnFinished_F291301A4440BBC02998CB974ED36B15
// (BlueprintCallable, BlueprintEvent)

void UQuest_30320_C::OnFinished_F291301A4440BBC02998CB974ED36B15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30320_C", "OnFinished_F291301A4440BBC02998CB974ED36B15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30320.Quest_30320_C.OnStop_F291301A4440BBC02998CB974ED36B15
// (BlueprintCallable, BlueprintEvent)

void UQuest_30320_C::OnStop_F291301A4440BBC02998CB974ED36B15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30320_C", "OnStop_F291301A4440BBC02998CB974ED36B15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30320.Quest_30320_C.OnDlgClosed_C5CB68E14C793AF5332E37860FDEACA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30320_C::OnDlgClosed_C5CB68E14C793AF5332E37860FDEACA4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30320_C", "OnDlgClosed_C5CB68E14C793AF5332E37860FDEACA4");

	Params::Quest_30320_C_OnDlgClosed_C5CB68E14C793AF5332E37860FDEACA4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30320.Quest_30320_C.OnDlgSelectedOption_C5CB68E14C793AF5332E37860FDEACA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30320_C::OnDlgSelectedOption_C5CB68E14C793AF5332E37860FDEACA4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30320_C", "OnDlgSelectedOption_C5CB68E14C793AF5332E37860FDEACA4");

	Params::Quest_30320_C_OnDlgSelectedOption_C5CB68E14C793AF5332E37860FDEACA4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
