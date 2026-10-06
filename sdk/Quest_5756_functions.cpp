#pragma once



// Package: Quest_5756

#include "Basic.hpp"

#include "Quest_5756_classes.hpp"
#include "Quest_5756_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5756.Quest_5756_C.ExecuteUbergraph_Quest_5756
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5756_C::ExecuteUbergraph_Quest_5756(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5756_C", "ExecuteUbergraph_Quest_5756");

	Params::Quest_5756_C_ExecuteUbergraph_Quest_5756 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5756.Quest_5756_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5756_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5756_C", "HandleFinishing");

	Params::Quest_5756_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5756.Quest_5756_C.OnFinished_893063EF436293DCA9EE30AE0A28B2F0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5756_C::OnFinished_893063EF436293DCA9EE30AE0A28B2F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5756_C", "OnFinished_893063EF436293DCA9EE30AE0A28B2F0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5756.Quest_5756_C.OnStop_893063EF436293DCA9EE30AE0A28B2F0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5756_C::OnStop_893063EF436293DCA9EE30AE0A28B2F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5756_C", "OnStop_893063EF436293DCA9EE30AE0A28B2F0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5756.Quest_5756_C.OnDlgClosed_0934599D41A441E35C23FDB2957D0F19
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5756_C::OnDlgClosed_0934599D41A441E35C23FDB2957D0F19(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5756_C", "OnDlgClosed_0934599D41A441E35C23FDB2957D0F19");

	Params::Quest_5756_C_OnDlgClosed_0934599D41A441E35C23FDB2957D0F19 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5756.Quest_5756_C.OnDlgSelectedOption_0934599D41A441E35C23FDB2957D0F19
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5756_C::OnDlgSelectedOption_0934599D41A441E35C23FDB2957D0F19(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5756_C", "OnDlgSelectedOption_0934599D41A441E35C23FDB2957D0F19");

	Params::Quest_5756_C_OnDlgSelectedOption_0934599D41A441E35C23FDB2957D0F19 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
