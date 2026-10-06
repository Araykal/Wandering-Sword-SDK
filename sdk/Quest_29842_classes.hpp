#pragma once



// Package: Quest_29842

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29842.Quest_29842_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29842_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29842_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29842(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_694B61CE4814A5D2112BC98081FFC782(bool bWinOrLose);
	void OnFinished_D60A71F045CD12B7D58C33BF513330ED();
	void OnStop_D60A71F045CD12B7D58C33BF513330ED();
	void OnDlgClosed_32E5E5A242531233E91B3BBDBFF51805(int32 NPCId);
	void OnDlgSelectedOption_32E5E5A242531233E91B3BBDBFF51805(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29842_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29842_C")
	}
	static class UQuest_29842_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29842_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29842_C;

SDK_NAMESPACE_END
