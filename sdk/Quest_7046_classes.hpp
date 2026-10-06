#pragma once



// Package: Quest_7046

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7046.Quest_7046_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7046_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7046_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7046(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_9AFC0469457D91DC5EC7D096AB2E02DF(int32 NPCId);
	void OnDlgSelectedOption_9AFC0469457D91DC5EC7D096AB2E02DF(int32 NPCId);
	void OnFinished_22B6BE31466FB1CF91E9FBAE40242674();
	void OnStop_22B6BE31466FB1CF91E9FBAE40242674();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7046_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7046_C")
	}
	static class UQuest_7046_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7046_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7046_C;

SDK_NAMESPACE_END
