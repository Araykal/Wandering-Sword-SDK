#pragma once



// Package: Quest_11678

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11678.Quest_11678_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11678_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11678_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11678(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_60C38A714F0079E2B0F2C18C27315464();
	void OnStop_60C38A714F0079E2B0F2C18C27315464();
	void OnDlgClosed_FC16CDC64ED1C330B457E89AFE405B89(int32 NPCId);
	void OnDlgSelectedOption_FC16CDC64ED1C330B457E89AFE405B89(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11678_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11678_C")
	}
	static class UQuest_11678_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11678_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11678_C;

SDK_NAMESPACE_END
