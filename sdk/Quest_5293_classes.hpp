#pragma once



// Package: Quest_5293

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5293.Quest_5293_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5293_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5293_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5293(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_CAAF7F814D6AF1B3CD7878A0E65FE676(bool bWinOrLose);
	void OnSuccess_FCD8E1B644834441A68EF9AE0510ABD9(bool bWinOrLose);
	void OnSuccess_A2D9BE7947F6DCC56EC3B4B9C440C314(bool bWinOrLose);
	void OnFinished_D59770A3495F39EEB6D2DCA4CA0A546C();
	void OnStop_D59770A3495F39EEB6D2DCA4CA0A546C();
	void OnDlgClosed_1E5C19134ED10B2FB118AC8468F6F8F4(int32 NPCId);
	void OnDlgSelectedOption_1E5C19134ED10B2FB118AC8468F6F8F4(int32 NPCId);
	void OnSuccess_3650650341210D9AE86A7B91E5089F10(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5293_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5293_C")
	}
	static class UQuest_5293_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5293_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5293_C;

SDK_NAMESPACE_END
