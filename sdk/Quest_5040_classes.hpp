#pragma once



// Package: Quest_5040

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5040.Quest_5040_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5040_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5040_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5040(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_22F7B3034600557F7CEFBCBF507D0AD0();
	void OnStop_22F7B3034600557F7CEFBCBF507D0AD0();
	void OnDlgClosed_BBB1907E4C2EF7098618AE898D262E47(int32 NPCId);
	void OnDlgSelectedOption_BBB1907E4C2EF7098618AE898D262E47(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5040_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5040_C")
	}
	static class UQuest_5040_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5040_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5040_C;

SDK_NAMESPACE_END
