#pragma once



// Package: Quest_7083

#include "Basic.hpp"

#include "Quest_7083_classes.hpp"
#include "Quest_7083_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7083.Quest_7083_C.ExecuteUbergraph_Quest_7083
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7083_C::ExecuteUbergraph_Quest_7083(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "ExecuteUbergraph_Quest_7083");

	Params::Quest_7083_C_ExecuteUbergraph_Quest_7083 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7083.Quest_7083_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7083_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "HandleFinishing");

	Params::Quest_7083_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7083.Quest_7083_C.OnSuccess_7F22FB684B923807C16EEB96C305AC1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7083_C::OnSuccess_7F22FB684B923807C16EEB96C305AC1D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnSuccess_7F22FB684B923807C16EEB96C305AC1D");

	Params::Quest_7083_C_OnSuccess_7F22FB684B923807C16EEB96C305AC1D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7083.Quest_7083_C.OnSuccess_A1EAC3C147D4A0C383C42C90CF3BFBE8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7083_C::OnSuccess_A1EAC3C147D4A0C383C42C90CF3BFBE8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnSuccess_A1EAC3C147D4A0C383C42C90CF3BFBE8");

	Params::Quest_7083_C_OnSuccess_A1EAC3C147D4A0C383C42C90CF3BFBE8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7083.Quest_7083_C.OnSuccess_9097878A480B7EA7D4CF05858D4440A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7083_C::OnSuccess_9097878A480B7EA7D4CF05858D4440A0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnSuccess_9097878A480B7EA7D4CF05858D4440A0");

	Params::Quest_7083_C_OnSuccess_9097878A480B7EA7D4CF05858D4440A0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7083.Quest_7083_C.OnFinished_6A003E1F450C134BF0B8CEA9BD200942
// (BlueprintCallable, BlueprintEvent)

void UQuest_7083_C::OnFinished_6A003E1F450C134BF0B8CEA9BD200942()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnFinished_6A003E1F450C134BF0B8CEA9BD200942");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7083.Quest_7083_C.OnStop_6A003E1F450C134BF0B8CEA9BD200942
// (BlueprintCallable, BlueprintEvent)

void UQuest_7083_C::OnStop_6A003E1F450C134BF0B8CEA9BD200942()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnStop_6A003E1F450C134BF0B8CEA9BD200942");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7083.Quest_7083_C.OnDlgClosed_A43C6307472786F2A89E50BD2C43CFCA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7083_C::OnDlgClosed_A43C6307472786F2A89E50BD2C43CFCA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnDlgClosed_A43C6307472786F2A89E50BD2C43CFCA");

	Params::Quest_7083_C_OnDlgClosed_A43C6307472786F2A89E50BD2C43CFCA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7083.Quest_7083_C.OnDlgSelectedOption_A43C6307472786F2A89E50BD2C43CFCA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7083_C::OnDlgSelectedOption_A43C6307472786F2A89E50BD2C43CFCA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnDlgSelectedOption_A43C6307472786F2A89E50BD2C43CFCA");

	Params::Quest_7083_C_OnDlgSelectedOption_A43C6307472786F2A89E50BD2C43CFCA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7083.Quest_7083_C.OnSuccess_3A5868B8418CC562EA08CEAFE527D523
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7083_C::OnSuccess_3A5868B8418CC562EA08CEAFE527D523(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7083_C", "OnSuccess_3A5868B8418CC562EA08CEAFE527D523");

	Params::Quest_7083_C_OnSuccess_3A5868B8418CC562EA08CEAFE527D523 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
