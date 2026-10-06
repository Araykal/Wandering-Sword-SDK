#pragma once



// Package: Quest_28744

#include "Basic.hpp"

#include "Quest_28744_classes.hpp"
#include "Quest_28744_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28744.Quest_28744_C.ExecuteUbergraph_Quest_28744
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28744_C::ExecuteUbergraph_Quest_28744(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28744_C", "ExecuteUbergraph_Quest_28744");

	Params::Quest_28744_C_ExecuteUbergraph_Quest_28744 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28744.Quest_28744_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28744_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28744_C", "HandleFinishing");

	Params::Quest_28744_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28744.Quest_28744_C.OnSuccess_AD50A6B54B90B52B924EE8AD5BACDD70
// (BlueprintCallable, BlueprintEvent)

void UQuest_28744_C::OnSuccess_AD50A6B54B90B52B924EE8AD5BACDD70()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28744_C", "OnSuccess_AD50A6B54B90B52B924EE8AD5BACDD70");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28744.Quest_28744_C.OnFinished_92724FBB4A57491ED17BD28812411C97
// (BlueprintCallable, BlueprintEvent)

void UQuest_28744_C::OnFinished_92724FBB4A57491ED17BD28812411C97()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28744_C", "OnFinished_92724FBB4A57491ED17BD28812411C97");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28744.Quest_28744_C.OnStop_92724FBB4A57491ED17BD28812411C97
// (BlueprintCallable, BlueprintEvent)

void UQuest_28744_C::OnStop_92724FBB4A57491ED17BD28812411C97()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28744_C", "OnStop_92724FBB4A57491ED17BD28812411C97");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28744.Quest_28744_C.OnDlgClosed_FAE55DA642461751BB2EAAB2B65985D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28744_C::OnDlgClosed_FAE55DA642461751BB2EAAB2B65985D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28744_C", "OnDlgClosed_FAE55DA642461751BB2EAAB2B65985D7");

	Params::Quest_28744_C_OnDlgClosed_FAE55DA642461751BB2EAAB2B65985D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28744.Quest_28744_C.OnDlgSelectedOption_FAE55DA642461751BB2EAAB2B65985D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28744_C::OnDlgSelectedOption_FAE55DA642461751BB2EAAB2B65985D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28744_C", "OnDlgSelectedOption_FAE55DA642461751BB2EAAB2B65985D7");

	Params::Quest_28744_C_OnDlgSelectedOption_FAE55DA642461751BB2EAAB2B65985D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
