#pragma once



// Package: Quest_30050

#include "Basic.hpp"

#include "Quest_30050_classes.hpp"
#include "Quest_30050_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30050.Quest_30050_C.ExecuteUbergraph_Quest_30050
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30050_C::ExecuteUbergraph_Quest_30050(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30050_C", "ExecuteUbergraph_Quest_30050");

	Params::Quest_30050_C_ExecuteUbergraph_Quest_30050 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30050.Quest_30050_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30050_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30050_C", "HandleFinishing");

	Params::Quest_30050_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30050.Quest_30050_C.OnSuccess_2397DBF5409D6C638073B69519460F5A
// (BlueprintCallable, BlueprintEvent)

void UQuest_30050_C::OnSuccess_2397DBF5409D6C638073B69519460F5A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30050_C", "OnSuccess_2397DBF5409D6C638073B69519460F5A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30050.Quest_30050_C.OnFinished_315ABB494CC70EF7F0C34E8B75120024
// (BlueprintCallable, BlueprintEvent)

void UQuest_30050_C::OnFinished_315ABB494CC70EF7F0C34E8B75120024()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30050_C", "OnFinished_315ABB494CC70EF7F0C34E8B75120024");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30050.Quest_30050_C.OnStop_315ABB494CC70EF7F0C34E8B75120024
// (BlueprintCallable, BlueprintEvent)

void UQuest_30050_C::OnStop_315ABB494CC70EF7F0C34E8B75120024()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30050_C", "OnStop_315ABB494CC70EF7F0C34E8B75120024");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30050.Quest_30050_C.OnDlgClosed_3188596F4295CC969CAFC6B61047802D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30050_C::OnDlgClosed_3188596F4295CC969CAFC6B61047802D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30050_C", "OnDlgClosed_3188596F4295CC969CAFC6B61047802D");

	Params::Quest_30050_C_OnDlgClosed_3188596F4295CC969CAFC6B61047802D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30050.Quest_30050_C.OnDlgSelectedOption_3188596F4295CC969CAFC6B61047802D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30050_C::OnDlgSelectedOption_3188596F4295CC969CAFC6B61047802D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30050_C", "OnDlgSelectedOption_3188596F4295CC969CAFC6B61047802D");

	Params::Quest_30050_C_OnDlgSelectedOption_3188596F4295CC969CAFC6B61047802D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
