#pragma once



// Package: Quest_29521

#include "Basic.hpp"

#include "Quest_29521_classes.hpp"
#include "Quest_29521_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29521.Quest_29521_C.ExecuteUbergraph_Quest_29521
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29521_C::ExecuteUbergraph_Quest_29521(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "ExecuteUbergraph_Quest_29521");

	Params::Quest_29521_C_ExecuteUbergraph_Quest_29521 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29521.Quest_29521_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29521_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "HandleFinishing");

	Params::Quest_29521_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29521.Quest_29521_C.OnSuccess_AF8A8E0A481116A210EBC68FD81EE74A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29521_C::OnSuccess_AF8A8E0A481116A210EBC68FD81EE74A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "OnSuccess_AF8A8E0A481116A210EBC68FD81EE74A");

	Params::Quest_29521_C_OnSuccess_AF8A8E0A481116A210EBC68FD81EE74A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29521.Quest_29521_C.OnFinished_6656ECBF4C552BACB3CB8EB46049747B
// (BlueprintCallable, BlueprintEvent)

void UQuest_29521_C::OnFinished_6656ECBF4C552BACB3CB8EB46049747B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "OnFinished_6656ECBF4C552BACB3CB8EB46049747B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29521.Quest_29521_C.OnStop_6656ECBF4C552BACB3CB8EB46049747B
// (BlueprintCallable, BlueprintEvent)

void UQuest_29521_C::OnStop_6656ECBF4C552BACB3CB8EB46049747B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "OnStop_6656ECBF4C552BACB3CB8EB46049747B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29521.Quest_29521_C.OnDlgClosed_18313E6045B54A24E307E7A3C0EDA5DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29521_C::OnDlgClosed_18313E6045B54A24E307E7A3C0EDA5DE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "OnDlgClosed_18313E6045B54A24E307E7A3C0EDA5DE");

	Params::Quest_29521_C_OnDlgClosed_18313E6045B54A24E307E7A3C0EDA5DE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29521.Quest_29521_C.OnDlgSelectedOption_18313E6045B54A24E307E7A3C0EDA5DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29521_C::OnDlgSelectedOption_18313E6045B54A24E307E7A3C0EDA5DE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "OnDlgSelectedOption_18313E6045B54A24E307E7A3C0EDA5DE");

	Params::Quest_29521_C_OnDlgSelectedOption_18313E6045B54A24E307E7A3C0EDA5DE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29521.Quest_29521_C.OnSuccess_D9FA28D3489FC82C4718A288230CF161
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29521_C::OnSuccess_D9FA28D3489FC82C4718A288230CF161(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29521_C", "OnSuccess_D9FA28D3489FC82C4718A288230CF161");

	Params::Quest_29521_C_OnSuccess_D9FA28D3489FC82C4718A288230CF161 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
