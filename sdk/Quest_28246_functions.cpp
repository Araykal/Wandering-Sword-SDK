#pragma once



// Package: Quest_28246

#include "Basic.hpp"

#include "Quest_28246_classes.hpp"
#include "Quest_28246_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28246.Quest_28246_C.ExecuteUbergraph_Quest_28246
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28246_C::ExecuteUbergraph_Quest_28246(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28246_C", "ExecuteUbergraph_Quest_28246");

	Params::Quest_28246_C_ExecuteUbergraph_Quest_28246 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28246.Quest_28246_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28246_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28246_C", "HandleFinishing");

	Params::Quest_28246_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28246.Quest_28246_C.OnFinished_34BFA05C4391BD62F1DA4D8CE5735D37
// (BlueprintCallable, BlueprintEvent)

void UQuest_28246_C::OnFinished_34BFA05C4391BD62F1DA4D8CE5735D37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28246_C", "OnFinished_34BFA05C4391BD62F1DA4D8CE5735D37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28246.Quest_28246_C.OnStop_34BFA05C4391BD62F1DA4D8CE5735D37
// (BlueprintCallable, BlueprintEvent)

void UQuest_28246_C::OnStop_34BFA05C4391BD62F1DA4D8CE5735D37()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28246_C", "OnStop_34BFA05C4391BD62F1DA4D8CE5735D37");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28246.Quest_28246_C.OnDlgClosed_CF3842A745727EB8078D39A0477112F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28246_C::OnDlgClosed_CF3842A745727EB8078D39A0477112F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28246_C", "OnDlgClosed_CF3842A745727EB8078D39A0477112F6");

	Params::Quest_28246_C_OnDlgClosed_CF3842A745727EB8078D39A0477112F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28246.Quest_28246_C.OnDlgSelectedOption_CF3842A745727EB8078D39A0477112F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28246_C::OnDlgSelectedOption_CF3842A745727EB8078D39A0477112F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28246_C", "OnDlgSelectedOption_CF3842A745727EB8078D39A0477112F6");

	Params::Quest_28246_C_OnDlgSelectedOption_CF3842A745727EB8078D39A0477112F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
