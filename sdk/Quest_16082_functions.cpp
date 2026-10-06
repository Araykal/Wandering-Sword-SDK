#pragma once



// Package: Quest_16082

#include "Basic.hpp"

#include "Quest_16082_classes.hpp"
#include "Quest_16082_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16082.Quest_16082_C.ExecuteUbergraph_Quest_16082
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16082_C::ExecuteUbergraph_Quest_16082(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "ExecuteUbergraph_Quest_16082");

	Params::Quest_16082_C_ExecuteUbergraph_Quest_16082 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16082.Quest_16082_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16082_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "HandleFinishing");

	Params::Quest_16082_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16082.Quest_16082_C.OnSuccess_56D3D56F4F8F3CA4428CBF97C45726E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16082_C::OnSuccess_56D3D56F4F8F3CA4428CBF97C45726E0(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnSuccess_56D3D56F4F8F3CA4428CBF97C45726E0");

	Params::Quest_16082_C_OnSuccess_56D3D56F4F8F3CA4428CBF97C45726E0 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16082.Quest_16082_C.OnSuccess_B4FDCE7E4DA43CE019C05CA8D9956B1F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16082_C::OnSuccess_B4FDCE7E4DA43CE019C05CA8D9956B1F(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnSuccess_B4FDCE7E4DA43CE019C05CA8D9956B1F");

	Params::Quest_16082_C_OnSuccess_B4FDCE7E4DA43CE019C05CA8D9956B1F Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16082.Quest_16082_C.OnSuccess_7A2930934A043EFC269FCD97A5F88D61
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16082_C::OnSuccess_7A2930934A043EFC269FCD97A5F88D61(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnSuccess_7A2930934A043EFC269FCD97A5F88D61");

	Params::Quest_16082_C_OnSuccess_7A2930934A043EFC269FCD97A5F88D61 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16082.Quest_16082_C.OnFinished_E33EC0D04BE0AB88B3F674A4A1132C2A
// (BlueprintCallable, BlueprintEvent)

void UQuest_16082_C::OnFinished_E33EC0D04BE0AB88B3F674A4A1132C2A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnFinished_E33EC0D04BE0AB88B3F674A4A1132C2A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16082.Quest_16082_C.OnStop_E33EC0D04BE0AB88B3F674A4A1132C2A
// (BlueprintCallable, BlueprintEvent)

void UQuest_16082_C::OnStop_E33EC0D04BE0AB88B3F674A4A1132C2A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnStop_E33EC0D04BE0AB88B3F674A4A1132C2A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16082.Quest_16082_C.OnDlgClosed_00B754044FCB2AA032E3CBAEBC65C6E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16082_C::OnDlgClosed_00B754044FCB2AA032E3CBAEBC65C6E7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnDlgClosed_00B754044FCB2AA032E3CBAEBC65C6E7");

	Params::Quest_16082_C_OnDlgClosed_00B754044FCB2AA032E3CBAEBC65C6E7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16082.Quest_16082_C.OnDlgSelectedOption_00B754044FCB2AA032E3CBAEBC65C6E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16082_C::OnDlgSelectedOption_00B754044FCB2AA032E3CBAEBC65C6E7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnDlgSelectedOption_00B754044FCB2AA032E3CBAEBC65C6E7");

	Params::Quest_16082_C_OnDlgSelectedOption_00B754044FCB2AA032E3CBAEBC65C6E7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16082.Quest_16082_C.OnSuccess_2A2EAED54FAACEBF70EE2AB92309C13C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_16082_C::OnSuccess_2A2EAED54FAACEBF70EE2AB92309C13C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16082_C", "OnSuccess_2A2EAED54FAACEBF70EE2AB92309C13C");

	Params::Quest_16082_C_OnSuccess_2A2EAED54FAACEBF70EE2AB92309C13C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
