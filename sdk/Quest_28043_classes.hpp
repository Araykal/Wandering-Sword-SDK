#pragma once



// Package: Quest_28043

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28043.Quest_28043_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28043_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28043_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28043(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_57535DE34FE9913315138484B0708B80();
	void OnStop_57535DE34FE9913315138484B0708B80();
	void OnDlgClosed_214EB59E4A498141D715CCA5C48C7DBD(int32 NPCId);
	void OnDlgSelectedOption_214EB59E4A498141D715CCA5C48C7DBD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28043_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28043_C")
	}
	static class UQuest_28043_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28043_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28043_C;

SDK_NAMESPACE_END
