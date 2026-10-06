#pragma once



// Package: Quest_5260

#include "Basic.hpp"

#include "Quest_5260_classes.hpp"
#include "Quest_5260_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5260.Quest_5260_C.ExecuteUbergraph_Quest_5260
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5260_C::ExecuteUbergraph_Quest_5260(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5260_C", "ExecuteUbergraph_Quest_5260");

	Params::Quest_5260_C_ExecuteUbergraph_Quest_5260 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5260.Quest_5260_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5260_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5260_C", "HandleFinishing");

	Params::Quest_5260_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5260.Quest_5260_C.OnSuccess_61080B0840E358BD4955CFA1EE8B61B5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5260_C::OnSuccess_61080B0840E358BD4955CFA1EE8B61B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5260_C", "OnSuccess_61080B0840E358BD4955CFA1EE8B61B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5260.Quest_5260_C.OnFinished_3D2172C84216EAD6B2DCFBA2779F17DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5260_C::OnFinished_3D2172C84216EAD6B2DCFBA2779F17DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5260_C", "OnFinished_3D2172C84216EAD6B2DCFBA2779F17DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5260.Quest_5260_C.OnStop_3D2172C84216EAD6B2DCFBA2779F17DA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5260_C::OnStop_3D2172C84216EAD6B2DCFBA2779F17DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5260_C", "OnStop_3D2172C84216EAD6B2DCFBA2779F17DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5260.Quest_5260_C.OnDlgClosed_9133EABF42D6916BC7541EB044561EF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5260_C::OnDlgClosed_9133EABF42D6916BC7541EB044561EF5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5260_C", "OnDlgClosed_9133EABF42D6916BC7541EB044561EF5");

	Params::Quest_5260_C_OnDlgClosed_9133EABF42D6916BC7541EB044561EF5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5260.Quest_5260_C.OnDlgSelectedOption_9133EABF42D6916BC7541EB044561EF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5260_C::OnDlgSelectedOption_9133EABF42D6916BC7541EB044561EF5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5260_C", "OnDlgSelectedOption_9133EABF42D6916BC7541EB044561EF5");

	Params::Quest_5260_C_OnDlgSelectedOption_9133EABF42D6916BC7541EB044561EF5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
