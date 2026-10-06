#pragma once



// Package: BP_GatherQuestInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GatherQuestInfo.BP_GatherQuestInfo_C
// 0x0008 (0x0248 - 0x0240)
class UBP_GatherQuestInfo_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GatherQuestInfo_C;               // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_GatherQuestInfo(int32 EntryPoint);
	void ParseParaments(const TArray<class FString>& ParamentString);
	void HandleProcessing(int32 NPCId);
	void OnProgressEnd_FFDCEA5A454ED4E9B2FCB9BF5F34AD92(class UProgressBarWidget* ProgressBar);
	void OnDlgClosed_067409BF4F3D0CB707566ABA6DC88E85(int32 NPCId);
	void OnDlgSelectedOption_067409BF4F3D0CB707566ABA6DC88E85(int32 NPCId);
	bool IsProcessed(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GatherQuestInfo_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GatherQuestInfo_C")
	}
	static class UBP_GatherQuestInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GatherQuestInfo_C>();
	}
};
DUMPER7_ASSERTS_UBP_GatherQuestInfo_C;

SDK_NAMESPACE_END
