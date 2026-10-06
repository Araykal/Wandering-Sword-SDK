#pragma once



// Package: Quest_12529

#include "Basic.hpp"

#include "Quest_12529_classes.hpp"
#include "Quest_12529_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12529.Quest_12529_C.ExecuteUbergraph_Quest_12529
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12529_C::ExecuteUbergraph_Quest_12529(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12529_C", "ExecuteUbergraph_Quest_12529");

	Params::Quest_12529_C_ExecuteUbergraph_Quest_12529 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12529.Quest_12529_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12529_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12529_C", "HandleFinishing");

	Params::Quest_12529_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12529.Quest_12529_C.OnSuccess_0AE55B1A4EF166222DD33EB8FAD6D5F7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12529_C::OnSuccess_0AE55B1A4EF166222DD33EB8FAD6D5F7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12529_C", "OnSuccess_0AE55B1A4EF166222DD33EB8FAD6D5F7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12529.Quest_12529_C.OnFinished_1739F5CE41B1722F3D82E6B9AEF60237
// (BlueprintCallable, BlueprintEvent)

void UQuest_12529_C::OnFinished_1739F5CE41B1722F3D82E6B9AEF60237()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12529_C", "OnFinished_1739F5CE41B1722F3D82E6B9AEF60237");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12529.Quest_12529_C.OnStop_1739F5CE41B1722F3D82E6B9AEF60237
// (BlueprintCallable, BlueprintEvent)

void UQuest_12529_C::OnStop_1739F5CE41B1722F3D82E6B9AEF60237()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12529_C", "OnStop_1739F5CE41B1722F3D82E6B9AEF60237");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12529.Quest_12529_C.OnDlgClosed_6130D132400732F53AEF6BAB5A18FA21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12529_C::OnDlgClosed_6130D132400732F53AEF6BAB5A18FA21(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12529_C", "OnDlgClosed_6130D132400732F53AEF6BAB5A18FA21");

	Params::Quest_12529_C_OnDlgClosed_6130D132400732F53AEF6BAB5A18FA21 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12529.Quest_12529_C.OnDlgSelectedOption_6130D132400732F53AEF6BAB5A18FA21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12529_C::OnDlgSelectedOption_6130D132400732F53AEF6BAB5A18FA21(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12529_C", "OnDlgSelectedOption_6130D132400732F53AEF6BAB5A18FA21");

	Params::Quest_12529_C_OnDlgSelectedOption_6130D132400732F53AEF6BAB5A18FA21 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
