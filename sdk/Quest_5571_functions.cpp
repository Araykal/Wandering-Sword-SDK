#pragma once



// Package: Quest_5571

#include "Basic.hpp"

#include "Quest_5571_classes.hpp"
#include "Quest_5571_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5571.Quest_5571_C.ExecuteUbergraph_Quest_5571
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5571_C::ExecuteUbergraph_Quest_5571(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5571_C", "ExecuteUbergraph_Quest_5571");

	Params::Quest_5571_C_ExecuteUbergraph_Quest_5571 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5571.Quest_5571_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5571_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5571_C", "HandleFinishing");

	Params::Quest_5571_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5571.Quest_5571_C.OnFinished_D700EC804AF23C649DC4ECB934297C4C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5571_C::OnFinished_D700EC804AF23C649DC4ECB934297C4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5571_C", "OnFinished_D700EC804AF23C649DC4ECB934297C4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5571.Quest_5571_C.OnStop_D700EC804AF23C649DC4ECB934297C4C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5571_C::OnStop_D700EC804AF23C649DC4ECB934297C4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5571_C", "OnStop_D700EC804AF23C649DC4ECB934297C4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5571.Quest_5571_C.OnDlgClosed_0343A3D046D0D2265C424A8551235608
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5571_C::OnDlgClosed_0343A3D046D0D2265C424A8551235608(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5571_C", "OnDlgClosed_0343A3D046D0D2265C424A8551235608");

	Params::Quest_5571_C_OnDlgClosed_0343A3D046D0D2265C424A8551235608 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5571.Quest_5571_C.OnDlgSelectedOption_0343A3D046D0D2265C424A8551235608
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5571_C::OnDlgSelectedOption_0343A3D046D0D2265C424A8551235608(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5571_C", "OnDlgSelectedOption_0343A3D046D0D2265C424A8551235608");

	Params::Quest_5571_C_OnDlgSelectedOption_0343A3D046D0D2265C424A8551235608 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5571.Quest_5571_C.OnSuccess_E30191EE4308B5A4AD62FF840F64B855
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5571_C::OnSuccess_E30191EE4308B5A4AD62FF840F64B855(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5571_C", "OnSuccess_E30191EE4308B5A4AD62FF840F64B855");

	Params::Quest_5571_C_OnSuccess_E30191EE4308B5A4AD62FF840F64B855 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
