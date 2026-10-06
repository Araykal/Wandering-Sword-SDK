#pragma once



// Package: Quest_11845

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11845.Quest_11845_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11845_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11845_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11845(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AA2A18BF494957355757C0978CB6160A();
	void OnStop_AA2A18BF494957355757C0978CB6160A();
	void OnDlgClosed_56EFE0014AFE6D9F2F009EA14B092591(int32 NPCId);
	void OnDlgSelectedOption_56EFE0014AFE6D9F2F009EA14B092591(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11845_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11845_C")
	}
	static class UQuest_11845_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11845_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11845_C;

SDK_NAMESPACE_END
