#pragma once



// Package: Quest_12703

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12703.Quest_12703_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12703_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12703_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12703(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D3FF81934F3AAF3D3FFE789A04F41F6E();
	void OnFinished_4A4848B04D94F8ABAA4FA999B43462A7();
	void OnStop_4A4848B04D94F8ABAA4FA999B43462A7();
	void OnDlgClosed_6E2D5BE047424888B82D0EA94FDB9867(int32 NPCId);
	void OnDlgSelectedOption_6E2D5BE047424888B82D0EA94FDB9867(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12703_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12703_C")
	}
	static class UQuest_12703_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12703_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12703_C;

SDK_NAMESPACE_END
