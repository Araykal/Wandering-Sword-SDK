#pragma once



// Package: Quest_30911

#include "Basic.hpp"

#include "Quest_30911_classes.hpp"
#include "Quest_30911_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30911.Quest_30911_C.ExecuteUbergraph_Quest_30911
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30911_C::ExecuteUbergraph_Quest_30911(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30911_C", "ExecuteUbergraph_Quest_30911");

	Params::Quest_30911_C_ExecuteUbergraph_Quest_30911 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30911.Quest_30911_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30911_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30911_C", "HandleFinishing");

	Params::Quest_30911_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30911.Quest_30911_C.OnSuccess_65296510418A6E8B21DB658614E8DF7D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30911_C::OnSuccess_65296510418A6E8B21DB658614E8DF7D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30911_C", "OnSuccess_65296510418A6E8B21DB658614E8DF7D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30911.Quest_30911_C.OnFinished_CF1C67814CA55AF4B292FA9C425E305E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30911_C::OnFinished_CF1C67814CA55AF4B292FA9C425E305E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30911_C", "OnFinished_CF1C67814CA55AF4B292FA9C425E305E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30911.Quest_30911_C.OnStop_CF1C67814CA55AF4B292FA9C425E305E
// (BlueprintCallable, BlueprintEvent)

void UQuest_30911_C::OnStop_CF1C67814CA55AF4B292FA9C425E305E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30911_C", "OnStop_CF1C67814CA55AF4B292FA9C425E305E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30911.Quest_30911_C.OnDlgClosed_D7173AC142478739BDF49DAEE2DFCB0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30911_C::OnDlgClosed_D7173AC142478739BDF49DAEE2DFCB0A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30911_C", "OnDlgClosed_D7173AC142478739BDF49DAEE2DFCB0A");

	Params::Quest_30911_C_OnDlgClosed_D7173AC142478739BDF49DAEE2DFCB0A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30911.Quest_30911_C.OnDlgSelectedOption_D7173AC142478739BDF49DAEE2DFCB0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30911_C::OnDlgSelectedOption_D7173AC142478739BDF49DAEE2DFCB0A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30911_C", "OnDlgSelectedOption_D7173AC142478739BDF49DAEE2DFCB0A");

	Params::Quest_30911_C_OnDlgSelectedOption_D7173AC142478739BDF49DAEE2DFCB0A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
