#pragma once



// Package: Quest_12070

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12070.Quest_12070_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12070_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12070_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12070(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_1933456044CA12E257A55D9CB559CCED();
	void OnStop_1933456044CA12E257A55D9CB559CCED();
	void OnDlgClosed_77CD951C46966DEA4FC485928A9D5A33(int32 NPCId);
	void OnDlgSelectedOption_77CD951C46966DEA4FC485928A9D5A33(int32 NPCId);
	void OnSuccess_EECC34C14CF9E484AB2875BE09547FF4(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12070_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12070_C")
	}
	static class UQuest_12070_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12070_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12070_C;

SDK_NAMESPACE_END
