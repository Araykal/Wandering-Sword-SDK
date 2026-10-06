#pragma once



// Package: Quest_16672

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16672.Quest_16672_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_16672_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16672_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target_Level_Name1;                                // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_0;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16672(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_3C1E604744EAD91313A2F88A3293C2D7();
	void OnFinished_1E11D49843B7AD732A48ACA6272DEF44();
	void OnStop_1E11D49843B7AD732A48ACA6272DEF44();
	void OnDlgClosed_D4C8B467495F7890A523E78120EB50E9(int32 NPCId);
	void OnDlgSelectedOption_D4C8B467495F7890A523E78120EB50E9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16672_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16672_C")
	}
	static class UQuest_16672_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16672_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16672_C;

SDK_NAMESPACE_END
