#pragma once



// Package: Quest_11848

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11848.Quest_11848_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11848_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11848_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11848(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3215525649E2771E9FA4D18D1C4CB96D();
	void OnStop_3215525649E2771E9FA4D18D1C4CB96D();
	void OnDlgClosed_2E73FB79499E2185483908B4ACA82664(int32 NPCId);
	void OnDlgSelectedOption_2E73FB79499E2185483908B4ACA82664(int32 NPCId);
	void OnSuccess_CEB008434EC6E8E49658E498C2D6A092(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11848_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11848_C")
	}
	static class UQuest_11848_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11848_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11848_C;

SDK_NAMESPACE_END
