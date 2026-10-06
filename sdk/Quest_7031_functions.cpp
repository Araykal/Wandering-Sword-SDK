#pragma once



// Package: Quest_7031

#include "Basic.hpp"

#include "Quest_7031_classes.hpp"
#include "Quest_7031_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7031.Quest_7031_C.ExecuteUbergraph_Quest_7031
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7031_C::ExecuteUbergraph_Quest_7031(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7031_C", "ExecuteUbergraph_Quest_7031");

	Params::Quest_7031_C_ExecuteUbergraph_Quest_7031 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7031.Quest_7031_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7031_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7031_C", "HandleFinishing");

	Params::Quest_7031_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7031.Quest_7031_C.OnFinished_C45C625049A37BD430258690675C9F19
// (BlueprintCallable, BlueprintEvent)

void UQuest_7031_C::OnFinished_C45C625049A37BD430258690675C9F19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7031_C", "OnFinished_C45C625049A37BD430258690675C9F19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7031.Quest_7031_C.OnStop_C45C625049A37BD430258690675C9F19
// (BlueprintCallable, BlueprintEvent)

void UQuest_7031_C::OnStop_C45C625049A37BD430258690675C9F19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7031_C", "OnStop_C45C625049A37BD430258690675C9F19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7031.Quest_7031_C.OnDlgClosed_EB4A5D1D4EE1C3530D136E838B31EB98
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7031_C::OnDlgClosed_EB4A5D1D4EE1C3530D136E838B31EB98(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7031_C", "OnDlgClosed_EB4A5D1D4EE1C3530D136E838B31EB98");

	Params::Quest_7031_C_OnDlgClosed_EB4A5D1D4EE1C3530D136E838B31EB98 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7031.Quest_7031_C.OnDlgSelectedOption_EB4A5D1D4EE1C3530D136E838B31EB98
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7031_C::OnDlgSelectedOption_EB4A5D1D4EE1C3530D136E838B31EB98(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7031_C", "OnDlgSelectedOption_EB4A5D1D4EE1C3530D136E838B31EB98");

	Params::Quest_7031_C_OnDlgSelectedOption_EB4A5D1D4EE1C3530D136E838B31EB98 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
