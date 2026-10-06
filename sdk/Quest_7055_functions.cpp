#pragma once



// Package: Quest_7055

#include "Basic.hpp"

#include "Quest_7055_classes.hpp"
#include "Quest_7055_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7055.Quest_7055_C.ExecuteUbergraph_Quest_7055
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7055_C::ExecuteUbergraph_Quest_7055(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7055_C", "ExecuteUbergraph_Quest_7055");

	Params::Quest_7055_C_ExecuteUbergraph_Quest_7055 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7055.Quest_7055_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7055_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7055_C", "HandleFinishing");

	Params::Quest_7055_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7055.Quest_7055_C.OnSuccess_1A9AC3C846456790324417929A1B4AD4
// (BlueprintCallable, BlueprintEvent)

void UQuest_7055_C::OnSuccess_1A9AC3C846456790324417929A1B4AD4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7055_C", "OnSuccess_1A9AC3C846456790324417929A1B4AD4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7055.Quest_7055_C.OnFinished_E43B870C44C10869FD79BD9C07FF76E5
// (BlueprintCallable, BlueprintEvent)

void UQuest_7055_C::OnFinished_E43B870C44C10869FD79BD9C07FF76E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7055_C", "OnFinished_E43B870C44C10869FD79BD9C07FF76E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7055.Quest_7055_C.OnStop_E43B870C44C10869FD79BD9C07FF76E5
// (BlueprintCallable, BlueprintEvent)

void UQuest_7055_C::OnStop_E43B870C44C10869FD79BD9C07FF76E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7055_C", "OnStop_E43B870C44C10869FD79BD9C07FF76E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7055.Quest_7055_C.OnDlgClosed_665336474C15AC368A4A4D858FA00BA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7055_C::OnDlgClosed_665336474C15AC368A4A4D858FA00BA2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7055_C", "OnDlgClosed_665336474C15AC368A4A4D858FA00BA2");

	Params::Quest_7055_C_OnDlgClosed_665336474C15AC368A4A4D858FA00BA2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7055.Quest_7055_C.OnDlgSelectedOption_665336474C15AC368A4A4D858FA00BA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7055_C::OnDlgSelectedOption_665336474C15AC368A4A4D858FA00BA2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7055_C", "OnDlgSelectedOption_665336474C15AC368A4A4D858FA00BA2");

	Params::Quest_7055_C_OnDlgSelectedOption_665336474C15AC368A4A4D858FA00BA2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
