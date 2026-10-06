#pragma once



// Package: Quest_14156

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14156.Quest_14156_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14156_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14156_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14156(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4780A5154FA61C72EB1D2292BA158C53();
	void OnStop_4780A5154FA61C72EB1D2292BA158C53();
	void OnDlgClosed_C82DA0934F1ABFBBFA365DA1E4CE7FCE(int32 NPCId);
	void OnDlgSelectedOption_C82DA0934F1ABFBBFA365DA1E4CE7FCE(int32 NPCId);
	void OnSuccess_7312FD764A05FE7FBE6D2FB2C3186715(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14156_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14156_C")
	}
	static class UQuest_14156_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14156_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14156_C;

SDK_NAMESPACE_END
