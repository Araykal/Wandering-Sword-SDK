#pragma once



// Package: Quest_12372

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12372.Quest_12372_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12372_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12372_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12372(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3C5B30364B1A58099E699B8D4FDAF486();
	void OnStop_3C5B30364B1A58099E699B8D4FDAF486();
	void OnDlgClosed_C5BB0FA547DFED8E967799996B29D344(int32 NPCId);
	void OnDlgSelectedOption_C5BB0FA547DFED8E967799996B29D344(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12372_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12372_C")
	}
	static class UQuest_12372_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12372_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12372_C;

SDK_NAMESPACE_END
