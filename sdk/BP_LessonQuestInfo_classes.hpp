#pragma once



// Package: BP_LessonQuestInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_LessonQuestInfo.BP_LessonQuestInfo_C
// 0x0028 (0x0268 - 0x0240)
class UBP_LessonQuestInfo_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LessonQuestInfo_C;               // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UFightLevelSetting*>             FightSettings;                                     // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 FightLevelSettingPath;                             // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LessonQuestInfo(int32 EntryPoint);
	void HandleProcessedFail(int32 NPCId);
	void HandleProcessed(int32 NPCId);
	void ParseParaments(const TArray<class FString>& ParamentString);
	void HandleProcessing(int32 NPCId);
	void OnDlgClosed_7AE36F8F4DC1CFACAF4F548AFD3BD870(int32 NPCId);
	void OnDlgSelectedOption_7AE36F8F4DC1CFACAF4F548AFD3BD870(int32 NPCId);
	void OnDlgClosed_CF8BBF934B3F668300C9B98541623C88(int32 NPCId);
	void OnDlgSelectedOption_CF8BBF934B3F668300C9B98541623C88(int32 NPCId);
	void OnSuccess_312C1AF6432F3AB366B271865EDD234C(bool bWinOrLose);
	void OnDlgClosed_607D4657431280E79B61DF97FAC27207(int32 NPCId);
	void OnDlgSelectedOption_607D4657431280E79B61DF97FAC27207(int32 NPCId);
	bool IsProcessed(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_LessonQuestInfo_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_LessonQuestInfo_C")
	}
	static class UBP_LessonQuestInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LessonQuestInfo_C>();
	}
};
DUMPER7_ASSERTS_UBP_LessonQuestInfo_C;

SDK_NAMESPACE_END
