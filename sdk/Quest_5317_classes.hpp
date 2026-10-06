#pragma once



// Package: Quest_5317

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5317.Quest_5317_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_5317_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5317_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_5317(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_441B0D01458A334D36A609A7149C2223();
	void OnStop_441B0D01458A334D36A609A7149C2223();
	void OnDlgClosed_5F1C7FC34AB15B16CE7C72843B1F09F4(int32 NPCId);
	void OnDlgSelectedOption_5F1C7FC34AB15B16CE7C72843B1F09F4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5317_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5317_C")
	}
	static class UQuest_5317_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5317_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5317_C;

SDK_NAMESPACE_END
