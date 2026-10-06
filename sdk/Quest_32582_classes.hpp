#pragma once



// Package: Quest_32582

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_32582.Quest_32582_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_32582_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_32582_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsHasBuff;                                         // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x3];                                      // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Avoid_Index;                                       // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quests;                                            // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_32582(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_B16B6C1D4B3CA632034F528E1D226CDA();
	void OnStop_B16B6C1D4B3CA632034F528E1D226CDA();
	void OnDlgClosed_EC37FBF94952EA1A56D7D49BAEDA7F6C(int32 NPCId);
	void OnDlgSelectedOption_EC37FBF94952EA1A56D7D49BAEDA7F6C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_32582_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_32582_C")
	}
	static class UQuest_32582_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_32582_C>();
	}
};
DUMPER7_ASSERTS_UQuest_32582_C;

SDK_NAMESPACE_END
