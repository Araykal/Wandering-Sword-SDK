#pragma once



// Package: Quest_11807

#include "Basic.hpp"

#include "Quest_11807_classes.hpp"
#include "Quest_11807_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11807.Quest_11807_C.ExecuteUbergraph_Quest_11807
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11807_C::ExecuteUbergraph_Quest_11807(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11807_C", "ExecuteUbergraph_Quest_11807");

	Params::Quest_11807_C_ExecuteUbergraph_Quest_11807 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11807.Quest_11807_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_11807_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11807_C", "End");

	Params::Quest_11807_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11807.Quest_11807_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11807_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11807_C", "HandleFinishing");

	Params::Quest_11807_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11807.Quest_11807_C.OnFinished_DA748DCE42EBA03FDF5FBC8D4DE5ACA1
// (BlueprintCallable, BlueprintEvent)

void UQuest_11807_C::OnFinished_DA748DCE42EBA03FDF5FBC8D4DE5ACA1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11807_C", "OnFinished_DA748DCE42EBA03FDF5FBC8D4DE5ACA1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11807.Quest_11807_C.OnStop_DA748DCE42EBA03FDF5FBC8D4DE5ACA1
// (BlueprintCallable, BlueprintEvent)

void UQuest_11807_C::OnStop_DA748DCE42EBA03FDF5FBC8D4DE5ACA1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11807_C", "OnStop_DA748DCE42EBA03FDF5FBC8D4DE5ACA1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11807.Quest_11807_C.OnDlgClosed_A31559E34A5528C88C3E67A0022FA331
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11807_C::OnDlgClosed_A31559E34A5528C88C3E67A0022FA331(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11807_C", "OnDlgClosed_A31559E34A5528C88C3E67A0022FA331");

	Params::Quest_11807_C_OnDlgClosed_A31559E34A5528C88C3E67A0022FA331 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11807.Quest_11807_C.OnDlgSelectedOption_A31559E34A5528C88C3E67A0022FA331
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11807_C::OnDlgSelectedOption_A31559E34A5528C88C3E67A0022FA331(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11807_C", "OnDlgSelectedOption_A31559E34A5528C88C3E67A0022FA331");

	Params::Quest_11807_C_OnDlgSelectedOption_A31559E34A5528C88C3E67A0022FA331 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
