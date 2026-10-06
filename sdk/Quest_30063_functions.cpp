#pragma once



// Package: Quest_30063

#include "Basic.hpp"

#include "Quest_30063_classes.hpp"
#include "Quest_30063_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30063.Quest_30063_C.ExecuteUbergraph_Quest_30063
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30063_C::ExecuteUbergraph_Quest_30063(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30063_C", "ExecuteUbergraph_Quest_30063");

	Params::Quest_30063_C_ExecuteUbergraph_Quest_30063 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30063.Quest_30063_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30063_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30063_C", "HandleFinishing");

	Params::Quest_30063_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30063.Quest_30063_C.OnSuccess_EFE3A84A4BDD69FD823306A522FDD60B
// (BlueprintCallable, BlueprintEvent)

void UQuest_30063_C::OnSuccess_EFE3A84A4BDD69FD823306A522FDD60B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30063_C", "OnSuccess_EFE3A84A4BDD69FD823306A522FDD60B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30063.Quest_30063_C.OnFinished_58EEB03741C0B01C33D938966E87185A
// (BlueprintCallable, BlueprintEvent)

void UQuest_30063_C::OnFinished_58EEB03741C0B01C33D938966E87185A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30063_C", "OnFinished_58EEB03741C0B01C33D938966E87185A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30063.Quest_30063_C.OnStop_58EEB03741C0B01C33D938966E87185A
// (BlueprintCallable, BlueprintEvent)

void UQuest_30063_C::OnStop_58EEB03741C0B01C33D938966E87185A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30063_C", "OnStop_58EEB03741C0B01C33D938966E87185A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30063.Quest_30063_C.OnDlgClosed_D984A6504DB8CAE782A62AB874AEA157
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30063_C::OnDlgClosed_D984A6504DB8CAE782A62AB874AEA157(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30063_C", "OnDlgClosed_D984A6504DB8CAE782A62AB874AEA157");

	Params::Quest_30063_C_OnDlgClosed_D984A6504DB8CAE782A62AB874AEA157 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30063.Quest_30063_C.OnDlgSelectedOption_D984A6504DB8CAE782A62AB874AEA157
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30063_C::OnDlgSelectedOption_D984A6504DB8CAE782A62AB874AEA157(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30063_C", "OnDlgSelectedOption_D984A6504DB8CAE782A62AB874AEA157");

	Params::Quest_30063_C_OnDlgSelectedOption_D984A6504DB8CAE782A62AB874AEA157 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
