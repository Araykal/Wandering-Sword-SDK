#pragma once



// Package: Quest_5105

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5105.Quest_5105_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5105_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5105_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5105(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7989BB4244EF35CEAF809ABA74810B8F();
	void OnStop_7989BB4244EF35CEAF809ABA74810B8F();
	void OnDlgClosed_B8AA536B404141D296EF38B63705CD92(int32 NPCId);
	void OnDlgSelectedOption_B8AA536B404141D296EF38B63705CD92(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5105_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5105_C")
	}
	static class UQuest_5105_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5105_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5105_C;

SDK_NAMESPACE_END
