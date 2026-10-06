#pragma once



// Package: Quest_17563

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_17563.Quest_17563_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_17563_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_17563_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_17563(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_EBD9FFBA4D54B29A9E7A93A0FDB516A7();
	void OnStop_EBD9FFBA4D54B29A9E7A93A0FDB516A7();
	void OnDlgClosed_A595EE6A4D2A6836A5B279821E0BDC2E(int32 NPCId);
	void OnDlgSelectedOption_A595EE6A4D2A6836A5B279821E0BDC2E(int32 NPCId);
	void OnSuccess_8EEBBC684494F1F8D650DA8C619E66DD(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_17563_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_17563_C")
	}
	static class UQuest_17563_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_17563_C>();
	}
};
DUMPER7_ASSERTS_UQuest_17563_C;

SDK_NAMESPACE_END
