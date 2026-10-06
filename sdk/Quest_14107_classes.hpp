#pragma once



// Package: Quest_14107

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14107.Quest_14107_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_14107_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14107_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_14107(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_E5A904AA41792DEE6A093F947FA8D809();
	void OnStop_E5A904AA41792DEE6A093F947FA8D809();
	void OnDlgClosed_3E95AB854A6B266948B8D8905E8D84CE(int32 NPCId);
	void OnDlgSelectedOption_3E95AB854A6B266948B8D8905E8D84CE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14107_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14107_C")
	}
	static class UQuest_14107_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14107_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14107_C;

SDK_NAMESPACE_END
