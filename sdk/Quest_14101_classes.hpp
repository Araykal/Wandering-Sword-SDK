#pragma once



// Package: Quest_14101

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14101.Quest_14101_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14101_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14101_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14101(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C904EF1C4031E2AEA616F3ADA1CF73F4();
	void OnStop_C904EF1C4031E2AEA616F3ADA1CF73F4();
	void OnDlgClosed_4C6806654393AAD4C2BBAFADEBC2832D(int32 NPCId);
	void OnDlgSelectedOption_4C6806654393AAD4C2BBAFADEBC2832D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14101_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14101_C")
	}
	static class UQuest_14101_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14101_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14101_C;

SDK_NAMESPACE_END
