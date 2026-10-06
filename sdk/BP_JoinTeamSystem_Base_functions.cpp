#pragma once



// Package: BP_JoinTeamSystem_Base

#include "Basic.hpp"

#include "BP_JoinTeamSystem_Base_classes.hpp"
#include "BP_JoinTeamSystem_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.ExecuteUbergraph_BP_JoinTeamSystem_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JoinTeamSystem_Base_C::ExecuteUbergraph_BP_JoinTeamSystem_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JoinTeamSystem_Base_C", "ExecuteUbergraph_BP_JoinTeamSystem_Base");

	Params::BP_JoinTeamSystem_Base_C_ExecuteUbergraph_BP_JoinTeamSystem_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.Active
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JoinTeamSystem_Base_C::Active(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JoinTeamSystem_Base_C", "Active");

	Params::BP_JoinTeamSystem_Base_C_Active Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnJoinFail
// (BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JoinTeamSystem_Base_C::OnJoinFail(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JoinTeamSystem_Base_C", "OnJoinFail");

	Params::BP_JoinTeamSystem_Base_C_OnJoinFail Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnJoinSuss
// (BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JoinTeamSystem_Base_C::OnJoinSuss(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JoinTeamSystem_Base_C", "OnJoinSuss");

	Params::BP_JoinTeamSystem_Base_C_OnJoinSuss Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JoinTeamSystem_Base_C::OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JoinTeamSystem_Base_C", "OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3");

	Params::BP_JoinTeamSystem_Base_C_OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JoinTeamSystem_Base_C::OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JoinTeamSystem_Base_C", "OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3");

	Params::BP_JoinTeamSystem_Base_C_OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C.CheckRequirement
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_JoinTeamSystem_Base_C::CheckRequirement(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JoinTeamSystem_Base_C", "CheckRequirement");

	Params::BP_JoinTeamSystem_Base_C_CheckRequirement Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
