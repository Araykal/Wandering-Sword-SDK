#pragma once



// Package: Quest_12528

#include "Basic.hpp"

#include "Quest_12528_classes.hpp"
#include "Quest_12528_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12528.Quest_12528_C.ExecuteUbergraph_Quest_12528
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12528_C::ExecuteUbergraph_Quest_12528(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "ExecuteUbergraph_Quest_12528");

	Params::Quest_12528_C_ExecuteUbergraph_Quest_12528 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12528.Quest_12528_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12528_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "HandleFinishing");

	Params::Quest_12528_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12528.Quest_12528_C.OnSuccess_DF738B9045F48609A800D1A1CB46576C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12528_C::OnSuccess_DF738B9045F48609A800D1A1CB46576C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "OnSuccess_DF738B9045F48609A800D1A1CB46576C");

	Params::Quest_12528_C_OnSuccess_DF738B9045F48609A800D1A1CB46576C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12528.Quest_12528_C.OnFinished_40D868AE44A3CF4DB03B85B3D75A24DC
// (BlueprintCallable, BlueprintEvent)

void UQuest_12528_C::OnFinished_40D868AE44A3CF4DB03B85B3D75A24DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "OnFinished_40D868AE44A3CF4DB03B85B3D75A24DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12528.Quest_12528_C.OnStop_40D868AE44A3CF4DB03B85B3D75A24DC
// (BlueprintCallable, BlueprintEvent)

void UQuest_12528_C::OnStop_40D868AE44A3CF4DB03B85B3D75A24DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "OnStop_40D868AE44A3CF4DB03B85B3D75A24DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12528.Quest_12528_C.OnDlgClosed_57968A984343631A9B98B5B9EB2EA401
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12528_C::OnDlgClosed_57968A984343631A9B98B5B9EB2EA401(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "OnDlgClosed_57968A984343631A9B98B5B9EB2EA401");

	Params::Quest_12528_C_OnDlgClosed_57968A984343631A9B98B5B9EB2EA401 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12528.Quest_12528_C.OnDlgSelectedOption_57968A984343631A9B98B5B9EB2EA401
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12528_C::OnDlgSelectedOption_57968A984343631A9B98B5B9EB2EA401(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "OnDlgSelectedOption_57968A984343631A9B98B5B9EB2EA401");

	Params::Quest_12528_C_OnDlgSelectedOption_57968A984343631A9B98B5B9EB2EA401 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12528.Quest_12528_C.OnSuccess_804D8700477643CAD89EEF8AA4B6BF52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12528_C::OnSuccess_804D8700477643CAD89EEF8AA4B6BF52(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12528_C", "OnSuccess_804D8700477643CAD89EEF8AA4B6BF52");

	Params::Quest_12528_C_OnSuccess_804D8700477643CAD89EEF8AA4B6BF52 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
