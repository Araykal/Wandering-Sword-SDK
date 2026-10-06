#pragma once



// Package: Quest_29704

#include "Basic.hpp"

#include "Quest_29704_classes.hpp"
#include "Quest_29704_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29704.Quest_29704_C.ExecuteUbergraph_Quest_29704
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29704_C::ExecuteUbergraph_Quest_29704(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29704_C", "ExecuteUbergraph_Quest_29704");

	Params::Quest_29704_C_ExecuteUbergraph_Quest_29704 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29704.Quest_29704_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29704_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29704_C", "HandleFinishing");

	Params::Quest_29704_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29704.Quest_29704_C.OnSuccess_6F4558344C7C2F5BD353969591AB2155
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29704_C::OnSuccess_6F4558344C7C2F5BD353969591AB2155(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29704_C", "OnSuccess_6F4558344C7C2F5BD353969591AB2155");

	Params::Quest_29704_C_OnSuccess_6F4558344C7C2F5BD353969591AB2155 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29704.Quest_29704_C.OnFinished_3E6F15C14E20BC79C8845F973280E099
// (BlueprintCallable, BlueprintEvent)

void UQuest_29704_C::OnFinished_3E6F15C14E20BC79C8845F973280E099()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29704_C", "OnFinished_3E6F15C14E20BC79C8845F973280E099");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29704.Quest_29704_C.OnStop_3E6F15C14E20BC79C8845F973280E099
// (BlueprintCallable, BlueprintEvent)

void UQuest_29704_C::OnStop_3E6F15C14E20BC79C8845F973280E099()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29704_C", "OnStop_3E6F15C14E20BC79C8845F973280E099");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29704.Quest_29704_C.OnDlgClosed_8025DF8447D2D085021F0D9452BFDB0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29704_C::OnDlgClosed_8025DF8447D2D085021F0D9452BFDB0D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29704_C", "OnDlgClosed_8025DF8447D2D085021F0D9452BFDB0D");

	Params::Quest_29704_C_OnDlgClosed_8025DF8447D2D085021F0D9452BFDB0D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29704.Quest_29704_C.OnDlgSelectedOption_8025DF8447D2D085021F0D9452BFDB0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29704_C::OnDlgSelectedOption_8025DF8447D2D085021F0D9452BFDB0D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29704_C", "OnDlgSelectedOption_8025DF8447D2D085021F0D9452BFDB0D");

	Params::Quest_29704_C_OnDlgSelectedOption_8025DF8447D2D085021F0D9452BFDB0D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
