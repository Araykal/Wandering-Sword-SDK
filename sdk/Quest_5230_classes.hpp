#pragma once



// Package: Quest_5230

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5230.Quest_5230_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5230_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5230_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5230(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AC353F2842A4CE3F1964D69BCC818B28();
	void OnStop_AC353F2842A4CE3F1964D69BCC818B28();
	void OnDlgClosed_655A5F42407426F3F9CC65824EE17283(int32 NPCId);
	void OnDlgSelectedOption_655A5F42407426F3F9CC65824EE17283(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5230_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5230_C")
	}
	static class UQuest_5230_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5230_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5230_C;

SDK_NAMESPACE_END
