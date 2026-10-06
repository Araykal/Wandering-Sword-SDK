#pragma once



// Package: Quest_5446

#include "Basic.hpp"

#include "Quest_5446_classes.hpp"
#include "Quest_5446_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5446.Quest_5446_C.ExecuteUbergraph_Quest_5446
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5446_C::ExecuteUbergraph_Quest_5446(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5446_C", "ExecuteUbergraph_Quest_5446");

	Params::Quest_5446_C_ExecuteUbergraph_Quest_5446 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5446.Quest_5446_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5446_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5446_C", "HandleFinishing");

	Params::Quest_5446_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5446.Quest_5446_C.OnSuccess_B25E76944E3D44AB7C1CB287588355C0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5446_C::OnSuccess_B25E76944E3D44AB7C1CB287588355C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5446_C", "OnSuccess_B25E76944E3D44AB7C1CB287588355C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5446.Quest_5446_C.OnFinished_BF0DB52346279491AB47F69B96391784
// (BlueprintCallable, BlueprintEvent)

void UQuest_5446_C::OnFinished_BF0DB52346279491AB47F69B96391784()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5446_C", "OnFinished_BF0DB52346279491AB47F69B96391784");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5446.Quest_5446_C.OnStop_BF0DB52346279491AB47F69B96391784
// (BlueprintCallable, BlueprintEvent)

void UQuest_5446_C::OnStop_BF0DB52346279491AB47F69B96391784()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5446_C", "OnStop_BF0DB52346279491AB47F69B96391784");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5446.Quest_5446_C.OnDlgClosed_E136BEC34F818AEBC68AF4B33DE478B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5446_C::OnDlgClosed_E136BEC34F818AEBC68AF4B33DE478B8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5446_C", "OnDlgClosed_E136BEC34F818AEBC68AF4B33DE478B8");

	Params::Quest_5446_C_OnDlgClosed_E136BEC34F818AEBC68AF4B33DE478B8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5446.Quest_5446_C.OnDlgSelectedOption_E136BEC34F818AEBC68AF4B33DE478B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5446_C::OnDlgSelectedOption_E136BEC34F818AEBC68AF4B33DE478B8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5446_C", "OnDlgSelectedOption_E136BEC34F818AEBC68AF4B33DE478B8");

	Params::Quest_5446_C_OnDlgSelectedOption_E136BEC34F818AEBC68AF4B33DE478B8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
