#pragma once



// Package: BP_TalkQuestInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_TalkQuestInfo.BP_TalkQuestInfo_C
// 0x0008 (0x0248 - 0x0240)
class UBP_TalkQuestInfo_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TalkQuestInfo_C;                 // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_TalkQuestInfo(int32 EntryPoint);
	void ParseParaments(const TArray<class FString>& ParamentString);
	void HandleProcessing(int32 NPCId);
	void OnDlgClosed_852DBC404ECC542C9B61818F6181A259(int32 NPCId);
	void OnDlgSelectedOption_852DBC404ECC542C9B61818F6181A259(int32 NPCId);
	bool IsProcessed(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_TalkQuestInfo_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_TalkQuestInfo_C")
	}
	static class UBP_TalkQuestInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TalkQuestInfo_C>();
	}
};
DUMPER7_ASSERTS_UBP_TalkQuestInfo_C;

SDK_NAMESPACE_END
