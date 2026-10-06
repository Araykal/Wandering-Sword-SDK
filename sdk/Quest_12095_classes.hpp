#pragma once



// Package: Quest_12095

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12095.Quest_12095_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12095_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12095_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12095(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_78FE642E479DC75C65B00B843EE9A6AD();
	void OnStop_78FE642E479DC75C65B00B843EE9A6AD();
	void OnDlgClosed_B7DDEAB042050853479AC9A0547C3511(int32 NPCId);
	void OnDlgSelectedOption_B7DDEAB042050853479AC9A0547C3511(int32 NPCId);
	void OnSuccess_BA818A74448B26B95F27099E07BB41D1(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12095_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12095_C")
	}
	static class UQuest_12095_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12095_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12095_C;

SDK_NAMESPACE_END
