#pragma once



// Package: Quest_28736

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28736.Quest_28736_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28736_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28736_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28736(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_824ECA0D42709AC2FB0B13B3F24BD756();
	void OnStop_824ECA0D42709AC2FB0B13B3F24BD756();
	void OnDlgClosed_B9ABBE8E48CA74CD0473DAB8DD48738E(int32 NPCId);
	void OnDlgSelectedOption_B9ABBE8E48CA74CD0473DAB8DD48738E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28736_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28736_C")
	}
	static class UQuest_28736_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28736_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28736_C;

SDK_NAMESPACE_END
