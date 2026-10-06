#pragma once



// Package: Quest_30620

#include "Basic.hpp"

#include "Quest_30620_classes.hpp"
#include "Quest_30620_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30620.Quest_30620_C.ExecuteUbergraph_Quest_30620
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30620_C::ExecuteUbergraph_Quest_30620(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30620_C", "ExecuteUbergraph_Quest_30620");

	Params::Quest_30620_C_ExecuteUbergraph_Quest_30620 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30620.Quest_30620_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30620_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30620_C", "HandleFinishing");

	Params::Quest_30620_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30620.Quest_30620_C.OnFinished_6EF4DD3E48D72256D57F8AB1C3DB3D90
// (BlueprintCallable, BlueprintEvent)

void UQuest_30620_C::OnFinished_6EF4DD3E48D72256D57F8AB1C3DB3D90()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30620_C", "OnFinished_6EF4DD3E48D72256D57F8AB1C3DB3D90");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30620.Quest_30620_C.OnStop_6EF4DD3E48D72256D57F8AB1C3DB3D90
// (BlueprintCallable, BlueprintEvent)

void UQuest_30620_C::OnStop_6EF4DD3E48D72256D57F8AB1C3DB3D90()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30620_C", "OnStop_6EF4DD3E48D72256D57F8AB1C3DB3D90");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30620.Quest_30620_C.OnDlgClosed_2387259741CE97A66FC249BEF5FA7545
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30620_C::OnDlgClosed_2387259741CE97A66FC249BEF5FA7545(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30620_C", "OnDlgClosed_2387259741CE97A66FC249BEF5FA7545");

	Params::Quest_30620_C_OnDlgClosed_2387259741CE97A66FC249BEF5FA7545 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30620.Quest_30620_C.OnDlgSelectedOption_2387259741CE97A66FC249BEF5FA7545
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30620_C::OnDlgSelectedOption_2387259741CE97A66FC249BEF5FA7545(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30620_C", "OnDlgSelectedOption_2387259741CE97A66FC249BEF5FA7545");

	Params::Quest_30620_C_OnDlgSelectedOption_2387259741CE97A66FC249BEF5FA7545 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
