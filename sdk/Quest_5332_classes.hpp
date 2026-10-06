#pragma once



// Package: Quest_5332

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5332.Quest_5332_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5332_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5332_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5332(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A1562A51416DE84223DF4589A1A91A38();
	void OnStop_A1562A51416DE84223DF4589A1A91A38();
	void OnDlgClosed_CDAD20844D9778E69A74A8A13C25A2F1(int32 NPCId);
	void OnDlgSelectedOption_CDAD20844D9778E69A74A8A13C25A2F1(int32 NPCId);
	void OnSuccess_2E46E853497BF8A279709F885BB0C8E3(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5332_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5332_C")
	}
	static class UQuest_5332_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5332_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5332_C;

SDK_NAMESPACE_END
