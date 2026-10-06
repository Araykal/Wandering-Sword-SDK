#pragma once



// Package: Quest_28942

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28942.Quest_28942_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28942_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28942_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28942(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_28CD345F4A4A1C2529A82FA166833A01();
	void OnStop_28CD345F4A4A1C2529A82FA166833A01();
	void OnDlgClosed_DA873F8F4DA90545018F698E6B796CC4(int32 NPCId);
	void OnDlgSelectedOption_DA873F8F4DA90545018F698E6B796CC4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28942_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28942_C")
	}
	static class UQuest_28942_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28942_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28942_C;

SDK_NAMESPACE_END
