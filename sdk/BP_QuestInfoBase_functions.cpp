#pragma once



// Package: BP_QuestInfoBase

#include "Basic.hpp"

#include "BP_QuestInfoBase_classes.hpp"
#include "BP_QuestInfoBase_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_QuestInfoBase.BP_QuestInfoBase_C.ExecuteUbergraph_BP_QuestInfoBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::ExecuteUbergraph_BP_QuestInfoBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "ExecuteUbergraph_BP_QuestInfoBase");

	Params::BP_QuestInfoBase_C_ExecuteUbergraph_BP_QuestInfoBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleFailing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleFailing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleFailing");

	Params::BP_QuestInfoBase_C_HandleFailing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleUnFinishForRequestNPC
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleUnFinishForRequestNPC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleUnFinishForRequestNPC");

	Params::BP_QuestInfoBase_C_HandleUnFinishForRequestNPC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleUnFinishForFinishNPC
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleUnFinishForFinishNPC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleUnFinishForFinishNPC");

	Params::BP_QuestInfoBase_C_HandleUnFinishForFinishNPC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleRequesting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleRequesting(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleRequesting");

	Params::BP_QuestInfoBase_C_HandleRequesting Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleRefuseRequested
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleRefuseRequested(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleRefuseRequested");

	Params::BP_QuestInfoBase_C_HandleRefuseRequested Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleProcessedFail
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleProcessedFail(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleProcessedFail");

	Params::BP_QuestInfoBase_C_HandleProcessedFail Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleProcessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleProcessed(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleProcessed");

	Params::BP_QuestInfoBase_C_HandleProcessed Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleAcceptRequested
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleAcceptRequested(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleAcceptRequested");

	Params::BP_QuestInfoBase_C_HandleAcceptRequested Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "HandleFinishing");

	Params::BP_QuestInfoBase_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0");

	Params::BP_QuestInfoBase_C_OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA");

	Params::BP_QuestInfoBase_C_OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD");

	Params::BP_QuestInfoBase_C_OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnFinished_ED2FD6C84DDC23E3BE07BF89B667253F
// (BlueprintCallable, BlueprintEvent)

void UBP_QuestInfoBase_C::OnFinished_ED2FD6C84DDC23E3BE07BF89B667253F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnFinished_ED2FD6C84DDC23E3BE07BF89B667253F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnStop_ED2FD6C84DDC23E3BE07BF89B667253F
// (BlueprintCallable, BlueprintEvent)

void UBP_QuestInfoBase_C::OnStop_ED2FD6C84DDC23E3BE07BF89B667253F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnStop_ED2FD6C84DDC23E3BE07BF89B667253F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7");

	Params::BP_QuestInfoBase_C_OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60");

	Params::BP_QuestInfoBase_C_OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnFinished_A36844B94465CF4588117E8F9D053128
// (BlueprintCallable, BlueprintEvent)

void UBP_QuestInfoBase_C::OnFinished_A36844B94465CF4588117E8F9D053128()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnFinished_A36844B94465CF4588117E8F9D053128");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnStop_A36844B94465CF4588117E8F9D053128
// (BlueprintCallable, BlueprintEvent)

void UBP_QuestInfoBase_C::OnStop_A36844B94465CF4588117E8F9D053128()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnStop_A36844B94465CF4588117E8F9D053128");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnFinished_17DD4AB647EE736EB55EB19ECC0F2791
// (BlueprintCallable, BlueprintEvent)

void UBP_QuestInfoBase_C::OnFinished_17DD4AB647EE736EB55EB19ECC0F2791()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnFinished_17DD4AB647EE736EB55EB19ECC0F2791");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnStop_17DD4AB647EE736EB55EB19ECC0F2791
// (BlueprintCallable, BlueprintEvent)

void UBP_QuestInfoBase_C::OnStop_17DD4AB647EE736EB55EB19ECC0F2791()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnStop_17DD4AB647EE736EB55EB19ECC0F2791");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77");

	Params::BP_QuestInfoBase_C_OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2");

	Params::BP_QuestInfoBase_C_OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2");

	Params::BP_QuestInfoBase_C_OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547");

	Params::BP_QuestInfoBase_C_OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E");

	Params::BP_QuestInfoBase_C_OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_386CC3E241B30D007F23BE91158B202F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_386CC3E241B30D007F23BE91158B202F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_386CC3E241B30D007F23BE91158B202F");

	Params::BP_QuestInfoBase_C_OnDlgClosed_386CC3E241B30D007F23BE91158B202F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgClosed_229189604100CD879F284B8E7CAC7ECE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgClosed_229189604100CD879F284B8E7CAC7ECE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgClosed_229189604100CD879F284B8E7CAC7ECE");

	Params::BP_QuestInfoBase_C_OnDlgClosed_229189604100CD879F284B8E7CAC7ECE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestInfoBase_C::OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE");

	Params::BP_QuestInfoBase_C_OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_QuestInfoBase.BP_QuestInfoBase_C.IsProcessed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_QuestInfoBase_C::IsProcessed(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuestInfoBase_C", "IsProcessed");

	Params::BP_QuestInfoBase_C_IsProcessed Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
