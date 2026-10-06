#pragma once



// Package: Quest_5034

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5034.Quest_5034_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5034_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5034_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5034(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_E3FECFA8480655D41347FE90B30DD197();
	void OnStop_E3FECFA8480655D41347FE90B30DD197();
	void OnDlgClosed_3593A4C24F84EC0BAEE5B595143ED76D(int32 NPCId);
	void OnDlgSelectedOption_3593A4C24F84EC0BAEE5B595143ED76D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5034_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5034_C")
	}
	static class UQuest_5034_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5034_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5034_C;

SDK_NAMESPACE_END
