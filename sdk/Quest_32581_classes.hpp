#pragma once



// Package: Quest_32581

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_32581.Quest_32581_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_32581_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_32581_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 Buffs;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsHasBuff;                                         // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Avoid_Index;                                       // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_32581(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7659CE314BFC7B019093E180BCDA0B3F();
	void OnStop_7659CE314BFC7B019093E180BCDA0B3F();
	void OnDlgClosed_10BA523942C43BF4EBCD4AA51FA46372(int32 NPCId);
	void OnDlgSelectedOption_10BA523942C43BF4EBCD4AA51FA46372(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_32581_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_32581_C")
	}
	static class UQuest_32581_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_32581_C>();
	}
};
DUMPER7_ASSERTS_UQuest_32581_C;

SDK_NAMESPACE_END
