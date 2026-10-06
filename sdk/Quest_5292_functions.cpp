#pragma once



// Package: Quest_5292

#include "Basic.hpp"

#include "Quest_5292_classes.hpp"
#include "Quest_5292_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5292.Quest_5292_C.ExecuteUbergraph_Quest_5292
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5292_C::ExecuteUbergraph_Quest_5292(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "ExecuteUbergraph_Quest_5292");

	Params::Quest_5292_C_ExecuteUbergraph_Quest_5292 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5292.Quest_5292_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5292_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "HandleFinishing");

	Params::Quest_5292_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5292.Quest_5292_C.OnSuccess_BB4748F045FEDDB47E07238F2F9E9C52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5292_C::OnSuccess_BB4748F045FEDDB47E07238F2F9E9C52(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnSuccess_BB4748F045FEDDB47E07238F2F9E9C52");

	Params::Quest_5292_C_OnSuccess_BB4748F045FEDDB47E07238F2F9E9C52 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5292.Quest_5292_C.OnSuccess_3B759F44401FE0787F037B84CA84F5B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5292_C::OnSuccess_3B759F44401FE0787F037B84CA84F5B9(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnSuccess_3B759F44401FE0787F037B84CA84F5B9");

	Params::Quest_5292_C_OnSuccess_3B759F44401FE0787F037B84CA84F5B9 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5292.Quest_5292_C.OnSuccess_DF3BDA674E542353280696A7F74EEBB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5292_C::OnSuccess_DF3BDA674E542353280696A7F74EEBB5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnSuccess_DF3BDA674E542353280696A7F74EEBB5");

	Params::Quest_5292_C_OnSuccess_DF3BDA674E542353280696A7F74EEBB5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5292.Quest_5292_C.OnFinished_762425E242EB2CEC5CA508BA88102658
// (BlueprintCallable, BlueprintEvent)

void UQuest_5292_C::OnFinished_762425E242EB2CEC5CA508BA88102658()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnFinished_762425E242EB2CEC5CA508BA88102658");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5292.Quest_5292_C.OnStop_762425E242EB2CEC5CA508BA88102658
// (BlueprintCallable, BlueprintEvent)

void UQuest_5292_C::OnStop_762425E242EB2CEC5CA508BA88102658()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnStop_762425E242EB2CEC5CA508BA88102658");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5292.Quest_5292_C.OnDlgClosed_601BE25449AB4203C7E8729301ABFA41
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5292_C::OnDlgClosed_601BE25449AB4203C7E8729301ABFA41(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnDlgClosed_601BE25449AB4203C7E8729301ABFA41");

	Params::Quest_5292_C_OnDlgClosed_601BE25449AB4203C7E8729301ABFA41 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5292.Quest_5292_C.OnDlgSelectedOption_601BE25449AB4203C7E8729301ABFA41
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5292_C::OnDlgSelectedOption_601BE25449AB4203C7E8729301ABFA41(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnDlgSelectedOption_601BE25449AB4203C7E8729301ABFA41");

	Params::Quest_5292_C_OnDlgSelectedOption_601BE25449AB4203C7E8729301ABFA41 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5292.Quest_5292_C.OnSuccess_9BE7E7EE42BE2D6FF78CEAB70EC5666D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5292_C::OnSuccess_9BE7E7EE42BE2D6FF78CEAB70EC5666D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5292_C", "OnSuccess_9BE7E7EE42BE2D6FF78CEAB70EC5666D");

	Params::Quest_5292_C_OnSuccess_9BE7E7EE42BE2D6FF78CEAB70EC5666D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
