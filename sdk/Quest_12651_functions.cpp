#pragma once



// Package: Quest_12651

#include "Basic.hpp"

#include "Quest_12651_classes.hpp"
#include "Quest_12651_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12651.Quest_12651_C.ExecuteUbergraph_Quest_12651
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12651_C::ExecuteUbergraph_Quest_12651(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12651_C", "ExecuteUbergraph_Quest_12651");

	Params::Quest_12651_C_ExecuteUbergraph_Quest_12651 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12651.Quest_12651_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12651_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12651_C", "HandleFinishing");

	Params::Quest_12651_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12651.Quest_12651_C.OnFinished_0E38A0DC4C10A47FABCCBB9FC89F1489
// (BlueprintCallable, BlueprintEvent)

void UQuest_12651_C::OnFinished_0E38A0DC4C10A47FABCCBB9FC89F1489()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12651_C", "OnFinished_0E38A0DC4C10A47FABCCBB9FC89F1489");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12651.Quest_12651_C.OnStop_0E38A0DC4C10A47FABCCBB9FC89F1489
// (BlueprintCallable, BlueprintEvent)

void UQuest_12651_C::OnStop_0E38A0DC4C10A47FABCCBB9FC89F1489()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12651_C", "OnStop_0E38A0DC4C10A47FABCCBB9FC89F1489");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12651.Quest_12651_C.OnDlgClosed_5DD75F7C445F41B806989489CEADAE09
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12651_C::OnDlgClosed_5DD75F7C445F41B806989489CEADAE09(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12651_C", "OnDlgClosed_5DD75F7C445F41B806989489CEADAE09");

	Params::Quest_12651_C_OnDlgClosed_5DD75F7C445F41B806989489CEADAE09 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12651.Quest_12651_C.OnDlgSelectedOption_5DD75F7C445F41B806989489CEADAE09
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12651_C::OnDlgSelectedOption_5DD75F7C445F41B806989489CEADAE09(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12651_C", "OnDlgSelectedOption_5DD75F7C445F41B806989489CEADAE09");

	Params::Quest_12651_C_OnDlgSelectedOption_5DD75F7C445F41B806989489CEADAE09 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
