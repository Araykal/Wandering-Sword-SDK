#pragma once



// Package: Quest_29507

#include "Basic.hpp"

#include "Quest_29507_classes.hpp"
#include "Quest_29507_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29507.Quest_29507_C.ExecuteUbergraph_Quest_29507
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29507_C::ExecuteUbergraph_Quest_29507(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29507_C", "ExecuteUbergraph_Quest_29507");

	Params::Quest_29507_C_ExecuteUbergraph_Quest_29507 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29507.Quest_29507_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29507_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29507_C", "HandleFinishing");

	Params::Quest_29507_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29507.Quest_29507_C.OnFinished_75BD064D4356EC7734FC789A43538AEB
// (BlueprintCallable, BlueprintEvent)

void UQuest_29507_C::OnFinished_75BD064D4356EC7734FC789A43538AEB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29507_C", "OnFinished_75BD064D4356EC7734FC789A43538AEB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29507.Quest_29507_C.OnStop_75BD064D4356EC7734FC789A43538AEB
// (BlueprintCallable, BlueprintEvent)

void UQuest_29507_C::OnStop_75BD064D4356EC7734FC789A43538AEB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29507_C", "OnStop_75BD064D4356EC7734FC789A43538AEB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29507.Quest_29507_C.OnDlgClosed_570DB5C64FBF20004092EBAAF5F28251
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29507_C::OnDlgClosed_570DB5C64FBF20004092EBAAF5F28251(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29507_C", "OnDlgClosed_570DB5C64FBF20004092EBAAF5F28251");

	Params::Quest_29507_C_OnDlgClosed_570DB5C64FBF20004092EBAAF5F28251 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29507.Quest_29507_C.OnDlgSelectedOption_570DB5C64FBF20004092EBAAF5F28251
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29507_C::OnDlgSelectedOption_570DB5C64FBF20004092EBAAF5F28251(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29507_C", "OnDlgSelectedOption_570DB5C64FBF20004092EBAAF5F28251");

	Params::Quest_29507_C_OnDlgSelectedOption_570DB5C64FBF20004092EBAAF5F28251 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29507.Quest_29507_C.OnSuccess_D448A1844B5E571F1D17A2BABD0E7A10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29507_C::OnSuccess_D448A1844B5E571F1D17A2BABD0E7A10(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29507_C", "OnSuccess_D448A1844B5E571F1D17A2BABD0E7A10");

	Params::Quest_29507_C_OnSuccess_D448A1844B5E571F1D17A2BABD0E7A10 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
