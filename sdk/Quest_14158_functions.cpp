#pragma once



// Package: Quest_14158

#include "Basic.hpp"

#include "Quest_14158_classes.hpp"
#include "Quest_14158_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_14158.Quest_14158_C.ExecuteUbergraph_Quest_14158
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14158_C::ExecuteUbergraph_Quest_14158(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14158_C", "ExecuteUbergraph_Quest_14158");

	Params::Quest_14158_C_ExecuteUbergraph_Quest_14158 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14158.Quest_14158_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14158_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14158_C", "HandleFinishing");

	Params::Quest_14158_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14158.Quest_14158_C.OnFinished_D661D6E0479FA98059BB938AA6100D15
// (BlueprintCallable, BlueprintEvent)

void UQuest_14158_C::OnFinished_D661D6E0479FA98059BB938AA6100D15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14158_C", "OnFinished_D661D6E0479FA98059BB938AA6100D15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14158.Quest_14158_C.OnStop_D661D6E0479FA98059BB938AA6100D15
// (BlueprintCallable, BlueprintEvent)

void UQuest_14158_C::OnStop_D661D6E0479FA98059BB938AA6100D15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14158_C", "OnStop_D661D6E0479FA98059BB938AA6100D15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_14158.Quest_14158_C.OnDlgClosed_865AEAF0403A98D16AEBED87E38BA568
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14158_C::OnDlgClosed_865AEAF0403A98D16AEBED87E38BA568(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14158_C", "OnDlgClosed_865AEAF0403A98D16AEBED87E38BA568");

	Params::Quest_14158_C_OnDlgClosed_865AEAF0403A98D16AEBED87E38BA568 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_14158.Quest_14158_C.OnDlgSelectedOption_865AEAF0403A98D16AEBED87E38BA568
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_14158_C::OnDlgSelectedOption_865AEAF0403A98D16AEBED87E38BA568(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_14158_C", "OnDlgSelectedOption_865AEAF0403A98D16AEBED87E38BA568");

	Params::Quest_14158_C_OnDlgSelectedOption_865AEAF0403A98D16AEBED87E38BA568 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
