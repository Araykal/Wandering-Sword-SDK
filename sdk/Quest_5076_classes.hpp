#pragma once



// Package: Quest_5076

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5076.Quest_5076_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5076_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5076_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5076(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_68C6A2B5469AEFAC22EB919DA34F2B7D();
	void OnStop_68C6A2B5469AEFAC22EB919DA34F2B7D();
	void OnDlgClosed_6B6026624947D437B0D4C0AD71474747(int32 NPCId);
	void OnDlgSelectedOption_6B6026624947D437B0D4C0AD71474747(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5076_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5076_C")
	}
	static class UQuest_5076_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5076_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5076_C;

SDK_NAMESPACE_END
