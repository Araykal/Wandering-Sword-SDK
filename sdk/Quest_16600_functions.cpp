#pragma once



// Package: Quest_16600

#include "Basic.hpp"

#include "Quest_16600_classes.hpp"
#include "Quest_16600_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16600.Quest_16600_C.ExecuteUbergraph_Quest_16600
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16600_C::ExecuteUbergraph_Quest_16600(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "ExecuteUbergraph_Quest_16600");

	Params::Quest_16600_C_ExecuteUbergraph_Quest_16600 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16600.Quest_16600_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16600_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "HandleFinishing");

	Params::Quest_16600_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16600.Quest_16600_C.OnSuccess_ABF1A9B14E7175B46068B6AD0AD0540A
// (BlueprintCallable, BlueprintEvent)

void UQuest_16600_C::OnSuccess_ABF1A9B14E7175B46068B6AD0AD0540A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnSuccess_ABF1A9B14E7175B46068B6AD0AD0540A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16600.Quest_16600_C.OnSuccess_1D677E5745947E02B333108F93E2E8A9
// (BlueprintCallable, BlueprintEvent)

void UQuest_16600_C::OnSuccess_1D677E5745947E02B333108F93E2E8A9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnSuccess_1D677E5745947E02B333108F93E2E8A9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16600.Quest_16600_C.OnSuccess_49BA55E74FD5CBFDD242178DA59B0D81
// (BlueprintCallable, BlueprintEvent)

void UQuest_16600_C::OnSuccess_49BA55E74FD5CBFDD242178DA59B0D81()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnSuccess_49BA55E74FD5CBFDD242178DA59B0D81");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16600.Quest_16600_C.OnSuccess_0EBCFF914201C3B20FD1D7BA63A4C984
// (BlueprintCallable, BlueprintEvent)

void UQuest_16600_C::OnSuccess_0EBCFF914201C3B20FD1D7BA63A4C984()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnSuccess_0EBCFF914201C3B20FD1D7BA63A4C984");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16600.Quest_16600_C.OnSuccess_AE2383FE4B3436127FC30B8AD189042D
// (BlueprintCallable, BlueprintEvent)

void UQuest_16600_C::OnSuccess_AE2383FE4B3436127FC30B8AD189042D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnSuccess_AE2383FE4B3436127FC30B8AD189042D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16600.Quest_16600_C.OnFinished_C2D1D0AE4C43548044853B88DA814BE9
// (BlueprintCallable, BlueprintEvent)

void UQuest_16600_C::OnFinished_C2D1D0AE4C43548044853B88DA814BE9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnFinished_C2D1D0AE4C43548044853B88DA814BE9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16600.Quest_16600_C.OnStop_C2D1D0AE4C43548044853B88DA814BE9
// (BlueprintCallable, BlueprintEvent)

void UQuest_16600_C::OnStop_C2D1D0AE4C43548044853B88DA814BE9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnStop_C2D1D0AE4C43548044853B88DA814BE9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16600.Quest_16600_C.OnDlgClosed_8557074C404F8D5B8315A8B9708E3788
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16600_C::OnDlgClosed_8557074C404F8D5B8315A8B9708E3788(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnDlgClosed_8557074C404F8D5B8315A8B9708E3788");

	Params::Quest_16600_C_OnDlgClosed_8557074C404F8D5B8315A8B9708E3788 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16600.Quest_16600_C.OnDlgSelectedOption_8557074C404F8D5B8315A8B9708E3788
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16600_C::OnDlgSelectedOption_8557074C404F8D5B8315A8B9708E3788(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16600_C", "OnDlgSelectedOption_8557074C404F8D5B8315A8B9708E3788");

	Params::Quest_16600_C_OnDlgSelectedOption_8557074C404F8D5B8315A8B9708E3788 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
