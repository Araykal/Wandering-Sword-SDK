#pragma once



// Package: Quest_7091

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7091.Quest_7091_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7091_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7091_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7091(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D059A6B54BFA5AE7EE1B12ACD2FCE311();
	void OnStop_D059A6B54BFA5AE7EE1B12ACD2FCE311();
	void OnDlgClosed_11C0490E4F679DB3F60A6FAFCA283366(int32 NPCId);
	void OnDlgSelectedOption_11C0490E4F679DB3F60A6FAFCA283366(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7091_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7091_C")
	}
	static class UQuest_7091_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7091_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7091_C;

SDK_NAMESPACE_END
