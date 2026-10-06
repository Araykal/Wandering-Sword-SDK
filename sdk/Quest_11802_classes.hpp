#pragma once



// Package: Quest_11802

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11802.Quest_11802_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11802_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11802_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11802(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_45B4DEAB4B3184EC237403AE4F27B490();
	void OnStop_45B4DEAB4B3184EC237403AE4F27B490();
	void OnDlgClosed_5A2C915E4ADE994C950D9A93561B0CA8(int32 NPCId);
	void OnDlgSelectedOption_5A2C915E4ADE994C950D9A93561B0CA8(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11802_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11802_C")
	}
	static class UQuest_11802_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11802_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11802_C;

SDK_NAMESPACE_END
