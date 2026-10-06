#pragma once



// Package: Quest_11879

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11879.Quest_11879_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11879_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11879_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11879(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_15CA62484CBDBE66B9DAAE9BAC2E4FBC();
	void OnStop_15CA62484CBDBE66B9DAAE9BAC2E4FBC();
	void OnDlgClosed_28819B074416FFDD316CB0A8680554D3(int32 NPCId);
	void OnDlgSelectedOption_28819B074416FFDD316CB0A8680554D3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11879_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11879_C")
	}
	static class UQuest_11879_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11879_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11879_C;

SDK_NAMESPACE_END
