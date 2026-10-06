#pragma once



// Package: Quest_5790

#include "Basic.hpp"

#include "Quest_5790_classes.hpp"
#include "Quest_5790_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5790.Quest_5790_C.ExecuteUbergraph_Quest_5790
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5790_C::ExecuteUbergraph_Quest_5790(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5790_C", "ExecuteUbergraph_Quest_5790");

	Params::Quest_5790_C_ExecuteUbergraph_Quest_5790 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5790.Quest_5790_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5790_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5790_C", "HandleFinishing");

	Params::Quest_5790_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5790.Quest_5790_C.OnSuccess_361CC9BC48F25823A7E0CA918F6E100C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5790_C::OnSuccess_361CC9BC48F25823A7E0CA918F6E100C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5790_C", "OnSuccess_361CC9BC48F25823A7E0CA918F6E100C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5790.Quest_5790_C.OnFinished_66AB0F1340399FF5B93010B51D3F28FD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5790_C::OnFinished_66AB0F1340399FF5B93010B51D3F28FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5790_C", "OnFinished_66AB0F1340399FF5B93010B51D3F28FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5790.Quest_5790_C.OnStop_66AB0F1340399FF5B93010B51D3F28FD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5790_C::OnStop_66AB0F1340399FF5B93010B51D3F28FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5790_C", "OnStop_66AB0F1340399FF5B93010B51D3F28FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5790.Quest_5790_C.OnDlgClosed_1AE4099E430D6E3590153B952585F1A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5790_C::OnDlgClosed_1AE4099E430D6E3590153B952585F1A1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5790_C", "OnDlgClosed_1AE4099E430D6E3590153B952585F1A1");

	Params::Quest_5790_C_OnDlgClosed_1AE4099E430D6E3590153B952585F1A1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5790.Quest_5790_C.OnDlgSelectedOption_1AE4099E430D6E3590153B952585F1A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5790_C::OnDlgSelectedOption_1AE4099E430D6E3590153B952585F1A1(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5790_C", "OnDlgSelectedOption_1AE4099E430D6E3590153B952585F1A1");

	Params::Quest_5790_C_OnDlgSelectedOption_1AE4099E430D6E3590153B952585F1A1 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
