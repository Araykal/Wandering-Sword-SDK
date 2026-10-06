#pragma once



// Package: Quest_28749

#include "Basic.hpp"

#include "Quest_28749_classes.hpp"
#include "Quest_28749_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28749.Quest_28749_C.ExecuteUbergraph_Quest_28749
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28749_C::ExecuteUbergraph_Quest_28749(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28749_C", "ExecuteUbergraph_Quest_28749");

	Params::Quest_28749_C_ExecuteUbergraph_Quest_28749 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28749.Quest_28749_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28749_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28749_C", "HandleFinishing");

	Params::Quest_28749_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28749.Quest_28749_C.OnSuccess_932E621745CF41E4F1D1049954FED189
// (BlueprintCallable, BlueprintEvent)

void UQuest_28749_C::OnSuccess_932E621745CF41E4F1D1049954FED189()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28749_C", "OnSuccess_932E621745CF41E4F1D1049954FED189");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28749.Quest_28749_C.OnFinished_DAC05C4D4E33F6273B16A181F7DE760E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28749_C::OnFinished_DAC05C4D4E33F6273B16A181F7DE760E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28749_C", "OnFinished_DAC05C4D4E33F6273B16A181F7DE760E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28749.Quest_28749_C.OnStop_DAC05C4D4E33F6273B16A181F7DE760E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28749_C::OnStop_DAC05C4D4E33F6273B16A181F7DE760E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28749_C", "OnStop_DAC05C4D4E33F6273B16A181F7DE760E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28749.Quest_28749_C.OnDlgClosed_A96190F24A2CF98D1682D2934A95310C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28749_C::OnDlgClosed_A96190F24A2CF98D1682D2934A95310C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28749_C", "OnDlgClosed_A96190F24A2CF98D1682D2934A95310C");

	Params::Quest_28749_C_OnDlgClosed_A96190F24A2CF98D1682D2934A95310C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28749.Quest_28749_C.OnDlgSelectedOption_A96190F24A2CF98D1682D2934A95310C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28749_C::OnDlgSelectedOption_A96190F24A2CF98D1682D2934A95310C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28749_C", "OnDlgSelectedOption_A96190F24A2CF98D1682D2934A95310C");

	Params::Quest_28749_C_OnDlgSelectedOption_A96190F24A2CF98D1682D2934A95310C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
