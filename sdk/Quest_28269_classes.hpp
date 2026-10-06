#pragma once



// Package: Quest_28269

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28269.Quest_28269_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28269_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28269_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28269(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0DCA259A4022CA9282170AA5AFF5D559();
	void OnStop_0DCA259A4022CA9282170AA5AFF5D559();
	void OnDlgClosed_A936870B45A2F3FAF246E5A663DD82E9(int32 NPCId);
	void OnDlgSelectedOption_A936870B45A2F3FAF246E5A663DD82E9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28269_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28269_C")
	}
	static class UQuest_28269_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28269_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28269_C;

SDK_NAMESPACE_END
