#pragma once



// Package: Quest_5618

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5618.Quest_5618_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5618_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5618_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5618(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0FD36C8C496916EC053332A8E5708D50(bool bWinOrLose);
	void OnFinished_9CF047104AA5F55EB10DEE820D70BA20();
	void OnStop_9CF047104AA5F55EB10DEE820D70BA20();
	void OnDlgClosed_9414A80C4094420C129E3D8F0029B38F(int32 NPCId);
	void OnDlgSelectedOption_9414A80C4094420C129E3D8F0029B38F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5618_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5618_C")
	}
	static class UQuest_5618_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5618_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5618_C;

SDK_NAMESPACE_END
