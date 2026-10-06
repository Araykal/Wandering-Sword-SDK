#pragma once



// Package: Quest_30636

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30636.Quest_30636_C
// 0x0028 (0x0268 - 0x0240)
class UQuest_30636_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30636_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quest;                                             // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_30636(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AE6DEA674FB1BCF3E3D3FE84BC7E544E();
	void OnStop_AE6DEA674FB1BCF3E3D3FE84BC7E544E();
	void OnDlgClosed_0BE5044947AAC6650C7539A56B7D6CE1(int32 NPCId);
	void OnDlgSelectedOption_0BE5044947AAC6650C7539A56B7D6CE1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30636_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30636_C")
	}
	static class UQuest_30636_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30636_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30636_C;

SDK_NAMESPACE_END
