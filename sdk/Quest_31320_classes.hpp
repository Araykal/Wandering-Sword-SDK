#pragma once



// Package: Quest_31320

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_31320.Quest_31320_C
// 0x0030 (0x0270 - 0x0240)
class UQuest_31320_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_31320_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 Quest;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Quest_Id;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 NPCIDS;                                            // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_31320(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7780E31442BE48390607F3807500BE92();
	void OnStop_7780E31442BE48390607F3807500BE92();
	void OnDlgClosed_EB916B45477E987D571B25B73C0AC8BE(int32 NPCId);
	void OnDlgSelectedOption_EB916B45477E987D571B25B73C0AC8BE(int32 NPCId);
	void RemoveSkillAndGiveItem(int32 NPCId, int32 SkillId, int32 ItemDefId, int32 Num);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_31320_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_31320_C")
	}
	static class UQuest_31320_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_31320_C>();
	}
};
DUMPER7_ASSERTS_UQuest_31320_C;

SDK_NAMESPACE_END
