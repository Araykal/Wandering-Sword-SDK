#pragma once



// Package: Quest_30088

#include "Basic.hpp"

#include "Quest_30088_classes.hpp"
#include "Quest_30088_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30088.Quest_30088_C.ExecuteUbergraph_Quest_30088
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30088_C::ExecuteUbergraph_Quest_30088(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30088_C", "ExecuteUbergraph_Quest_30088");

	Params::Quest_30088_C_ExecuteUbergraph_Quest_30088 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30088.Quest_30088_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30088_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30088_C", "HandleFinishing");

	Params::Quest_30088_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30088.Quest_30088_C.OnSuccess_462A827E45F7BDE4062D23BE08B67A44
// (BlueprintCallable, BlueprintEvent)

void UQuest_30088_C::OnSuccess_462A827E45F7BDE4062D23BE08B67A44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30088_C", "OnSuccess_462A827E45F7BDE4062D23BE08B67A44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30088.Quest_30088_C.OnFinished_76F74C684F73397CFF2222B33C016C9C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30088_C::OnFinished_76F74C684F73397CFF2222B33C016C9C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30088_C", "OnFinished_76F74C684F73397CFF2222B33C016C9C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30088.Quest_30088_C.OnStop_76F74C684F73397CFF2222B33C016C9C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30088_C::OnStop_76F74C684F73397CFF2222B33C016C9C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30088_C", "OnStop_76F74C684F73397CFF2222B33C016C9C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30088.Quest_30088_C.OnDlgClosed_4F3DDB234A91BCC6BE478F80CB5E3999
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30088_C::OnDlgClosed_4F3DDB234A91BCC6BE478F80CB5E3999(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30088_C", "OnDlgClosed_4F3DDB234A91BCC6BE478F80CB5E3999");

	Params::Quest_30088_C_OnDlgClosed_4F3DDB234A91BCC6BE478F80CB5E3999 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30088.Quest_30088_C.OnDlgSelectedOption_4F3DDB234A91BCC6BE478F80CB5E3999
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30088_C::OnDlgSelectedOption_4F3DDB234A91BCC6BE478F80CB5E3999(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30088_C", "OnDlgSelectedOption_4F3DDB234A91BCC6BE478F80CB5E3999");

	Params::Quest_30088_C_OnDlgSelectedOption_4F3DDB234A91BCC6BE478F80CB5E3999 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
