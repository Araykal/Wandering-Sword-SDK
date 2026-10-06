#pragma once



// Package: Quest_5063

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5063.Quest_5063_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5063_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5063_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5063(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_B6CB2DAF4DF6285A2B0C309B6C6FCA8E();
	void OnStop_B6CB2DAF4DF6285A2B0C309B6C6FCA8E();
	void OnDlgClosed_F3AD15234ED84401B232DA8962B86C47(int32 NPCId);
	void OnDlgSelectedOption_F3AD15234ED84401B232DA8962B86C47(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5063_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5063_C")
	}
	static class UQuest_5063_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5063_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5063_C;

SDK_NAMESPACE_END
