#pragma once



// Package: Quest_5704

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5704.Quest_5704_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5704_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5704_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5704(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_655397D64F1141350D0354BC096A94B9();
	void OnStop_655397D64F1141350D0354BC096A94B9();
	void OnDlgClosed_0343E404427D13E36298A58B4E759373(int32 NPCId);
	void OnDlgSelectedOption_0343E404427D13E36298A58B4E759373(int32 NPCId);
	void OnSuccess_978A717D47A056F9425732AE0567EC9F(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5704_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5704_C")
	}
	static class UQuest_5704_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5704_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5704_C;

SDK_NAMESPACE_END
