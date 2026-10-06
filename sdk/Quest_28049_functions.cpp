#pragma once



// Package: Quest_28049

#include "Basic.hpp"

#include "Quest_28049_classes.hpp"
#include "Quest_28049_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28049.Quest_28049_C.ExecuteUbergraph_Quest_28049
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28049_C::ExecuteUbergraph_Quest_28049(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28049_C", "ExecuteUbergraph_Quest_28049");

	Params::Quest_28049_C_ExecuteUbergraph_Quest_28049 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28049.Quest_28049_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28049_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28049_C", "HandleFinishing");

	Params::Quest_28049_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28049.Quest_28049_C.OnSuccess_464292714AD10BE4D2B0F1BD86DE0E47
// (BlueprintCallable, BlueprintEvent)

void UQuest_28049_C::OnSuccess_464292714AD10BE4D2B0F1BD86DE0E47()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28049_C", "OnSuccess_464292714AD10BE4D2B0F1BD86DE0E47");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28049.Quest_28049_C.OnFinished_8ABFD2B649CB39FE6D24FBB7F92DD72B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28049_C::OnFinished_8ABFD2B649CB39FE6D24FBB7F92DD72B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28049_C", "OnFinished_8ABFD2B649CB39FE6D24FBB7F92DD72B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28049.Quest_28049_C.OnStop_8ABFD2B649CB39FE6D24FBB7F92DD72B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28049_C::OnStop_8ABFD2B649CB39FE6D24FBB7F92DD72B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28049_C", "OnStop_8ABFD2B649CB39FE6D24FBB7F92DD72B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28049.Quest_28049_C.OnDlgClosed_5AC0A7044066258392E5E1AC54B41E89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28049_C::OnDlgClosed_5AC0A7044066258392E5E1AC54B41E89(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28049_C", "OnDlgClosed_5AC0A7044066258392E5E1AC54B41E89");

	Params::Quest_28049_C_OnDlgClosed_5AC0A7044066258392E5E1AC54B41E89 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28049.Quest_28049_C.OnDlgSelectedOption_5AC0A7044066258392E5E1AC54B41E89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28049_C::OnDlgSelectedOption_5AC0A7044066258392E5E1AC54B41E89(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28049_C", "OnDlgSelectedOption_5AC0A7044066258392E5E1AC54B41E89");

	Params::Quest_28049_C_OnDlgSelectedOption_5AC0A7044066258392E5E1AC54B41E89 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
