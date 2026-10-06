#pragma once



// Package: Quest_28919

#include "Basic.hpp"

#include "Quest_28919_classes.hpp"
#include "Quest_28919_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28919.Quest_28919_C.ExecuteUbergraph_Quest_28919
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28919_C::ExecuteUbergraph_Quest_28919(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28919_C", "ExecuteUbergraph_Quest_28919");

	Params::Quest_28919_C_ExecuteUbergraph_Quest_28919 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28919.Quest_28919_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28919_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28919_C", "HandleFinishing");

	Params::Quest_28919_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28919.Quest_28919_C.OnSuccess_B88C8A46484C78792BD33F8525EA1D01
// (BlueprintCallable, BlueprintEvent)

void UQuest_28919_C::OnSuccess_B88C8A46484C78792BD33F8525EA1D01()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28919_C", "OnSuccess_B88C8A46484C78792BD33F8525EA1D01");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28919.Quest_28919_C.OnFinished_D6C18CB7499D4B69798E248CC48BA9A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28919_C::OnFinished_D6C18CB7499D4B69798E248CC48BA9A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28919_C", "OnFinished_D6C18CB7499D4B69798E248CC48BA9A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28919.Quest_28919_C.OnStop_D6C18CB7499D4B69798E248CC48BA9A2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28919_C::OnStop_D6C18CB7499D4B69798E248CC48BA9A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28919_C", "OnStop_D6C18CB7499D4B69798E248CC48BA9A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28919.Quest_28919_C.OnDlgClosed_96066FCB4D5404608FBFB39B705F3082
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28919_C::OnDlgClosed_96066FCB4D5404608FBFB39B705F3082(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28919_C", "OnDlgClosed_96066FCB4D5404608FBFB39B705F3082");

	Params::Quest_28919_C_OnDlgClosed_96066FCB4D5404608FBFB39B705F3082 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28919.Quest_28919_C.OnDlgSelectedOption_96066FCB4D5404608FBFB39B705F3082
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28919_C::OnDlgSelectedOption_96066FCB4D5404608FBFB39B705F3082(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28919_C", "OnDlgSelectedOption_96066FCB4D5404608FBFB39B705F3082");

	Params::Quest_28919_C_OnDlgSelectedOption_96066FCB4D5404608FBFB39B705F3082 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
