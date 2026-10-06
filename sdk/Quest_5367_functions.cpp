#pragma once



// Package: Quest_5367

#include "Basic.hpp"

#include "Quest_5367_classes.hpp"
#include "Quest_5367_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5367.Quest_5367_C.ExecuteUbergraph_Quest_5367
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5367_C::ExecuteUbergraph_Quest_5367(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5367_C", "ExecuteUbergraph_Quest_5367");

	Params::Quest_5367_C_ExecuteUbergraph_Quest_5367 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5367.Quest_5367_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5367_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5367_C", "HandleFinishing");

	Params::Quest_5367_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5367.Quest_5367_C.OnSuccess_15F7BC8E4F162D0A32EED1817E512BF5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5367_C::OnSuccess_15F7BC8E4F162D0A32EED1817E512BF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5367_C", "OnSuccess_15F7BC8E4F162D0A32EED1817E512BF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5367.Quest_5367_C.OnFinished_56960D664EF86EA44B67D39C0BFBA40E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5367_C::OnFinished_56960D664EF86EA44B67D39C0BFBA40E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5367_C", "OnFinished_56960D664EF86EA44B67D39C0BFBA40E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5367.Quest_5367_C.OnStop_56960D664EF86EA44B67D39C0BFBA40E
// (BlueprintCallable, BlueprintEvent)

void UQuest_5367_C::OnStop_56960D664EF86EA44B67D39C0BFBA40E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5367_C", "OnStop_56960D664EF86EA44B67D39C0BFBA40E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5367.Quest_5367_C.OnDlgClosed_7310EC064AE5368A5197B1A1A60B0EA9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5367_C::OnDlgClosed_7310EC064AE5368A5197B1A1A60B0EA9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5367_C", "OnDlgClosed_7310EC064AE5368A5197B1A1A60B0EA9");

	Params::Quest_5367_C_OnDlgClosed_7310EC064AE5368A5197B1A1A60B0EA9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5367.Quest_5367_C.OnDlgSelectedOption_7310EC064AE5368A5197B1A1A60B0EA9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5367_C::OnDlgSelectedOption_7310EC064AE5368A5197B1A1A60B0EA9(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5367_C", "OnDlgSelectedOption_7310EC064AE5368A5197B1A1A60B0EA9");

	Params::Quest_5367_C_OnDlgSelectedOption_7310EC064AE5368A5197B1A1A60B0EA9 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
