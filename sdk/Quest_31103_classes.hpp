#pragma once



// Package: Quest_31103

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_31103.Quest_31103_C
// 0x0038 (0x0278 - 0x0240)
class UQuest_31103_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_31103_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 Buffs;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         RandBuff;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Buff;                                              // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quests;                                            // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsHasBuff;                                         // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Avoid_Index;                                       // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_31103(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FA2EAD4F490F9CC0E86D77996D8D937B();
	void OnStop_FA2EAD4F490F9CC0E86D77996D8D937B();
	void OnDlgClosed_B306A249438F388805B4D2A930F10804(int32 NPCId);
	void OnDlgSelectedOption_B306A249438F388805B4D2A930F10804(int32 NPCId);
	void 随机任务();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_31103_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_31103_C")
	}
	static class UQuest_31103_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_31103_C>();
	}
};
DUMPER7_ASSERTS_UQuest_31103_C;

SDK_NAMESPACE_END
