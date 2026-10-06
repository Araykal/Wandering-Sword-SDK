#pragma once



// Package: Quest_28718

#include "Basic.hpp"

#include "Quest_28718_classes.hpp"
#include "Quest_28718_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28718.Quest_28718_C.ExecuteUbergraph_Quest_28718
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28718_C::ExecuteUbergraph_Quest_28718(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28718_C", "ExecuteUbergraph_Quest_28718");

	Params::Quest_28718_C_ExecuteUbergraph_Quest_28718 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28718.Quest_28718_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28718_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28718_C", "HandleFinishing");

	Params::Quest_28718_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28718.Quest_28718_C.OnFinished_24DB701649F0BA849F90ECB346786CE2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28718_C::OnFinished_24DB701649F0BA849F90ECB346786CE2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28718_C", "OnFinished_24DB701649F0BA849F90ECB346786CE2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28718.Quest_28718_C.OnStop_24DB701649F0BA849F90ECB346786CE2
// (BlueprintCallable, BlueprintEvent)

void UQuest_28718_C::OnStop_24DB701649F0BA849F90ECB346786CE2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28718_C", "OnStop_24DB701649F0BA849F90ECB346786CE2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28718.Quest_28718_C.OnDlgClosed_2DD712C64E17F6BD542BC497CF412A33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28718_C::OnDlgClosed_2DD712C64E17F6BD542BC497CF412A33(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28718_C", "OnDlgClosed_2DD712C64E17F6BD542BC497CF412A33");

	Params::Quest_28718_C_OnDlgClosed_2DD712C64E17F6BD542BC497CF412A33 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28718.Quest_28718_C.OnDlgSelectedOption_2DD712C64E17F6BD542BC497CF412A33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28718_C::OnDlgSelectedOption_2DD712C64E17F6BD542BC497CF412A33(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28718_C", "OnDlgSelectedOption_2DD712C64E17F6BD542BC497CF412A33");

	Params::Quest_28718_C_OnDlgSelectedOption_2DD712C64E17F6BD542BC497CF412A33 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
