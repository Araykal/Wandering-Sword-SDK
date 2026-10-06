#pragma once



// Package: Quest_28231

#include "Basic.hpp"

#include "Quest_28231_classes.hpp"
#include "Quest_28231_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28231.Quest_28231_C.ExecuteUbergraph_Quest_28231
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28231_C::ExecuteUbergraph_Quest_28231(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28231_C", "ExecuteUbergraph_Quest_28231");

	Params::Quest_28231_C_ExecuteUbergraph_Quest_28231 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28231.Quest_28231_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28231_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28231_C", "HandleFinishing");

	Params::Quest_28231_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28231.Quest_28231_C.OnFinished_85119D1848ECAA0F080FF68FE5126492
// (BlueprintCallable, BlueprintEvent)

void UQuest_28231_C::OnFinished_85119D1848ECAA0F080FF68FE5126492()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28231_C", "OnFinished_85119D1848ECAA0F080FF68FE5126492");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28231.Quest_28231_C.OnStop_85119D1848ECAA0F080FF68FE5126492
// (BlueprintCallable, BlueprintEvent)

void UQuest_28231_C::OnStop_85119D1848ECAA0F080FF68FE5126492()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28231_C", "OnStop_85119D1848ECAA0F080FF68FE5126492");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28231.Quest_28231_C.OnDlgClosed_EE98888E49DCA870BC2D6E8B66C3D90B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28231_C::OnDlgClosed_EE98888E49DCA870BC2D6E8B66C3D90B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28231_C", "OnDlgClosed_EE98888E49DCA870BC2D6E8B66C3D90B");

	Params::Quest_28231_C_OnDlgClosed_EE98888E49DCA870BC2D6E8B66C3D90B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28231.Quest_28231_C.OnDlgSelectedOption_EE98888E49DCA870BC2D6E8B66C3D90B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28231_C::OnDlgSelectedOption_EE98888E49DCA870BC2D6E8B66C3D90B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28231_C", "OnDlgSelectedOption_EE98888E49DCA870BC2D6E8B66C3D90B");

	Params::Quest_28231_C_OnDlgSelectedOption_EE98888E49DCA870BC2D6E8B66C3D90B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
