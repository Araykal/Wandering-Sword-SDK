#pragma once



// Package: Quest_5566

#include "Basic.hpp"

#include "Quest_5566_classes.hpp"
#include "Quest_5566_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5566.Quest_5566_C.ExecuteUbergraph_Quest_5566
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5566_C::ExecuteUbergraph_Quest_5566(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5566_C", "ExecuteUbergraph_Quest_5566");

	Params::Quest_5566_C_ExecuteUbergraph_Quest_5566 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5566.Quest_5566_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5566_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5566_C", "HandleFinishing");

	Params::Quest_5566_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5566.Quest_5566_C.OnSuccess_51CCC653447AE95A91CAD8913FB915B6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5566_C::OnSuccess_51CCC653447AE95A91CAD8913FB915B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5566_C", "OnSuccess_51CCC653447AE95A91CAD8913FB915B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5566.Quest_5566_C.OnFinished_74E1D65E4F35D0E4624ED6AA94E65B62
// (BlueprintCallable, BlueprintEvent)

void UQuest_5566_C::OnFinished_74E1D65E4F35D0E4624ED6AA94E65B62()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5566_C", "OnFinished_74E1D65E4F35D0E4624ED6AA94E65B62");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5566.Quest_5566_C.OnStop_74E1D65E4F35D0E4624ED6AA94E65B62
// (BlueprintCallable, BlueprintEvent)

void UQuest_5566_C::OnStop_74E1D65E4F35D0E4624ED6AA94E65B62()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5566_C", "OnStop_74E1D65E4F35D0E4624ED6AA94E65B62");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5566.Quest_5566_C.OnDlgClosed_7CC1C24B48EB311552B8B59780631277
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5566_C::OnDlgClosed_7CC1C24B48EB311552B8B59780631277(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5566_C", "OnDlgClosed_7CC1C24B48EB311552B8B59780631277");

	Params::Quest_5566_C_OnDlgClosed_7CC1C24B48EB311552B8B59780631277 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5566.Quest_5566_C.OnDlgSelectedOption_7CC1C24B48EB311552B8B59780631277
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5566_C::OnDlgSelectedOption_7CC1C24B48EB311552B8B59780631277(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5566_C", "OnDlgSelectedOption_7CC1C24B48EB311552B8B59780631277");

	Params::Quest_5566_C_OnDlgSelectedOption_7CC1C24B48EB311552B8B59780631277 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
