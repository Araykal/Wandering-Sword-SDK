#pragma once



// Package: Quest_5203

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5203.Quest_5203_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5203_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5203_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5203(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A690CF59499EACD05DA70EA30B7075E3();
	void OnStop_A690CF59499EACD05DA70EA30B7075E3();
	void OnDlgClosed_FBB2262D41678977E21B7C95A93D3AD9(int32 NPCId);
	void OnDlgSelectedOption_FBB2262D41678977E21B7C95A93D3AD9(int32 NPCId);
	void OnSuccess_4F4949D144D0616E4EB39BB79ACF50EF(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5203_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5203_C")
	}
	static class UQuest_5203_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5203_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5203_C;

SDK_NAMESPACE_END
