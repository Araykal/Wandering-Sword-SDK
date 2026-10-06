#pragma once



// Package: Quest_28929

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28929.Quest_28929_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28929_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28929_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28929(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_93E71E864313AE8AF4C9F4A198318859(bool bWinOrLose);
	void OnFinished_72638B194CF28A9A457875A82FB55159();
	void OnStop_72638B194CF28A9A457875A82FB55159();
	void OnDlgClosed_A8E398C8423917B54BC264ACA3C1059A(int32 NPCId);
	void OnDlgSelectedOption_A8E398C8423917B54BC264ACA3C1059A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28929_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28929_C")
	}
	static class UQuest_28929_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28929_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28929_C;

SDK_NAMESPACE_END
