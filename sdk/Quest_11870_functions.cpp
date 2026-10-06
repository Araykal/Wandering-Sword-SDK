#pragma once



// Package: Quest_11870

#include "Basic.hpp"

#include "Quest_11870_classes.hpp"
#include "Quest_11870_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11870.Quest_11870_C.ExecuteUbergraph_Quest_11870
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11870_C::ExecuteUbergraph_Quest_11870(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11870_C", "ExecuteUbergraph_Quest_11870");

	Params::Quest_11870_C_ExecuteUbergraph_Quest_11870 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11870.Quest_11870_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11870_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11870_C", "HandleFinishing");

	Params::Quest_11870_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11870.Quest_11870_C.OnFinished_F4E76AD34E18CEE6AFCE69A32A01CA5F
// (BlueprintCallable, BlueprintEvent)

void UQuest_11870_C::OnFinished_F4E76AD34E18CEE6AFCE69A32A01CA5F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11870_C", "OnFinished_F4E76AD34E18CEE6AFCE69A32A01CA5F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11870.Quest_11870_C.OnStop_F4E76AD34E18CEE6AFCE69A32A01CA5F
// (BlueprintCallable, BlueprintEvent)

void UQuest_11870_C::OnStop_F4E76AD34E18CEE6AFCE69A32A01CA5F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11870_C", "OnStop_F4E76AD34E18CEE6AFCE69A32A01CA5F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11870.Quest_11870_C.OnDlgClosed_7BF0321A41450FD055D11DAEC3EA1D88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11870_C::OnDlgClosed_7BF0321A41450FD055D11DAEC3EA1D88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11870_C", "OnDlgClosed_7BF0321A41450FD055D11DAEC3EA1D88");

	Params::Quest_11870_C_OnDlgClosed_7BF0321A41450FD055D11DAEC3EA1D88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11870.Quest_11870_C.OnDlgSelectedOption_7BF0321A41450FD055D11DAEC3EA1D88
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11870_C::OnDlgSelectedOption_7BF0321A41450FD055D11DAEC3EA1D88(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11870_C", "OnDlgSelectedOption_7BF0321A41450FD055D11DAEC3EA1D88");

	Params::Quest_11870_C_OnDlgSelectedOption_7BF0321A41450FD055D11DAEC3EA1D88 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
