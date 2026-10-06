#pragma once



// Package: Quest_5163

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5163.Quest_5163_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5163_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5163_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5163(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_95CCD6FD4544B78887AD568CC5EAEDF0();
	void OnStop_95CCD6FD4544B78887AD568CC5EAEDF0();
	void OnDlgClosed_6CF34C804B3C3E6228D00AAF3A0692B5(int32 NPCId);
	void OnDlgSelectedOption_6CF34C804B3C3E6228D00AAF3A0692B5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5163_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5163_C")
	}
	static class UQuest_5163_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5163_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5163_C;

SDK_NAMESPACE_END
