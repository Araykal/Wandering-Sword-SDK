#pragma once



// Package: Quest_11457

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11457.Quest_11457_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11457_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11457_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11457(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_480DDEAD4C31D696B820F8925082BF40();
	void OnStop_480DDEAD4C31D696B820F8925082BF40();
	void OnDlgClosed_49E948724EA66008AD5C10A5EC6BBA32(int32 NPCId);
	void OnDlgSelectedOption_49E948724EA66008AD5C10A5EC6BBA32(int32 NPCId);
	void OnSuccess_99DE3B6645560FA4752CEBB48C6BDF17(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11457_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11457_C")
	}
	static class UQuest_11457_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11457_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11457_C;

SDK_NAMESPACE_END
