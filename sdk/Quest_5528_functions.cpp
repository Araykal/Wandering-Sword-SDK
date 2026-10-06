#pragma once



// Package: Quest_5528

#include "Basic.hpp"

#include "Quest_5528_classes.hpp"
#include "Quest_5528_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5528.Quest_5528_C.ExecuteUbergraph_Quest_5528
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5528_C::ExecuteUbergraph_Quest_5528(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "ExecuteUbergraph_Quest_5528");

	Params::Quest_5528_C_ExecuteUbergraph_Quest_5528 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5528.Quest_5528_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5528_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "HandleFinishing");

	Params::Quest_5528_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5528.Quest_5528_C.OnSuccess_01F835464C37A542B5CA94A3F49CC552
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5528_C::OnSuccess_01F835464C37A542B5CA94A3F49CC552(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnSuccess_01F835464C37A542B5CA94A3F49CC552");

	Params::Quest_5528_C_OnSuccess_01F835464C37A542B5CA94A3F49CC552 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5528.Quest_5528_C.OnSuccess_3185A8CC4EEDA56D608CEA88BC876C1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5528_C::OnSuccess_3185A8CC4EEDA56D608CEA88BC876C1E(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnSuccess_3185A8CC4EEDA56D608CEA88BC876C1E");

	Params::Quest_5528_C_OnSuccess_3185A8CC4EEDA56D608CEA88BC876C1E Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5528.Quest_5528_C.OnSuccess_731B1145431EEABF4A91578ED8606993
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5528_C::OnSuccess_731B1145431EEABF4A91578ED8606993(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnSuccess_731B1145431EEABF4A91578ED8606993");

	Params::Quest_5528_C_OnSuccess_731B1145431EEABF4A91578ED8606993 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5528.Quest_5528_C.OnFinished_187CC1AC4863B650B8C1739C02EC7518
// (BlueprintCallable, BlueprintEvent)

void UQuest_5528_C::OnFinished_187CC1AC4863B650B8C1739C02EC7518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnFinished_187CC1AC4863B650B8C1739C02EC7518");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5528.Quest_5528_C.OnStop_187CC1AC4863B650B8C1739C02EC7518
// (BlueprintCallable, BlueprintEvent)

void UQuest_5528_C::OnStop_187CC1AC4863B650B8C1739C02EC7518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnStop_187CC1AC4863B650B8C1739C02EC7518");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5528.Quest_5528_C.OnDlgClosed_8225C2014EEA6CD340F593B028AC42D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5528_C::OnDlgClosed_8225C2014EEA6CD340F593B028AC42D2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnDlgClosed_8225C2014EEA6CD340F593B028AC42D2");

	Params::Quest_5528_C_OnDlgClosed_8225C2014EEA6CD340F593B028AC42D2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5528.Quest_5528_C.OnDlgSelectedOption_8225C2014EEA6CD340F593B028AC42D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5528_C::OnDlgSelectedOption_8225C2014EEA6CD340F593B028AC42D2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnDlgSelectedOption_8225C2014EEA6CD340F593B028AC42D2");

	Params::Quest_5528_C_OnDlgSelectedOption_8225C2014EEA6CD340F593B028AC42D2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5528.Quest_5528_C.OnSuccess_25C3D00943CBE639A206DA9EFE2E6593
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5528_C::OnSuccess_25C3D00943CBE639A206DA9EFE2E6593(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5528_C", "OnSuccess_25C3D00943CBE639A206DA9EFE2E6593");

	Params::Quest_5528_C_OnSuccess_25C3D00943CBE639A206DA9EFE2E6593 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
