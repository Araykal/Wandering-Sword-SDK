#pragma once



// Package: Quest_7026

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7026.Quest_7026_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7026_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7026_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7026(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FBF2B95B42B085E2625AD0BCE24C6755();
	void OnStop_FBF2B95B42B085E2625AD0BCE24C6755();
	void OnDlgClosed_A7F09E844F87383FA323B7B2F540D7FF(int32 NPCId);
	void OnDlgSelectedOption_A7F09E844F87383FA323B7B2F540D7FF(int32 NPCId);
	void OnSuccess_A14BBA8F4370F352D82E97A32CDE739A(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7026_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7026_C")
	}
	static class UQuest_7026_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7026_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7026_C;

SDK_NAMESPACE_END
