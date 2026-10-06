#pragma once



// Package: Quest_5655

#include "Basic.hpp"

#include "Quest_5655_classes.hpp"
#include "Quest_5655_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5655.Quest_5655_C.ExecuteUbergraph_Quest_5655
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5655_C::ExecuteUbergraph_Quest_5655(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5655_C", "ExecuteUbergraph_Quest_5655");

	Params::Quest_5655_C_ExecuteUbergraph_Quest_5655 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5655.Quest_5655_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5655_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5655_C", "HandleFinishing");

	Params::Quest_5655_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5655.Quest_5655_C.OnSuccess_1C80051B4BBF5DA5BE1DAE92152DBF5D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5655_C::OnSuccess_1C80051B4BBF5DA5BE1DAE92152DBF5D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5655_C", "OnSuccess_1C80051B4BBF5DA5BE1DAE92152DBF5D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5655.Quest_5655_C.OnFinished_1BDA3F2B450C9119E9AD1AA4A1810A87
// (BlueprintCallable, BlueprintEvent)

void UQuest_5655_C::OnFinished_1BDA3F2B450C9119E9AD1AA4A1810A87()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5655_C", "OnFinished_1BDA3F2B450C9119E9AD1AA4A1810A87");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5655.Quest_5655_C.OnStop_1BDA3F2B450C9119E9AD1AA4A1810A87
// (BlueprintCallable, BlueprintEvent)

void UQuest_5655_C::OnStop_1BDA3F2B450C9119E9AD1AA4A1810A87()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5655_C", "OnStop_1BDA3F2B450C9119E9AD1AA4A1810A87");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5655.Quest_5655_C.OnDlgClosed_B847F2DC4943B04363955091D36CD466
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5655_C::OnDlgClosed_B847F2DC4943B04363955091D36CD466(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5655_C", "OnDlgClosed_B847F2DC4943B04363955091D36CD466");

	Params::Quest_5655_C_OnDlgClosed_B847F2DC4943B04363955091D36CD466 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5655.Quest_5655_C.OnDlgSelectedOption_B847F2DC4943B04363955091D36CD466
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5655_C::OnDlgSelectedOption_B847F2DC4943B04363955091D36CD466(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5655_C", "OnDlgSelectedOption_B847F2DC4943B04363955091D36CD466");

	Params::Quest_5655_C_OnDlgSelectedOption_B847F2DC4943B04363955091D36CD466 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
