#pragma once



// Package: Quest_12801

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12801.Quest_12801_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12801_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12801_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12801(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_1E70D04245801FFD41E2A7870EEF2042();
	void OnStop_1E70D04245801FFD41E2A7870EEF2042();
	void OnDlgClosed_DC17CECC429B0025D6AA9A815CA500EE(int32 NPCId);
	void OnDlgSelectedOption_DC17CECC429B0025D6AA9A815CA500EE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12801_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12801_C")
	}
	static class UQuest_12801_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12801_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12801_C;

SDK_NAMESPACE_END
