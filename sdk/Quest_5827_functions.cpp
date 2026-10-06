#pragma once



// Package: Quest_5827

#include "Basic.hpp"

#include "Quest_5827_classes.hpp"
#include "Quest_5827_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5827.Quest_5827_C.ExecuteUbergraph_Quest_5827
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5827_C::ExecuteUbergraph_Quest_5827(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5827_C", "ExecuteUbergraph_Quest_5827");

	Params::Quest_5827_C_ExecuteUbergraph_Quest_5827 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5827.Quest_5827_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5827_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5827_C", "HandleFinishing");

	Params::Quest_5827_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5827.Quest_5827_C.OnSuccess_F6D54F9F46093D9B8D28C9BEA85C2E57
// (BlueprintCallable, BlueprintEvent)

void UQuest_5827_C::OnSuccess_F6D54F9F46093D9B8D28C9BEA85C2E57()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5827_C", "OnSuccess_F6D54F9F46093D9B8D28C9BEA85C2E57");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5827.Quest_5827_C.OnFinished_F79F4CD64F550C22647DBFA0ECBD9004
// (BlueprintCallable, BlueprintEvent)

void UQuest_5827_C::OnFinished_F79F4CD64F550C22647DBFA0ECBD9004()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5827_C", "OnFinished_F79F4CD64F550C22647DBFA0ECBD9004");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5827.Quest_5827_C.OnStop_F79F4CD64F550C22647DBFA0ECBD9004
// (BlueprintCallable, BlueprintEvent)

void UQuest_5827_C::OnStop_F79F4CD64F550C22647DBFA0ECBD9004()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5827_C", "OnStop_F79F4CD64F550C22647DBFA0ECBD9004");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5827.Quest_5827_C.OnDlgClosed_AD704D0D42D288E2DC93E38337C13EFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5827_C::OnDlgClosed_AD704D0D42D288E2DC93E38337C13EFE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5827_C", "OnDlgClosed_AD704D0D42D288E2DC93E38337C13EFE");

	Params::Quest_5827_C_OnDlgClosed_AD704D0D42D288E2DC93E38337C13EFE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5827.Quest_5827_C.OnDlgSelectedOption_AD704D0D42D288E2DC93E38337C13EFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5827_C::OnDlgSelectedOption_AD704D0D42D288E2DC93E38337C13EFE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5827_C", "OnDlgSelectedOption_AD704D0D42D288E2DC93E38337C13EFE");

	Params::Quest_5827_C_OnDlgSelectedOption_AD704D0D42D288E2DC93E38337C13EFE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
