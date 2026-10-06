#pragma once



// Package: Quest_14060

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14060.Quest_14060_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14060_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14060_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14060(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C736144C484CC0C54CED729B262DDFC0();
	void OnStop_C736144C484CC0C54CED729B262DDFC0();
	void OnDlgClosed_80DFFE3A47662560CF27A3A0B8164335(int32 NPCId);
	void OnDlgSelectedOption_80DFFE3A47662560CF27A3A0B8164335(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14060_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14060_C")
	}
	static class UQuest_14060_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14060_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14060_C;

SDK_NAMESPACE_END
