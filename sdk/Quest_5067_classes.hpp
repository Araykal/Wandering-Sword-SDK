#pragma once



// Package: Quest_5067

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5067.Quest_5067_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5067_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5067_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5067(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_E250298F4457BF602BD0A0A9D4C0CE40();
	void OnStop_E250298F4457BF602BD0A0A9D4C0CE40();
	void OnDlgClosed_C69459E842D0AF1485CE09BDF40E2699(int32 NPCId);
	void OnDlgSelectedOption_C69459E842D0AF1485CE09BDF40E2699(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5067_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5067_C")
	}
	static class UQuest_5067_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5067_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5067_C;

SDK_NAMESPACE_END
