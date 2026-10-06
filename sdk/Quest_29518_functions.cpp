#pragma once



// Package: Quest_29518

#include "Basic.hpp"

#include "Quest_29518_classes.hpp"
#include "Quest_29518_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29518.Quest_29518_C.ExecuteUbergraph_Quest_29518
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29518_C::ExecuteUbergraph_Quest_29518(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29518_C", "ExecuteUbergraph_Quest_29518");

	Params::Quest_29518_C_ExecuteUbergraph_Quest_29518 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29518.Quest_29518_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29518_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29518_C", "HandleFinishing");

	Params::Quest_29518_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29518.Quest_29518_C.OnFinished_D4E8AA944BB24A52493657B6090F8FC6
// (BlueprintCallable, BlueprintEvent)

void UQuest_29518_C::OnFinished_D4E8AA944BB24A52493657B6090F8FC6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29518_C", "OnFinished_D4E8AA944BB24A52493657B6090F8FC6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29518.Quest_29518_C.OnStop_D4E8AA944BB24A52493657B6090F8FC6
// (BlueprintCallable, BlueprintEvent)

void UQuest_29518_C::OnStop_D4E8AA944BB24A52493657B6090F8FC6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29518_C", "OnStop_D4E8AA944BB24A52493657B6090F8FC6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29518.Quest_29518_C.OnDlgClosed_3BD246EC49208F2EDAAC0B85169D63C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29518_C::OnDlgClosed_3BD246EC49208F2EDAAC0B85169D63C2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29518_C", "OnDlgClosed_3BD246EC49208F2EDAAC0B85169D63C2");

	Params::Quest_29518_C_OnDlgClosed_3BD246EC49208F2EDAAC0B85169D63C2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29518.Quest_29518_C.OnDlgSelectedOption_3BD246EC49208F2EDAAC0B85169D63C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29518_C::OnDlgSelectedOption_3BD246EC49208F2EDAAC0B85169D63C2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29518_C", "OnDlgSelectedOption_3BD246EC49208F2EDAAC0B85169D63C2");

	Params::Quest_29518_C_OnDlgSelectedOption_3BD246EC49208F2EDAAC0B85169D63C2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
