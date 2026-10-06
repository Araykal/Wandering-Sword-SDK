#pragma once



// Package: Quest_5171

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5171.Quest_5171_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5171_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5171_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5171(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_9A2C27C64682A137955B3FB2F2A1CA34();
	void OnStop_9A2C27C64682A137955B3FB2F2A1CA34();
	void OnDlgClosed_8B94CEAE459EC0E945D1AEAC348765BA(int32 NPCId);
	void OnDlgSelectedOption_8B94CEAE459EC0E945D1AEAC348765BA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5171_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5171_C")
	}
	static class UQuest_5171_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5171_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5171_C;

SDK_NAMESPACE_END
