#pragma once



// Package: Quest_5419

#include "Basic.hpp"

#include "Quest_5419_classes.hpp"
#include "Quest_5419_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5419.Quest_5419_C.ExecuteUbergraph_Quest_5419
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5419_C::ExecuteUbergraph_Quest_5419(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "ExecuteUbergraph_Quest_5419");

	Params::Quest_5419_C_ExecuteUbergraph_Quest_5419 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5419.Quest_5419_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5419_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "HandleFinishing");

	Params::Quest_5419_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5419.Quest_5419_C.OnSuccess_6C7814154A9588FD5252FEB131EFEC73
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5419_C::OnSuccess_6C7814154A9588FD5252FEB131EFEC73(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnSuccess_6C7814154A9588FD5252FEB131EFEC73");

	Params::Quest_5419_C_OnSuccess_6C7814154A9588FD5252FEB131EFEC73 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5419.Quest_5419_C.OnSuccess_E04B274B4212E794DA88558148417010
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5419_C::OnSuccess_E04B274B4212E794DA88558148417010(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnSuccess_E04B274B4212E794DA88558148417010");

	Params::Quest_5419_C_OnSuccess_E04B274B4212E794DA88558148417010 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5419.Quest_5419_C.OnSuccess_5020783B473FB3C22EF36A8FA970BB51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5419_C::OnSuccess_5020783B473FB3C22EF36A8FA970BB51(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnSuccess_5020783B473FB3C22EF36A8FA970BB51");

	Params::Quest_5419_C_OnSuccess_5020783B473FB3C22EF36A8FA970BB51 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5419.Quest_5419_C.OnFinished_D8DE3BA747577CBA336B7C9F3DAFD4EB
// (BlueprintCallable, BlueprintEvent)

void UQuest_5419_C::OnFinished_D8DE3BA747577CBA336B7C9F3DAFD4EB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnFinished_D8DE3BA747577CBA336B7C9F3DAFD4EB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5419.Quest_5419_C.OnStop_D8DE3BA747577CBA336B7C9F3DAFD4EB
// (BlueprintCallable, BlueprintEvent)

void UQuest_5419_C::OnStop_D8DE3BA747577CBA336B7C9F3DAFD4EB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnStop_D8DE3BA747577CBA336B7C9F3DAFD4EB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5419.Quest_5419_C.OnDlgClosed_5052498B4AA522775DDEDF9C67F20FF1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5419_C::OnDlgClosed_5052498B4AA522775DDEDF9C67F20FF1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnDlgClosed_5052498B4AA522775DDEDF9C67F20FF1");

	Params::Quest_5419_C_OnDlgClosed_5052498B4AA522775DDEDF9C67F20FF1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5419.Quest_5419_C.OnDlgSelectedOption_5052498B4AA522775DDEDF9C67F20FF1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5419_C::OnDlgSelectedOption_5052498B4AA522775DDEDF9C67F20FF1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnDlgSelectedOption_5052498B4AA522775DDEDF9C67F20FF1");

	Params::Quest_5419_C_OnDlgSelectedOption_5052498B4AA522775DDEDF9C67F20FF1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5419.Quest_5419_C.OnSuccess_B050A5304EA68279BE05EDB5569F62F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5419_C::OnSuccess_B050A5304EA68279BE05EDB5569F62F6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5419_C", "OnSuccess_B050A5304EA68279BE05EDB5569F62F6");

	Params::Quest_5419_C_OnSuccess_B050A5304EA68279BE05EDB5569F62F6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
