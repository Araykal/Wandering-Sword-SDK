#pragma once



// Package: Quest_5356

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5356.Quest_5356_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5356_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5356_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5356(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F3E599834CC7C403C39683A9B09F966A();
	void OnStop_F3E599834CC7C403C39683A9B09F966A();
	void OnDlgClosed_BA25B5E64157D8957516AD89577F9580(int32 NPCId);
	void OnDlgSelectedOption_BA25B5E64157D8957516AD89577F9580(int32 NPCId);
	void OnSuccess_6FE6EF31473CC9721990619BA6485F97(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5356_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5356_C")
	}
	static class UQuest_5356_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5356_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5356_C;

SDK_NAMESPACE_END
