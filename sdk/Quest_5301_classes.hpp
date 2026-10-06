#pragma once



// Package: Quest_5301

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5301.Quest_5301_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5301_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5301_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5301(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_502FBCD44F8A8B903DB229A1F7BE89EA();
	void OnFinished_9D259F7249F603CA0FD1B8B58FE1F8BE();
	void OnStop_9D259F7249F603CA0FD1B8B58FE1F8BE();
	void OnDlgClosed_530DF4F84A77E8EE205DDD8E08982EF5(int32 NPCId);
	void OnDlgSelectedOption_530DF4F84A77E8EE205DDD8E08982EF5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5301_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5301_C")
	}
	static class UQuest_5301_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5301_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5301_C;

SDK_NAMESPACE_END
