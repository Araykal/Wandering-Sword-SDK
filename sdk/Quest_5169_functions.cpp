#pragma once



// Package: Quest_5169

#include "Basic.hpp"

#include "Quest_5169_classes.hpp"
#include "Quest_5169_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5169.Quest_5169_C.ExecuteUbergraph_Quest_5169
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5169_C::ExecuteUbergraph_Quest_5169(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "ExecuteUbergraph_Quest_5169");

	Params::Quest_5169_C_ExecuteUbergraph_Quest_5169 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5169.Quest_5169_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5169_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "HandleFinishing");

	Params::Quest_5169_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5169.Quest_5169_C.OnSuccess_AE71455E436FB74A975F93A870143133
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5169_C::OnSuccess_AE71455E436FB74A975F93A870143133(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnSuccess_AE71455E436FB74A975F93A870143133");

	Params::Quest_5169_C_OnSuccess_AE71455E436FB74A975F93A870143133 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5169.Quest_5169_C.OnSuccess_B5A20DAA426C86DCA35497A293259FA1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5169_C::OnSuccess_B5A20DAA426C86DCA35497A293259FA1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnSuccess_B5A20DAA426C86DCA35497A293259FA1");

	Params::Quest_5169_C_OnSuccess_B5A20DAA426C86DCA35497A293259FA1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5169.Quest_5169_C.OnSuccess_F167E44741FDB4C5CEDC278F9C2AEA57
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5169_C::OnSuccess_F167E44741FDB4C5CEDC278F9C2AEA57(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnSuccess_F167E44741FDB4C5CEDC278F9C2AEA57");

	Params::Quest_5169_C_OnSuccess_F167E44741FDB4C5CEDC278F9C2AEA57 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5169.Quest_5169_C.OnFinished_9DD4DBE94C8A2F339D8F7EA008DD1EA2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5169_C::OnFinished_9DD4DBE94C8A2F339D8F7EA008DD1EA2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnFinished_9DD4DBE94C8A2F339D8F7EA008DD1EA2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5169.Quest_5169_C.OnStop_9DD4DBE94C8A2F339D8F7EA008DD1EA2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5169_C::OnStop_9DD4DBE94C8A2F339D8F7EA008DD1EA2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnStop_9DD4DBE94C8A2F339D8F7EA008DD1EA2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5169.Quest_5169_C.OnDlgClosed_A432534343264CDA48A9B69D438540C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5169_C::OnDlgClosed_A432534343264CDA48A9B69D438540C4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnDlgClosed_A432534343264CDA48A9B69D438540C4");

	Params::Quest_5169_C_OnDlgClosed_A432534343264CDA48A9B69D438540C4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5169.Quest_5169_C.OnDlgSelectedOption_A432534343264CDA48A9B69D438540C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5169_C::OnDlgSelectedOption_A432534343264CDA48A9B69D438540C4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnDlgSelectedOption_A432534343264CDA48A9B69D438540C4");

	Params::Quest_5169_C_OnDlgSelectedOption_A432534343264CDA48A9B69D438540C4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5169.Quest_5169_C.OnSuccess_C7B34D1844B8B726F710FAB5FD4C5BC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5169_C::OnSuccess_C7B34D1844B8B726F710FAB5FD4C5BC7(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5169_C", "OnSuccess_C7B34D1844B8B726F710FAB5FD4C5BC7");

	Params::Quest_5169_C_OnSuccess_C7B34D1844B8B726F710FAB5FD4C5BC7 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
