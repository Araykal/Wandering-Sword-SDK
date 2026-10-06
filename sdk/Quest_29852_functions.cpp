#pragma once



// Package: Quest_29852

#include "Basic.hpp"

#include "Quest_29852_classes.hpp"
#include "Quest_29852_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29852.Quest_29852_C.ExecuteUbergraph_Quest_29852
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29852_C::ExecuteUbergraph_Quest_29852(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29852_C", "ExecuteUbergraph_Quest_29852");

	Params::Quest_29852_C_ExecuteUbergraph_Quest_29852 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29852.Quest_29852_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29852_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29852_C", "HandleFinishing");

	Params::Quest_29852_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29852.Quest_29852_C.OnSuccess_2DD297364ED93058CD18E8A08721B43D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_29852_C::OnSuccess_2DD297364ED93058CD18E8A08721B43D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29852_C", "OnSuccess_2DD297364ED93058CD18E8A08721B43D");

	Params::Quest_29852_C_OnSuccess_2DD297364ED93058CD18E8A08721B43D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29852.Quest_29852_C.OnFinished_41C7449E41E42EC644F4A085D3DEB0E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_29852_C::OnFinished_41C7449E41E42EC644F4A085D3DEB0E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29852_C", "OnFinished_41C7449E41E42EC644F4A085D3DEB0E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29852.Quest_29852_C.OnStop_41C7449E41E42EC644F4A085D3DEB0E3
// (BlueprintCallable, BlueprintEvent)

void UQuest_29852_C::OnStop_41C7449E41E42EC644F4A085D3DEB0E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29852_C", "OnStop_41C7449E41E42EC644F4A085D3DEB0E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29852.Quest_29852_C.OnDlgClosed_C34FEEC347814116583A668484BCBE8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29852_C::OnDlgClosed_C34FEEC347814116583A668484BCBE8D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29852_C", "OnDlgClosed_C34FEEC347814116583A668484BCBE8D");

	Params::Quest_29852_C_OnDlgClosed_C34FEEC347814116583A668484BCBE8D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29852.Quest_29852_C.OnDlgSelectedOption_C34FEEC347814116583A668484BCBE8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29852_C::OnDlgSelectedOption_C34FEEC347814116583A668484BCBE8D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29852_C", "OnDlgSelectedOption_C34FEEC347814116583A668484BCBE8D");

	Params::Quest_29852_C_OnDlgSelectedOption_C34FEEC347814116583A668484BCBE8D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
