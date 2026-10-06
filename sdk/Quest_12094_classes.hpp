#pragma once



// Package: Quest_12094

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12094.Quest_12094_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12094_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12094_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12094(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A55937B147E3BF20F65892ABFE96FA26();
	void OnStop_A55937B147E3BF20F65892ABFE96FA26();
	void OnDlgClosed_BA8658C849831A540F380091E0BB0CE9(int32 NPCId);
	void OnDlgSelectedOption_BA8658C849831A540F380091E0BB0CE9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12094_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12094_C")
	}
	static class UQuest_12094_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12094_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12094_C;

SDK_NAMESPACE_END
