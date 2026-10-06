#pragma once



// Package: BP_CompareSystem_Base

#include "Basic.hpp"

#include "BP_CompareSystem_Base_classes.hpp"
#include "BP_CompareSystem_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.ExecuteUbergraph_BP_CompareSystem_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::ExecuteUbergraph_BP_CompareSystem_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "ExecuteUbergraph_BP_CompareSystem_Base");

	Params::BP_CompareSystem_Base_C_ExecuteUbergraph_BP_CompareSystem_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_CompareSystem_Base_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.Active
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::Active(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "Active");

	Params::BP_CompareSystem_Base_C_Active Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnCompareLose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnCompareLose(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnCompareLose");

	Params::BP_CompareSystem_Base_C_OnCompareLose Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnCompareWin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnCompareWin(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnCompareWin");

	Params::BP_CompareSystem_Base_C_OnCompareWin Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnSuccess_41A8752C4C7690442DEEC4A329FD19F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CompareSystem_Base_C::OnSuccess_41A8752C4C7690442DEEC4A329FD19F6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnSuccess_41A8752C4C7690442DEEC4A329FD19F6");

	Params::BP_CompareSystem_Base_C_OnSuccess_41A8752C4C7690442DEEC4A329FD19F6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnStartShow_80EA8AAF4A0F0B604BBD04B48D36E34F
// (BlueprintCallable, BlueprintEvent)

void UBP_CompareSystem_Base_C::OnStartShow_80EA8AAF4A0F0B604BBD04B48D36E34F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnStartShow_80EA8AAF4A0F0B604BBD04B48D36E34F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnEndShow_80EA8AAF4A0F0B604BBD04B48D36E34F
// (BlueprintCallable, BlueprintEvent)

void UBP_CompareSystem_Base_C::OnEndShow_80EA8AAF4A0F0B604BBD04B48D36E34F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnEndShow_80EA8AAF4A0F0B604BBD04B48D36E34F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnSuccess_2CAFAD93449584013EE7868B86AB988D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CompareSystem_Base_C::OnSuccess_2CAFAD93449584013EE7868B86AB988D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnSuccess_2CAFAD93449584013EE7868B86AB988D");

	Params::BP_CompareSystem_Base_C_OnSuccess_2CAFAD93449584013EE7868B86AB988D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnDlgClosed_DFA0A49D4F4987E0EBD2B6A566F089BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnDlgClosed_DFA0A49D4F4987E0EBD2B6A566F089BB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnDlgClosed_DFA0A49D4F4987E0EBD2B6A566F089BB");

	Params::BP_CompareSystem_Base_C_OnDlgClosed_DFA0A49D4F4987E0EBD2B6A566F089BB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnDlgSelectedOption_DFA0A49D4F4987E0EBD2B6A566F089BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnDlgSelectedOption_DFA0A49D4F4987E0EBD2B6A566F089BB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnDlgSelectedOption_DFA0A49D4F4987E0EBD2B6A566F089BB");

	Params::BP_CompareSystem_Base_C_OnDlgSelectedOption_DFA0A49D4F4987E0EBD2B6A566F089BB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnDlgClosed_EB1E6A5346A3042986E1F8809793F66B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnDlgClosed_EB1E6A5346A3042986E1F8809793F66B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnDlgClosed_EB1E6A5346A3042986E1F8809793F66B");

	Params::BP_CompareSystem_Base_C_OnDlgClosed_EB1E6A5346A3042986E1F8809793F66B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnDlgSelectedOption_EB1E6A5346A3042986E1F8809793F66B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnDlgSelectedOption_EB1E6A5346A3042986E1F8809793F66B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnDlgSelectedOption_EB1E6A5346A3042986E1F8809793F66B");

	Params::BP_CompareSystem_Base_C_OnDlgSelectedOption_EB1E6A5346A3042986E1F8809793F66B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnDlgClosed_74660D4F4279D9E0B5075DA8BB820C52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnDlgClosed_74660D4F4279D9E0B5075DA8BB820C52(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnDlgClosed_74660D4F4279D9E0B5075DA8BB820C52");

	Params::BP_CompareSystem_Base_C_OnDlgClosed_74660D4F4279D9E0B5075DA8BB820C52 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.OnDlgSelectedOption_74660D4F4279D9E0B5075DA8BB820C52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompareSystem_Base_C::OnDlgSelectedOption_74660D4F4279D9E0B5075DA8BB820C52(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "OnDlgSelectedOption_74660D4F4279D9E0B5075DA8BB820C52");

	Params::BP_CompareSystem_Base_C_OnDlgSelectedOption_74660D4F4279D9E0B5075DA8BB820C52 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.CheckRequirement
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_CompareSystem_Base_C::CheckRequirement(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "CheckRequirement");

	Params::BP_CompareSystem_Base_C_CheckRequirement Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CompareSystem_Base.BP_CompareSystem_Base_C.On Fail
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CompareSystem_Base_C::On_Fail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompareSystem_Base_C", "On Fail");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
