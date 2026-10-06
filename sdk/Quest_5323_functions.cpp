#pragma once



// Package: Quest_5323

#include "Basic.hpp"

#include "Quest_5323_classes.hpp"
#include "Quest_5323_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5323.Quest_5323_C.ExecuteUbergraph_Quest_5323
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5323_C::ExecuteUbergraph_Quest_5323(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5323_C", "ExecuteUbergraph_Quest_5323");

	Params::Quest_5323_C_ExecuteUbergraph_Quest_5323 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5323.Quest_5323_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5323_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5323_C", "HandleFinishing");

	Params::Quest_5323_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5323.Quest_5323_C.OnFinished_5426B3774CB15B185747F0A764A81B05
// (BlueprintCallable, BlueprintEvent)

void UQuest_5323_C::OnFinished_5426B3774CB15B185747F0A764A81B05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5323_C", "OnFinished_5426B3774CB15B185747F0A764A81B05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5323.Quest_5323_C.OnStop_5426B3774CB15B185747F0A764A81B05
// (BlueprintCallable, BlueprintEvent)

void UQuest_5323_C::OnStop_5426B3774CB15B185747F0A764A81B05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5323_C", "OnStop_5426B3774CB15B185747F0A764A81B05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5323.Quest_5323_C.OnDlgClosed_C4068502439913A30DC42CA30EF1D767
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5323_C::OnDlgClosed_C4068502439913A30DC42CA30EF1D767(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5323_C", "OnDlgClosed_C4068502439913A30DC42CA30EF1D767");

	Params::Quest_5323_C_OnDlgClosed_C4068502439913A30DC42CA30EF1D767 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5323.Quest_5323_C.OnDlgSelectedOption_C4068502439913A30DC42CA30EF1D767
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5323_C::OnDlgSelectedOption_C4068502439913A30DC42CA30EF1D767(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5323_C", "OnDlgSelectedOption_C4068502439913A30DC42CA30EF1D767");

	Params::Quest_5323_C_OnDlgSelectedOption_C4068502439913A30DC42CA30EF1D767 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
