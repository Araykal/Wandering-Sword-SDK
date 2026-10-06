#pragma once



// Package: Quest_5501

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5501.Quest_5501_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5501_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5501_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5501(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3304F8F44B9879F99811C7A232BF432F();
	void OnStop_3304F8F44B9879F99811C7A232BF432F();
	void OnDlgClosed_A6BD1AAA4BB6E9FBB85532B1A1135F89(int32 NPCId);
	void OnDlgSelectedOption_A6BD1AAA4BB6E9FBB85532B1A1135F89(int32 NPCId);
	void OnSuccess_78C1DB5444484A5146206998297245E6(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5501_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5501_C")
	}
	static class UQuest_5501_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5501_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5501_C;

SDK_NAMESPACE_END
