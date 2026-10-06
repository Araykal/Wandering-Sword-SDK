#pragma once



// Package: Quest_5784

#include "Basic.hpp"

#include "Quest_5784_classes.hpp"
#include "Quest_5784_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5784.Quest_5784_C.ExecuteUbergraph_Quest_5784
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5784_C::ExecuteUbergraph_Quest_5784(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5784_C", "ExecuteUbergraph_Quest_5784");

	Params::Quest_5784_C_ExecuteUbergraph_Quest_5784 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5784.Quest_5784_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5784_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5784_C", "HandleFinishing");

	Params::Quest_5784_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5784.Quest_5784_C.OnSuccess_797207004B3E96F49B45FABC2C3E7BCB
// (BlueprintCallable, BlueprintEvent)

void UQuest_5784_C::OnSuccess_797207004B3E96F49B45FABC2C3E7BCB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5784_C", "OnSuccess_797207004B3E96F49B45FABC2C3E7BCB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5784.Quest_5784_C.OnFinished_6B16383E419C7BED0800059F605B7175
// (BlueprintCallable, BlueprintEvent)

void UQuest_5784_C::OnFinished_6B16383E419C7BED0800059F605B7175()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5784_C", "OnFinished_6B16383E419C7BED0800059F605B7175");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5784.Quest_5784_C.OnStop_6B16383E419C7BED0800059F605B7175
// (BlueprintCallable, BlueprintEvent)

void UQuest_5784_C::OnStop_6B16383E419C7BED0800059F605B7175()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5784_C", "OnStop_6B16383E419C7BED0800059F605B7175");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5784.Quest_5784_C.OnDlgClosed_67C8B5714167032D63DAE29132B20C79
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5784_C::OnDlgClosed_67C8B5714167032D63DAE29132B20C79(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5784_C", "OnDlgClosed_67C8B5714167032D63DAE29132B20C79");

	Params::Quest_5784_C_OnDlgClosed_67C8B5714167032D63DAE29132B20C79 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5784.Quest_5784_C.OnDlgSelectedOption_67C8B5714167032D63DAE29132B20C79
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5784_C::OnDlgSelectedOption_67C8B5714167032D63DAE29132B20C79(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5784_C", "OnDlgSelectedOption_67C8B5714167032D63DAE29132B20C79");

	Params::Quest_5784_C_OnDlgSelectedOption_67C8B5714167032D63DAE29132B20C79 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
