#pragma once



// Package: Quest_12115

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12115.Quest_12115_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12115_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12115_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12115(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3209BE914047374A1A250CA86DC7CF51();
	void OnStop_3209BE914047374A1A250CA86DC7CF51();
	void OnDlgClosed_2E06FC4D44A56ABC6545ADB4E0E3369D(int32 NPCId);
	void OnDlgSelectedOption_2E06FC4D44A56ABC6545ADB4E0E3369D(int32 NPCId);
	void OnSuccess_265D22A54471312BDD9C07B88B5549EC(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12115_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12115_C")
	}
	static class UQuest_12115_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12115_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12115_C;

SDK_NAMESPACE_END
