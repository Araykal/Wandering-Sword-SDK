#pragma once



// Package: Quest_5386

#include "Basic.hpp"

#include "Quest_5386_classes.hpp"
#include "Quest_5386_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5386.Quest_5386_C.ExecuteUbergraph_Quest_5386
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5386_C::ExecuteUbergraph_Quest_5386(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "ExecuteUbergraph_Quest_5386");

	Params::Quest_5386_C_ExecuteUbergraph_Quest_5386 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5386.Quest_5386_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5386_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "HandleFinishing");

	Params::Quest_5386_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5386.Quest_5386_C.OnSuccess_7C415CAE4E3F57CB7B43CD848A18287D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5386_C::OnSuccess_7C415CAE4E3F57CB7B43CD848A18287D(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnSuccess_7C415CAE4E3F57CB7B43CD848A18287D");

	Params::Quest_5386_C_OnSuccess_7C415CAE4E3F57CB7B43CD848A18287D Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5386.Quest_5386_C.OnSuccess_683C7B3441420B1C52F1069A5CA984B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5386_C::OnSuccess_683C7B3441420B1C52F1069A5CA984B1(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnSuccess_683C7B3441420B1C52F1069A5CA984B1");

	Params::Quest_5386_C_OnSuccess_683C7B3441420B1C52F1069A5CA984B1 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5386.Quest_5386_C.OnSuccess_CD60CD44463C715CD44E0B96CE671FDE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5386_C::OnSuccess_CD60CD44463C715CD44E0B96CE671FDE(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnSuccess_CD60CD44463C715CD44E0B96CE671FDE");

	Params::Quest_5386_C_OnSuccess_CD60CD44463C715CD44E0B96CE671FDE Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5386.Quest_5386_C.OnFinished_8DCCC4D048905D778FDEFDA2457159D6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5386_C::OnFinished_8DCCC4D048905D778FDEFDA2457159D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnFinished_8DCCC4D048905D778FDEFDA2457159D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5386.Quest_5386_C.OnStop_8DCCC4D048905D778FDEFDA2457159D6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5386_C::OnStop_8DCCC4D048905D778FDEFDA2457159D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnStop_8DCCC4D048905D778FDEFDA2457159D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5386.Quest_5386_C.OnDlgClosed_1C0CAAFE456BB1A70B1FF39026C25BA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5386_C::OnDlgClosed_1C0CAAFE456BB1A70B1FF39026C25BA8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnDlgClosed_1C0CAAFE456BB1A70B1FF39026C25BA8");

	Params::Quest_5386_C_OnDlgClosed_1C0CAAFE456BB1A70B1FF39026C25BA8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5386.Quest_5386_C.OnDlgSelectedOption_1C0CAAFE456BB1A70B1FF39026C25BA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5386_C::OnDlgSelectedOption_1C0CAAFE456BB1A70B1FF39026C25BA8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnDlgSelectedOption_1C0CAAFE456BB1A70B1FF39026C25BA8");

	Params::Quest_5386_C_OnDlgSelectedOption_1C0CAAFE456BB1A70B1FF39026C25BA8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5386.Quest_5386_C.OnSuccess_F50376FA4FF5F165FB9455854633E4E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5386_C::OnSuccess_F50376FA4FF5F165FB9455854633E4E8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5386_C", "OnSuccess_F50376FA4FF5F165FB9455854633E4E8");

	Params::Quest_5386_C_OnSuccess_F50376FA4FF5F165FB9455854633E4E8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
