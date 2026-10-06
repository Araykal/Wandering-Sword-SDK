#pragma once



// Package: Quest_29804

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29804.Quest_29804_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29804_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29804_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29804(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A498EE614E0D8AAC071E4CBC1F46333E(bool bWinOrLose);
	void OnFinished_4FAE001F41C8F90141EE62A13330494F();
	void OnStop_4FAE001F41C8F90141EE62A13330494F();
	void OnDlgClosed_0018F1064F4064677E59D695F82664C5(int32 NPCId);
	void OnDlgSelectedOption_0018F1064F4064677E59D695F82664C5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29804_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29804_C")
	}
	static class UQuest_29804_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29804_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29804_C;

SDK_NAMESPACE_END
