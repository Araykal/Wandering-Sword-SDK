#pragma once



// Package: Quest_12396

#include "Basic.hpp"

#include "Quest_12396_classes.hpp"
#include "Quest_12396_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12396.Quest_12396_C.ExecuteUbergraph_Quest_12396
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12396_C::ExecuteUbergraph_Quest_12396(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12396_C", "ExecuteUbergraph_Quest_12396");

	Params::Quest_12396_C_ExecuteUbergraph_Quest_12396 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12396.Quest_12396_C.好感度
// (BlueprintCallable, BlueprintEvent)

void UQuest_12396_C::好感度()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12396_C", "好感度");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12396.Quest_12396_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12396_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12396_C", "HandleFinishing");

	Params::Quest_12396_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12396.Quest_12396_C.OnFinished_EFAE845840B16D59D24E0E8F9C9C5D79
// (BlueprintCallable, BlueprintEvent)

void UQuest_12396_C::OnFinished_EFAE845840B16D59D24E0E8F9C9C5D79()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12396_C", "OnFinished_EFAE845840B16D59D24E0E8F9C9C5D79");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12396.Quest_12396_C.OnStop_EFAE845840B16D59D24E0E8F9C9C5D79
// (BlueprintCallable, BlueprintEvent)

void UQuest_12396_C::OnStop_EFAE845840B16D59D24E0E8F9C9C5D79()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12396_C", "OnStop_EFAE845840B16D59D24E0E8F9C9C5D79");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12396.Quest_12396_C.OnDlgClosed_581A0F3D441BE111BA4880B841D9BD43
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12396_C::OnDlgClosed_581A0F3D441BE111BA4880B841D9BD43(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12396_C", "OnDlgClosed_581A0F3D441BE111BA4880B841D9BD43");

	Params::Quest_12396_C_OnDlgClosed_581A0F3D441BE111BA4880B841D9BD43 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12396.Quest_12396_C.OnDlgSelectedOption_581A0F3D441BE111BA4880B841D9BD43
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12396_C::OnDlgSelectedOption_581A0F3D441BE111BA4880B841D9BD43(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12396_C", "OnDlgSelectedOption_581A0F3D441BE111BA4880B841D9BD43");

	Params::Quest_12396_C_OnDlgSelectedOption_581A0F3D441BE111BA4880B841D9BD43 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
