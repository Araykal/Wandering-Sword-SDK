#pragma once



// Package: Quest_18582

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_18582.Quest_18582_C
// 0x0028 (0x0268 - 0x0240)
class UQuest_18582_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_18582_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quest;                                             // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_18582(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DCE1059A44BA96B215EF8AA0142E8B46();
	void OnFinished_41E99F1D488E1887B443CA975844D69E();
	void OnStop_41E99F1D488E1887B443CA975844D69E();
	void OnDlgClosed_39974A8448E064DE97F45888CBC91A9B(int32 NPCId);
	void OnDlgSelectedOption_39974A8448E064DE97F45888CBC91A9B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_18582_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_18582_C")
	}
	static class UQuest_18582_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_18582_C>();
	}
};
DUMPER7_ASSERTS_UQuest_18582_C;

SDK_NAMESPACE_END
