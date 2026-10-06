#pragma once



// Package: Quest_14157

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14157.Quest_14157_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14157_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14157_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14157(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_979BBD7C4C1A32D10B43959ED8C19BD9();
	void OnStop_979BBD7C4C1A32D10B43959ED8C19BD9();
	void OnDlgClosed_D4EEAB9A43A17C738D1CCEB3177C0457(int32 NPCId);
	void OnDlgSelectedOption_D4EEAB9A43A17C738D1CCEB3177C0457(int32 NPCId);
	void OnSuccess_ADB20E894CB04F6875D9BA93B79EB720(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14157_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14157_C")
	}
	static class UQuest_14157_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14157_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14157_C;

SDK_NAMESPACE_END
