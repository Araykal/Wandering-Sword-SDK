#pragma once



// Package: Quest_12084

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12084.Quest_12084_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12084_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12084_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12084(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_73CEFA0741F55F905D3526AC0B365749();
	void OnStop_73CEFA0741F55F905D3526AC0B365749();
	void OnDlgClosed_7F31C3C14BFD7F89E7F4E2BEA61A09B5(int32 NPCId);
	void OnDlgSelectedOption_7F31C3C14BFD7F89E7F4E2BEA61A09B5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12084_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12084_C")
	}
	static class UQuest_12084_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12084_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12084_C;

SDK_NAMESPACE_END
