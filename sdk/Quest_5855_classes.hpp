#pragma once



// Package: Quest_5855

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5855.Quest_5855_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5855_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5855_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5855(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_69C6A4F04CE84EB3121A4F8DEA93BD4A(bool bWinOrLose);
	void OnFinished_2274FE5A44ECBA0625E9F4BB2830C905();
	void OnStop_2274FE5A44ECBA0625E9F4BB2830C905();
	void OnDlgClosed_885002C04E9EC4017AF888ACBFE0A601(int32 NPCId);
	void OnDlgSelectedOption_885002C04E9EC4017AF888ACBFE0A601(int32 NPCId);
	void OnSuccess_877A12C74430FC9B938A37B24FF429B6(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5855_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5855_C")
	}
	static class UQuest_5855_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5855_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5855_C;

SDK_NAMESPACE_END
