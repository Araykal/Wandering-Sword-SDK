#pragma once



// Package: Quest_5803

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5803.Quest_5803_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5803_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5803_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5803(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_ACEBAD6340CB83E624893FACA44946CE();
	void OnStop_ACEBAD6340CB83E624893FACA44946CE();
	void OnDlgClosed_61F18C0D4923A916A64FB0B41707DDD6(int32 NPCId);
	void OnDlgSelectedOption_61F18C0D4923A916A64FB0B41707DDD6(int32 NPCId);
	void OnSuccess_DC3DB42C48A1F7828C25EEA953386E4D(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5803_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5803_C")
	}
	static class UQuest_5803_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5803_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5803_C;

SDK_NAMESPACE_END
