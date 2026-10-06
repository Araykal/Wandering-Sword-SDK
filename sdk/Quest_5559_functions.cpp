#pragma once



// Package: Quest_5559

#include "Basic.hpp"

#include "Quest_5559_classes.hpp"
#include "Quest_5559_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5559.Quest_5559_C.ExecuteUbergraph_Quest_5559
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5559_C::ExecuteUbergraph_Quest_5559(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5559_C", "ExecuteUbergraph_Quest_5559");

	Params::Quest_5559_C_ExecuteUbergraph_Quest_5559 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5559.Quest_5559_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5559_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5559_C", "HandleFinishing");

	Params::Quest_5559_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5559.Quest_5559_C.OnFinished_90522A4140C3F3AEBCD7E8A9BD961303
// (BlueprintCallable, BlueprintEvent)

void UQuest_5559_C::OnFinished_90522A4140C3F3AEBCD7E8A9BD961303()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5559_C", "OnFinished_90522A4140C3F3AEBCD7E8A9BD961303");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5559.Quest_5559_C.OnStop_90522A4140C3F3AEBCD7E8A9BD961303
// (BlueprintCallable, BlueprintEvent)

void UQuest_5559_C::OnStop_90522A4140C3F3AEBCD7E8A9BD961303()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5559_C", "OnStop_90522A4140C3F3AEBCD7E8A9BD961303");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5559.Quest_5559_C.OnDlgClosed_F688B39848EE5EC6342D4AA3AEEFD2C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5559_C::OnDlgClosed_F688B39848EE5EC6342D4AA3AEEFD2C4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5559_C", "OnDlgClosed_F688B39848EE5EC6342D4AA3AEEFD2C4");

	Params::Quest_5559_C_OnDlgClosed_F688B39848EE5EC6342D4AA3AEEFD2C4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5559.Quest_5559_C.OnDlgSelectedOption_F688B39848EE5EC6342D4AA3AEEFD2C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5559_C::OnDlgSelectedOption_F688B39848EE5EC6342D4AA3AEEFD2C4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5559_C", "OnDlgSelectedOption_F688B39848EE5EC6342D4AA3AEEFD2C4");

	Params::Quest_5559_C_OnDlgSelectedOption_F688B39848EE5EC6342D4AA3AEEFD2C4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
