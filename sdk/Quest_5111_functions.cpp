#pragma once



// Package: Quest_5111

#include "Basic.hpp"

#include "Quest_5111_classes.hpp"
#include "Quest_5111_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5111.Quest_5111_C.ExecuteUbergraph_Quest_5111
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5111_C::ExecuteUbergraph_Quest_5111(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5111_C", "ExecuteUbergraph_Quest_5111");

	Params::Quest_5111_C_ExecuteUbergraph_Quest_5111 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5111.Quest_5111_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5111_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5111_C", "HandleFinishing");

	Params::Quest_5111_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5111.Quest_5111_C.OnFinished_32EDA380448F386340BE61AF10547B56
// (BlueprintCallable, BlueprintEvent)

void UQuest_5111_C::OnFinished_32EDA380448F386340BE61AF10547B56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5111_C", "OnFinished_32EDA380448F386340BE61AF10547B56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5111.Quest_5111_C.OnStop_32EDA380448F386340BE61AF10547B56
// (BlueprintCallable, BlueprintEvent)

void UQuest_5111_C::OnStop_32EDA380448F386340BE61AF10547B56()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5111_C", "OnStop_32EDA380448F386340BE61AF10547B56");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5111.Quest_5111_C.OnDlgClosed_7BF8BC0441B8B151C3D785B07A5F8041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5111_C::OnDlgClosed_7BF8BC0441B8B151C3D785B07A5F8041(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5111_C", "OnDlgClosed_7BF8BC0441B8B151C3D785B07A5F8041");

	Params::Quest_5111_C_OnDlgClosed_7BF8BC0441B8B151C3D785B07A5F8041 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5111.Quest_5111_C.OnDlgSelectedOption_7BF8BC0441B8B151C3D785B07A5F8041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5111_C::OnDlgSelectedOption_7BF8BC0441B8B151C3D785B07A5F8041(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5111_C", "OnDlgSelectedOption_7BF8BC0441B8B151C3D785B07A5F8041");

	Params::Quest_5111_C_OnDlgSelectedOption_7BF8BC0441B8B151C3D785B07A5F8041 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5111.Quest_5111_C.OnSuccess_B8C806F049213E46C03851A39582CCC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5111_C::OnSuccess_B8C806F049213E46C03851A39582CCC6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5111_C", "OnSuccess_B8C806F049213E46C03851A39582CCC6");

	Params::Quest_5111_C_OnSuccess_B8C806F049213E46C03851A39582CCC6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
