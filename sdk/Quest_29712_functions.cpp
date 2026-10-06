#pragma once



// Package: Quest_29712

#include "Basic.hpp"

#include "Quest_29712_classes.hpp"
#include "Quest_29712_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29712.Quest_29712_C.ExecuteUbergraph_Quest_29712
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29712_C::ExecuteUbergraph_Quest_29712(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29712_C", "ExecuteUbergraph_Quest_29712");

	Params::Quest_29712_C_ExecuteUbergraph_Quest_29712 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29712.Quest_29712_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29712_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29712_C", "HandleFinishing");

	Params::Quest_29712_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29712.Quest_29712_C.OnSuccess_ECFD124342CE9FFDAB3293AFDAAF4E40
// (BlueprintCallable, BlueprintEvent)

void UQuest_29712_C::OnSuccess_ECFD124342CE9FFDAB3293AFDAAF4E40()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29712_C", "OnSuccess_ECFD124342CE9FFDAB3293AFDAAF4E40");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29712.Quest_29712_C.OnFinished_71B1600643A8514B22315098D761B785
// (BlueprintCallable, BlueprintEvent)

void UQuest_29712_C::OnFinished_71B1600643A8514B22315098D761B785()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29712_C", "OnFinished_71B1600643A8514B22315098D761B785");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29712.Quest_29712_C.OnStop_71B1600643A8514B22315098D761B785
// (BlueprintCallable, BlueprintEvent)

void UQuest_29712_C::OnStop_71B1600643A8514B22315098D761B785()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29712_C", "OnStop_71B1600643A8514B22315098D761B785");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29712.Quest_29712_C.OnDlgClosed_5F367BFC4105EBD965176E92F1691F6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29712_C::OnDlgClosed_5F367BFC4105EBD965176E92F1691F6D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29712_C", "OnDlgClosed_5F367BFC4105EBD965176E92F1691F6D");

	Params::Quest_29712_C_OnDlgClosed_5F367BFC4105EBD965176E92F1691F6D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29712.Quest_29712_C.OnDlgSelectedOption_5F367BFC4105EBD965176E92F1691F6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29712_C::OnDlgSelectedOption_5F367BFC4105EBD965176E92F1691F6D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29712_C", "OnDlgSelectedOption_5F367BFC4105EBD965176E92F1691F6D");

	Params::Quest_29712_C_OnDlgSelectedOption_5F367BFC4105EBD965176E92F1691F6D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
