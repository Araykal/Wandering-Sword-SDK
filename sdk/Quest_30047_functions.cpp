#pragma once



// Package: Quest_30047

#include "Basic.hpp"

#include "Quest_30047_classes.hpp"
#include "Quest_30047_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30047.Quest_30047_C.ExecuteUbergraph_Quest_30047
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30047_C::ExecuteUbergraph_Quest_30047(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30047_C", "ExecuteUbergraph_Quest_30047");

	Params::Quest_30047_C_ExecuteUbergraph_Quest_30047 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30047.Quest_30047_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30047_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30047_C", "HandleFinishing");

	Params::Quest_30047_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30047.Quest_30047_C.OnSuccess_7199B0EB44B3BEA2C901289EE7233657
// (BlueprintCallable, BlueprintEvent)

void UQuest_30047_C::OnSuccess_7199B0EB44B3BEA2C901289EE7233657()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30047_C", "OnSuccess_7199B0EB44B3BEA2C901289EE7233657");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30047.Quest_30047_C.OnFinished_3005B72D4BD6D137EA3BEEB1BB7545FD
// (BlueprintCallable, BlueprintEvent)

void UQuest_30047_C::OnFinished_3005B72D4BD6D137EA3BEEB1BB7545FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30047_C", "OnFinished_3005B72D4BD6D137EA3BEEB1BB7545FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30047.Quest_30047_C.OnStop_3005B72D4BD6D137EA3BEEB1BB7545FD
// (BlueprintCallable, BlueprintEvent)

void UQuest_30047_C::OnStop_3005B72D4BD6D137EA3BEEB1BB7545FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30047_C", "OnStop_3005B72D4BD6D137EA3BEEB1BB7545FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30047.Quest_30047_C.OnDlgClosed_54BEB090489FC07387E11CB3BF42C084
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30047_C::OnDlgClosed_54BEB090489FC07387E11CB3BF42C084(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30047_C", "OnDlgClosed_54BEB090489FC07387E11CB3BF42C084");

	Params::Quest_30047_C_OnDlgClosed_54BEB090489FC07387E11CB3BF42C084 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30047.Quest_30047_C.OnDlgSelectedOption_54BEB090489FC07387E11CB3BF42C084
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30047_C::OnDlgSelectedOption_54BEB090489FC07387E11CB3BF42C084(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30047_C", "OnDlgSelectedOption_54BEB090489FC07387E11CB3BF42C084");

	Params::Quest_30047_C_OnDlgSelectedOption_54BEB090489FC07387E11CB3BF42C084 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
