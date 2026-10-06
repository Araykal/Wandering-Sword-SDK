#pragma once



// Package: Quest_5158

#include "Basic.hpp"

#include "Quest_5158_classes.hpp"
#include "Quest_5158_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5158.Quest_5158_C.ExecuteUbergraph_Quest_5158
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5158_C::ExecuteUbergraph_Quest_5158(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5158_C", "ExecuteUbergraph_Quest_5158");

	Params::Quest_5158_C_ExecuteUbergraph_Quest_5158 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5158.Quest_5158_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5158_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5158_C", "HandleFinishing");

	Params::Quest_5158_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5158.Quest_5158_C.OnSuccess_DC5B9FDB4F2B8F17205A53970632A7BE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5158_C::OnSuccess_DC5B9FDB4F2B8F17205A53970632A7BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5158_C", "OnSuccess_DC5B9FDB4F2B8F17205A53970632A7BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5158.Quest_5158_C.OnFinished_98B6A15344A24A1861A4E28A2C013BB5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5158_C::OnFinished_98B6A15344A24A1861A4E28A2C013BB5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5158_C", "OnFinished_98B6A15344A24A1861A4E28A2C013BB5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5158.Quest_5158_C.OnStop_98B6A15344A24A1861A4E28A2C013BB5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5158_C::OnStop_98B6A15344A24A1861A4E28A2C013BB5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5158_C", "OnStop_98B6A15344A24A1861A4E28A2C013BB5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5158.Quest_5158_C.OnDlgClosed_A168BF6C4258412C1B0A46A2F049C4E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5158_C::OnDlgClosed_A168BF6C4258412C1B0A46A2F049C4E7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5158_C", "OnDlgClosed_A168BF6C4258412C1B0A46A2F049C4E7");

	Params::Quest_5158_C_OnDlgClosed_A168BF6C4258412C1B0A46A2F049C4E7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5158.Quest_5158_C.OnDlgSelectedOption_A168BF6C4258412C1B0A46A2F049C4E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5158_C::OnDlgSelectedOption_A168BF6C4258412C1B0A46A2F049C4E7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5158_C", "OnDlgSelectedOption_A168BF6C4258412C1B0A46A2F049C4E7");

	Params::Quest_5158_C_OnDlgSelectedOption_A168BF6C4258412C1B0A46A2F049C4E7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
