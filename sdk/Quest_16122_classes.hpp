#pragma once



// Package: Quest_16122

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16122.Quest_16122_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16122_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16122_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16122(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4B267A2A43E20FB9524372938B35A9CC();
	void OnStop_4B267A2A43E20FB9524372938B35A9CC();
	void OnDlgClosed_096711834ECA61C0DF91BDA9BE747038(int32 NPCId);
	void OnDlgSelectedOption_096711834ECA61C0DF91BDA9BE747038(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16122_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16122_C")
	}
	static class UQuest_16122_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16122_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16122_C;

SDK_NAMESPACE_END
