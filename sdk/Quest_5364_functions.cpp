#pragma once



// Package: Quest_5364

#include "Basic.hpp"

#include "Quest_5364_classes.hpp"
#include "Quest_5364_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5364.Quest_5364_C.ExecuteUbergraph_Quest_5364
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5364_C::ExecuteUbergraph_Quest_5364(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "ExecuteUbergraph_Quest_5364");

	Params::Quest_5364_C_ExecuteUbergraph_Quest_5364 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5364.Quest_5364_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5364_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "HandleFinishing");

	Params::Quest_5364_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5364.Quest_5364_C.OnSuccess_3D08FD004E4D33CBA29771B740A9AAA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5364_C::OnSuccess_3D08FD004E4D33CBA29771B740A9AAA5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "OnSuccess_3D08FD004E4D33CBA29771B740A9AAA5");

	Params::Quest_5364_C_OnSuccess_3D08FD004E4D33CBA29771B740A9AAA5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5364.Quest_5364_C.OnFinished_96678A7D484AB91DEAAD82BDBD05B5C8
// (BlueprintCallable, BlueprintEvent)

void UQuest_5364_C::OnFinished_96678A7D484AB91DEAAD82BDBD05B5C8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "OnFinished_96678A7D484AB91DEAAD82BDBD05B5C8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5364.Quest_5364_C.OnStop_96678A7D484AB91DEAAD82BDBD05B5C8
// (BlueprintCallable, BlueprintEvent)

void UQuest_5364_C::OnStop_96678A7D484AB91DEAAD82BDBD05B5C8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "OnStop_96678A7D484AB91DEAAD82BDBD05B5C8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5364.Quest_5364_C.OnDlgClosed_86D9E25143F5AE7281B68597574F631E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5364_C::OnDlgClosed_86D9E25143F5AE7281B68597574F631E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "OnDlgClosed_86D9E25143F5AE7281B68597574F631E");

	Params::Quest_5364_C_OnDlgClosed_86D9E25143F5AE7281B68597574F631E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5364.Quest_5364_C.OnDlgSelectedOption_86D9E25143F5AE7281B68597574F631E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5364_C::OnDlgSelectedOption_86D9E25143F5AE7281B68597574F631E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "OnDlgSelectedOption_86D9E25143F5AE7281B68597574F631E");

	Params::Quest_5364_C_OnDlgSelectedOption_86D9E25143F5AE7281B68597574F631E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5364.Quest_5364_C.OnSuccess_07DB1CF042A3AA7319D83E8FC647A0E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5364_C::OnSuccess_07DB1CF042A3AA7319D83E8FC647A0E5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5364_C", "OnSuccess_07DB1CF042A3AA7319D83E8FC647A0E5");

	Params::Quest_5364_C_OnSuccess_07DB1CF042A3AA7319D83E8FC647A0E5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
