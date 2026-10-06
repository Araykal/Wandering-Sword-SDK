#pragma once



// Package: Quest_7061

#include "Basic.hpp"

#include "Quest_7061_classes.hpp"
#include "Quest_7061_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7061.Quest_7061_C.ExecuteUbergraph_Quest_7061
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7061_C::ExecuteUbergraph_Quest_7061(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "ExecuteUbergraph_Quest_7061");

	Params::Quest_7061_C_ExecuteUbergraph_Quest_7061 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7061.Quest_7061_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7061_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "HandleFinishing");

	Params::Quest_7061_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7061.Quest_7061_C.OnSuccess_AA64288E43D2A41153A27A9E03C929C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7061_C::OnSuccess_AA64288E43D2A41153A27A9E03C929C3(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "OnSuccess_AA64288E43D2A41153A27A9E03C929C3");

	Params::Quest_7061_C_OnSuccess_AA64288E43D2A41153A27A9E03C929C3 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7061.Quest_7061_C.OnSuccess_1E4A286C4B30C7F26CD7F9A9E097977A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_7061_C::OnSuccess_1E4A286C4B30C7F26CD7F9A9E097977A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "OnSuccess_1E4A286C4B30C7F26CD7F9A9E097977A");

	Params::Quest_7061_C_OnSuccess_1E4A286C4B30C7F26CD7F9A9E097977A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7061.Quest_7061_C.OnFinished_CBF9D13743C079258D192BBD1A14BB79
// (BlueprintCallable, BlueprintEvent)

void UQuest_7061_C::OnFinished_CBF9D13743C079258D192BBD1A14BB79()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "OnFinished_CBF9D13743C079258D192BBD1A14BB79");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7061.Quest_7061_C.OnStop_CBF9D13743C079258D192BBD1A14BB79
// (BlueprintCallable, BlueprintEvent)

void UQuest_7061_C::OnStop_CBF9D13743C079258D192BBD1A14BB79()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "OnStop_CBF9D13743C079258D192BBD1A14BB79");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7061.Quest_7061_C.OnDlgClosed_937C975C4296B35A2BAC07963CD5EE69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7061_C::OnDlgClosed_937C975C4296B35A2BAC07963CD5EE69(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "OnDlgClosed_937C975C4296B35A2BAC07963CD5EE69");

	Params::Quest_7061_C_OnDlgClosed_937C975C4296B35A2BAC07963CD5EE69 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7061.Quest_7061_C.OnDlgSelectedOption_937C975C4296B35A2BAC07963CD5EE69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7061_C::OnDlgSelectedOption_937C975C4296B35A2BAC07963CD5EE69(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7061_C", "OnDlgSelectedOption_937C975C4296B35A2BAC07963CD5EE69");

	Params::Quest_7061_C_OnDlgSelectedOption_937C975C4296B35A2BAC07963CD5EE69 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
