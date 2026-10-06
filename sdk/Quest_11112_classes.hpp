#pragma once



// Package: Quest_11112

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11112.Quest_11112_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11112_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11112_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11112(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_BD6D3B5F4B99D1AB5465A4999D132721();
	void OnStop_BD6D3B5F4B99D1AB5465A4999D132721();
	void OnDlgClosed_ED0B263443DD75466C4D8F96A141224A(int32 NPCId);
	void OnDlgSelectedOption_ED0B263443DD75466C4D8F96A141224A(int32 NPCId);
	void OnSuccess_05DB8ADF4BCFB6382539548E3E3DA382(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11112_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11112_C")
	}
	static class UQuest_11112_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11112_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11112_C;

SDK_NAMESPACE_END
