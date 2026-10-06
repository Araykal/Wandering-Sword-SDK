#pragma once



// Package: Quest_11812

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11812.Quest_11812_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11812_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11812_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11812(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AD0ADB9B4577D236BAC4D9931CAFFD2A();
	void OnStop_AD0ADB9B4577D236BAC4D9931CAFFD2A();
	void OnDlgClosed_C0BF21144029E158AA4BA492E8CF6BFA(int32 NPCId);
	void OnDlgSelectedOption_C0BF21144029E158AA4BA492E8CF6BFA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11812_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11812_C")
	}
	static class UQuest_11812_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11812_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11812_C;

SDK_NAMESPACE_END
