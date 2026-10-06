#pragma once



// Package: Quest_16606

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16606.Quest_16606_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16606_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16606_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16606(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_3D92727F4D8EA39B9A68CB9A87069AFD(bool bWinOrLose);
	void OnFinished_4822EA9A4485A7117778B294FDD7410F();
	void OnStop_4822EA9A4485A7117778B294FDD7410F();
	void OnDlgClosed_A93999E24D22B3F968E68B982563F476(int32 NPCId);
	void OnDlgSelectedOption_A93999E24D22B3F968E68B982563F476(int32 NPCId);
	void OnSuccess_04D872754DB646F6E59241800696B970(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16606_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16606_C")
	}
	static class UQuest_16606_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16606_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16606_C;

SDK_NAMESPACE_END
