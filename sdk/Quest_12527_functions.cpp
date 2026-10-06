#pragma once



// Package: Quest_12527

#include "Basic.hpp"

#include "Quest_12527_classes.hpp"
#include "Quest_12527_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12527.Quest_12527_C.ExecuteUbergraph_Quest_12527
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12527_C::ExecuteUbergraph_Quest_12527(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "ExecuteUbergraph_Quest_12527");

	Params::Quest_12527_C_ExecuteUbergraph_Quest_12527 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12527.Quest_12527_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12527_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "HandleFinishing");

	Params::Quest_12527_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12527.Quest_12527_C.OnSuccess_C71FE1AF45156FE8EAE3BD99EE85BE8B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12527_C::OnSuccess_C71FE1AF45156FE8EAE3BD99EE85BE8B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnSuccess_C71FE1AF45156FE8EAE3BD99EE85BE8B");

	Params::Quest_12527_C_OnSuccess_C71FE1AF45156FE8EAE3BD99EE85BE8B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12527.Quest_12527_C.OnSuccess_AB81E56D4CE863DD0C53649EE024F2C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12527_C::OnSuccess_AB81E56D4CE863DD0C53649EE024F2C6(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnSuccess_AB81E56D4CE863DD0C53649EE024F2C6");

	Params::Quest_12527_C_OnSuccess_AB81E56D4CE863DD0C53649EE024F2C6 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12527.Quest_12527_C.OnSuccess_3F1D0E414C3496995F7FD3A2847DB10B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12527_C::OnSuccess_3F1D0E414C3496995F7FD3A2847DB10B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnSuccess_3F1D0E414C3496995F7FD3A2847DB10B");

	Params::Quest_12527_C_OnSuccess_3F1D0E414C3496995F7FD3A2847DB10B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12527.Quest_12527_C.OnFinished_ED20677B4E6D00AA11DC359BE93F48A8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12527_C::OnFinished_ED20677B4E6D00AA11DC359BE93F48A8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnFinished_ED20677B4E6D00AA11DC359BE93F48A8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12527.Quest_12527_C.OnStop_ED20677B4E6D00AA11DC359BE93F48A8
// (BlueprintCallable, BlueprintEvent)

void UQuest_12527_C::OnStop_ED20677B4E6D00AA11DC359BE93F48A8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnStop_ED20677B4E6D00AA11DC359BE93F48A8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12527.Quest_12527_C.OnDlgClosed_6F1360B5490326C6AB49689D2DD1973F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12527_C::OnDlgClosed_6F1360B5490326C6AB49689D2DD1973F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnDlgClosed_6F1360B5490326C6AB49689D2DD1973F");

	Params::Quest_12527_C_OnDlgClosed_6F1360B5490326C6AB49689D2DD1973F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12527.Quest_12527_C.OnDlgSelectedOption_6F1360B5490326C6AB49689D2DD1973F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12527_C::OnDlgSelectedOption_6F1360B5490326C6AB49689D2DD1973F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnDlgSelectedOption_6F1360B5490326C6AB49689D2DD1973F");

	Params::Quest_12527_C_OnDlgSelectedOption_6F1360B5490326C6AB49689D2DD1973F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12527.Quest_12527_C.OnSuccess_D178A29B4E54338247618697B4FD755C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12527_C::OnSuccess_D178A29B4E54338247618697B4FD755C(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12527_C", "OnSuccess_D178A29B4E54338247618697B4FD755C");

	Params::Quest_12527_C_OnSuccess_D178A29B4E54338247618697B4FD755C Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
