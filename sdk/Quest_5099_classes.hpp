#pragma once



// Package: Quest_5099

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5099.Quest_5099_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5099_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5099_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5099(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_038156804EB760DF9036A4BCBD353A65();
	void OnStop_038156804EB760DF9036A4BCBD353A65();
	void OnDlgClosed_A721BAAB407FB9534FAAFDAEE175B7AB(int32 NPCId);
	void OnDlgSelectedOption_A721BAAB407FB9534FAAFDAEE175B7AB(int32 NPCId);
	void OnSuccess_13F7936A48B96351E8FE00AEA1E9066D(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5099_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5099_C")
	}
	static class UQuest_5099_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5099_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5099_C;

SDK_NAMESPACE_END
